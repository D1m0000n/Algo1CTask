//#include "Algo.h"
#include <iostream>
#include "Algo.h"

void Algo::Solve() {
  Scan();
  //run GetMinCourses by using priority queue
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
  std::unordered_set<unsigned int> current_used = used;
  auto current_course = relations_.courses_[id];

  for (const auto & child : current_course.children_) { // compulsory courses
    if (child.size() > 1) {
      continue;
    }
    unsigned int cur_id = child[0];
    if (used.find(cur_id) == used.end()) {
      GetMinCourses(cur_id, current_used);
    }
  }

  for (const auto & child : current_course.children_) {
    if (child.size() <= 1) {
      continue;
    }
    //здесь придется сливать сеты, потому что у нас может быть несколько различных курсов на выбор(то есть 2/3, 4/5,
    //например) А также проверить на приритеты, если является 2м уровнем

  }
  //also check for level 3 tasks if they are not used
  //return minimum of all condiditons
  return {current_used.size(), current_used}
}
