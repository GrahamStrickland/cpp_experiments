#include <iostream>

#include "derived_class.h"

int main(int argc, char *argv[]) {
  base_class b;
  derived_class d;

  b.a_method();
  d.a_method();

  std::cout << b.name << std::endl;
  // std::cout << d.name << std::endl;

  return EXIT_SUCCESS;
}
