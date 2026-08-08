#include "memory.h"

#include <iostream>

namespace Memory
{

void print()
{
    std::cout << "Memory information:\n";

#ifdef TOTAL_PHYSICAL_MEMORY
    std::cout << "Total Physical   : "
              << TOTAL_PHYSICAL_MEMORY
              << " MiB\n";
#endif

#ifdef AVAILABLE_PHYSICAL_MEMORY
    std::cout << "Available Physical: "
              << AVAILABLE_PHYSICAL_MEMORY
              << " MiB\n";
#endif

#ifdef TOTAL_VIRTUAL_MEMORY
    std::cout << "Total Virtual    : "
              << TOTAL_VIRTUAL_MEMORY
              << " MiB\n";
#endif

#ifdef AVAILABLE_VIRTUAL_MEMORY
    std::cout << "Available Virtual: "
              << AVAILABLE_VIRTUAL_MEMORY
              << " MiB\n";
#endif
}

}
