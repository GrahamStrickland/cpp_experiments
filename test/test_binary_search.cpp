#include <boost/test/data/test_case.hpp>
#include <boost/test/included/unit_test.hpp>

#define BOOST_TEST_MODULE test_algorithms

BOOST_AUTO_TEST_SUITE(test_search)

int32_t input_arrs[4][8] = {{26, 31, 41, 41, 58, 59, 101, 104},
                            {26, 31, 41, 41, 58, 59, 101, 104},
                            {1, 4, 5, 7, 19, 28, 45, 92},
                            {1, 4, 5, 7, 19, 28, 45, 92}};
int32_t input_vals[] = {31, 32, 92, 101};
int32_t expected_vals[] = {1, -1, 7, -1};

auto test_cases = boost::unit_test::data::make(input_arrs) ^
                  boost::unit_test::data::make(input_vals) ^
                  boost::unit_test::data::make(expected_vals);

BOOST_DATA_TEST_CASE(test_binary_search, test_cases, input_arr, nu, exp) {
  auto obs = binary_search(input_arr, 8, nu);

  BOOST_ASSERT(obs == exp);
}
