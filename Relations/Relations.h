#pragma once

#include "Course.h"
#include <string>
#include <vector>

class Relations {
 public:
  Relations();

  void SetCourses(const std::string& name, unsigned int id, unsigned int level, std::vector<std::vector<unsigned int>>& needs);
  std::vector<Course> courses_;
 private:
  unsigned int number_of_courses_;
};