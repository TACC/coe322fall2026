#!/bin/bash
# cbuild.sh -- configure, build and install a CMake project

usage() {
    cat <<EOF
Usage: $(basename "$0") [-h] [-m] DIRECTORY

Build and install the CMake project in DIRECTORY, which must contain a
CMakeLists.txt and the sources. The build tree goes in DIRECTORY/build and
the install tree in DIRECTORY/install.

Options:
  -h    show this help and exit
  -m    make only: if the build directory already exists, skip the cmake
        configure step and only run the compile and install phases
EOF
}

make_only=0
while getopts "hm" opt; do
    case $opt in
        h) usage; exit 0 ;;
        m) make_only=1 ;;
        *) usage >&2; exit 1 ;;
    esac
done
shift $((OPTIND - 1))

if [ $# -ne 1 ]; then
    echo "Error: exactly one directory argument is required" >&2
    usage >&2
    exit 1
fi

srcdir=$(cd "$1" 2>/dev/null && pwd) || { echo "Error: no such directory: $1" >&2; exit 1; }
if [ ! -f "$srcdir/CMakeLists.txt" ]; then
    echo "Error: no CMakeLists.txt in $srcdir" >&2
    exit 1
fi

builddir="$srcdir/build"
installdir="$srcdir/install"

set -e
if [ "$make_only" = 1 ] && [ -d "$builddir" ]; then
    echo "Build directory exists; skipping cmake step"
else
    /bin/rm -rf "$builddir" "$installdir"
    CXX=${TACC_CXX} cmake -S "$srcdir" -B "$builddir" -DCMAKE_INSTALL_PREFIX="$installdir"
fi

cmake --build "$builddir"
cmake --install "$builddir"
