#include "platform.h"

#include <iostream>

namespace Platform
{

void print()
{
    std::cout << "Platform information:\n";

#ifdef TARGET_OS_NAME
    std::cout << "Target OS        : "
              << TARGET_OS_NAME << '\n';
#endif

#ifdef TARGET_OS_VERSION
    std::cout << "Target Version   : "
              << TARGET_OS_VERSION << '\n';
#endif

#ifdef TARGET_PROCESSOR
    std::cout << "Target Processor : "
              << TARGET_PROCESSOR << '\n';
#endif

#ifdef TARGET_POINTER_SIZE
    std::cout << "Pointer Size     : "
              << TARGET_POINTER_SIZE
              << " bytes\n";
#endif

#ifdef TARGET_BYTE_ORDER
    std::cout << "Byte Order       : "
              << TARGET_BYTE_ORDER << '\n';
#endif
printSpecific();
}

}