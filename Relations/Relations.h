#pragma once

#include "Course.h"
#include <vector>

class Relations {
 public:
  Relations() {
    number_of_courses_ = 66;
    courses_.resize(66);

    for (size_t i = 0; i < number_of_courses_; ++i) {
      courses_[i].SetId(i);
    }
  };

  void SetCourses(const std::string& name, unsigned int id, std::vector<std::vector<unsigned int>>& needs) {
    courses_[id].SetName(name);
    for (auto & need : needs) {
      courses_[id].AddChild(need);
    }
  }

 private:
  unsigned int number_of_courses_;
  std::vector<Course> courses_;
};
