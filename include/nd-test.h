#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define ND_TEST_EXPORT __declspec(dllexport)
#else
  #define ND_TEST_EXPORT
#endif

ND_TEST_EXPORT void nd_test();
ND_TEST_EXPORT void nd_test_print_vector(const std::vector<std::string> &strings);
