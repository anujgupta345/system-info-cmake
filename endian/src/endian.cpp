#include "endian.h"

#include <iostream>

namespace Endian
{

void print()
{
    std::cout << "Architecture information:\n";

#ifdef POINTER_SIZE
    std::cout << "Pointer Size     : "
              << POINTER_SIZE
              << " bytes\n";

    if (POINTER_SIZE == 8)
        std::cout << "Architecture     : 64-bit\n";
    else if (POINTER_SIZE == 4)
        std::cout << "Architecture     : 32-bit\n";
#endif

#ifdef BYTE_ORDER
    std::cout << "Byte Order       : " << BYTE_ORDER << '\n';
#endif
}

}
