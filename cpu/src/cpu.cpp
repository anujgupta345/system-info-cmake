#include "cpu.h"

#include <iostream>

namespace CPU
{

void print()
{
    std::cout << "CPU information:\n";

#ifdef LOGICAL_CORES
    std::cout << "Logical Cores    : " << LOGICAL_CORES << '\n';
#endif

#ifdef PHYSICAL_CORES
    std::cout << "Physical Cores   : " << PHYSICAL_CORES << '\n';
#endif

#ifdef PROCESSOR_NAME
    std::cout << "Processor Name   : " << PROCESSOR_NAME << '\n';
#endif

#ifdef PROCESSOR_DESCRIPTION
    std::cout << "Description      : " << PROCESSOR_DESCRIPTION << '\n';
#endif

#ifdef IS_64BIT
    std::cout << "64-bit Processor : " << IS_64BIT << '\n';
#endif
}

}
