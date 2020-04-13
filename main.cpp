#include <iostream>

#include "Course.h"

int main() {
  std::string s;
  std::cin >> s;
  Course C;
  C.SetName(s);
  std::cout << C.GetName();
}