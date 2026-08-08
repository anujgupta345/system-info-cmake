#include "system_info.h"

#include "../include/platform.h"
#include "../include/cpu.h"
#include "../include/memory.h"
#include "../include/endian.h"

#include <iostream>

namespace SystemInfo
{

void print()
{
    std::cout << "========================================\n";
    std::cout << "           SYSTEM INFORMATION\n";
    std::cout << "========================================\n\n";

    Platform::print();

    std::cout << '\n';

    CPU::print();

    std::cout << '\n';

    Memory::print();

    std::cout << '\n';

    Endian::print();

    std::cout << "\n========================================\n";
}

}
