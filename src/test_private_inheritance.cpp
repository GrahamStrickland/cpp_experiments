#include "derived_class.h"

int main(int argc, char *argv[]) {
  base_class b;
  derived_class d;

  b.a_method();
  d.a_method();

  return EXIT_SUCCESS;
}
