#include <iostream>

struct some_struct {
public:
  bool a;
};

const char *bool_str(bool x);

int main(int argc, char *argv[]) {
  some_struct b;
  b.a = false;

  std::cout << "b.a = " << bool_str(b.a) << ", !b.a = " << bool_str(!b.a)
            << ", !(b.a) = " << bool_str(!(b.a)) << std::endl;

  return EXIT_SUCCESS;
}

const char *bool_str(bool x) { return (x ? "true" : "false"); }
