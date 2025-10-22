#include "base_class.h"

class derived_class: private base_class
{
public:
  void a_method();
};
