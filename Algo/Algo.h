#pragma once
#include "Relations.h"
#include <unordered_map>

class Algo {
 public:
  Algo() = default;

  void Solve();

 private:
  void Scan();

  std::pair<int, std::vector<int>> GetMinCourses(unsigned int id, std::unordered_set<unsigned int> used);

  std::pair<unsigned int, unsigned int> third_;
  unsigned int fifth_;
  unsigned int tasks_;
  Relations relations_;
  std::unordered_map <unsigned int, unsigned int> second_priorities_;
};
