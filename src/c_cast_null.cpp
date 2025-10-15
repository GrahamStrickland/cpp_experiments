#include <iostream>

int main(int argc, char *argv[]) {
  const char *result;

  result = "hello";

  std::cout << result << std::endl;

  result = (const char *) nullptr;

  std::cout << result << std::endl;

  return EXIT_SUCCESS;
}
