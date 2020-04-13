#include "Relations.h"

void Relations::SetCourses(const std::string& name, unsigned int id, unsigned int level, std::vector<std::vector<unsigned int>>& needs) {
  courses_[id].SetName(name);
  courses_[id].SetLevel(level);
  courses_[id].SetId(id);
  for (auto & need : needs) {
    courses_[id].AddChild(need);
  }
}
Relations::Relations() {
  number_of_courses = 66;
}
