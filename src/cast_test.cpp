#include <iostream>

int main(int argc, char *argv[]) {
  unsigned int a = 2158091854;
  int b = -2136875442;

  std::cout << "a (unsigned int) = " << a << ", (int)a = " << (int)a
            << ", (unsigned int)a = " << (unsigned int)a
            << ", (long)a = " << (long)a
            << ", (unsigned long)a = " << (unsigned long)a << std::endl;

  std::cout << "b (int) = " << b << ", (int)b = " << (int)b
            << ", (unsigned int)b = " << (unsigned int)b
            << ", (long)b = " << (long)b
            << ", (unsigned long)b = " << (unsigned long)b << std::endl;

  unsigned long c = (unsigned long)a;

  std::cout << "c (unsigned long) = " << c << ", (int)c = " << (int)c
            << ", (unsigned int)c = " << (unsigned int)c
            << ", (long)c = " << (long)c
            << ", (unsigned long)c = " << (unsigned long)c << std::endl;

  return EXIT_SUCCESS;
}
