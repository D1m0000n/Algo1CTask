#include "Algo.h"
#include <iostream>

void Algo::Solve() {
  Scan();
  //run GetMinCourses
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
std::pair<int, std::unordered_set<unsigned int>> Algo::GetMinCourses(unsigned int id, std::unordered_set<unsigned int> used) {
  used.insert(id);
  auto current_course = relations_.courses[id];
  std::vector <int> do_later;//can choose different tasks
  std::unordered_set<unsigned int> current_used;
  for (size_t i = 0; i < current_course.children_.size(); ++i) {
    if (current_course[i].size() > 1) {
      do_later.push_back(i);
    } else {
      unsigned int cur_if = current_course[i][0];
      auto res = GetMinCourses(id, used);
      current_used = res.second;
    }
  }

  for (size_t i = 0; i < do_later.size(); ++i) {
    //check for level of get min from tasks
  }
  //also check for level 3 tasks if they are not used
  //return minimum of all condiditons
  return {current_used.size(), current_used}
}
