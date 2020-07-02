#include <iostream>

#include "ixy/ixy.hpp"
#include "ixy/stats.hpp"

auto main(int argc, char *argv[]) -> int {
    if (argc != 3) {
        std::cout << "Usage: " << argv[0] << " <pci bus id2> <pci bus id1>" << std::endl;
        return 1;
    }

    std::cout << ixy::diff_mpps(1000, 200, 1000000000) << std::endl;

    auto dev = ixy::ixy_init(argv[1], 1, 1);

    return 0;
}
