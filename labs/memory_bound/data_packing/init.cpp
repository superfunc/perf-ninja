
#include "solution.h"
#include <random>

void init(std::array<S, N> &arr) {
  std::default_random_engine generator;
  std::uniform_int_distribution<int> distribution(minRandom, maxRandom - 1);

  for (int i = 0; i < N; i++) {
    int random_int1 = distribution(generator);
    int random_int2 = distribution(generator);

    arr[i].i = static_cast<char>(random_int1); // could be a char due to 0 <= maxRandom < 100
    arr[i].s = static_cast<char>(random_int2); // could be a char due to 0 <= maxRandom < 100
    arr[i].l = static_cast<short>(random_int1) * random_int2; // multiply of two char shoudl fit in a short
    arr[i].d = static_cast<float >(random_int1) / maxRandom; // double to float, loosing precision is acceptable? ;)
    arr[i].b = random_int1 < random_int2;
  }
}
