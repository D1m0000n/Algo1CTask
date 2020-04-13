#pragma once
#include <string>
#include <vector>
#include <unordered_set>

class Course {
 public:
//  Course(std::string  name, unsigned int id);
  Course() = default;

  void SetName(std::string name) {
    name_ = std::move(name);
  }

  [[nodiscard]] std::string GetName() const {
    return name_;
  }

  void SetId(const unsigned int id) {
    id_ = id;
  }

  [[nodiscard]] unsigned int GetId() const {
    return id_;
  }

  void AddChild(std::vector<unsigned int>& ids) {
    children_.insert(std::move(ids));
  }

  void AddPred(const unsigned int id) {
    pred_.insert(id);
  }

  std::unordered_set<std::vector<unsigned int>> children_;
  std::unordered_set<unsigned int> pred_;

 private:
  std::string name_;
  unsigned int id_;
};

