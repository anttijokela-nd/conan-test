#include "nd-test.h"
#include <vector>
#include <string>

int main() {
    nd_test();

    std::vector<std::string> vec;
    vec.push_back("test_package");

    nd_test_print_vector(vec);
}
