#include "Algo.h"
#include <iostream>

void Algo::Solve() {
  Scan();



}

void Algo::Scan() {
  for (size_t i = 0; i < 21; ++i) {
    unsigned int priority;
    std::cin >> priority;
    second_priorities_[i] = priority;
  }
  std::cin >> third_.first >> third_.second;
  std::cin >> fifth_;
  std::cin >> tasks_;
}
std::pair<int, std::vector<int>> Algo::GetMinCourses(unsigned int id, std::unordered_set<unsigned int> used) {


}
