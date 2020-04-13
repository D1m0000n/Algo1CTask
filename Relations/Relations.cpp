
#include "Relations.h"

void Relations::SetCourses(const std::string& name, unsigned int id, unsigned int level, std::vector<std::vector<unsigned int>>& needs) {
  courses_[id].SetName(name);
  courses_[id].SetLevel(level);
  for (auto & need : needs) {
    courses_[id].AddChild(need);
  }
}
Relations::Relations() {
  number_of_courses_ = 66;
  courses_.resize(66);

  for (size_t i = 0; i < number_of_courses_; ++i) {
    courses_[i].SetId(i);
  }
}
