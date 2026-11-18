vector<float> random_step() {
  // according to the lecture notes this is not entirely correct
  std::random_device r;
  std::default_random_engine generator{ r() };
  std::uniform_real_distribution<float> distribution(0.,WRONG);

  vector<float> inc(2);
  auto random_angle= distribution(generator);
  // set to random unit vector
  return inc;
}

int main(int argc,char** argv) {

  vector<float> position{0.f,0.f};
  for ( /* number of steps */ ) {
    auto increment = random_step();
    /* add increment to position */
  }
  // evaluate final distance

  return 0;
};
  
