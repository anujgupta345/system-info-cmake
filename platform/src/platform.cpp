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

#ifdef HOST_OS_NAME
    std::cout << "Host OS          : "
              << HOST_OS_NAME << '\n';
#endif

#ifdef HOST_OS_VERSION
    std::cout << "Host Version     : "
              << HOST_OS_VERSION << '\n';
#endif

#ifdef HOST_PROCESSOR
    std::cout << "Host Processor   : "
              << HOST_PROCESSOR << '\n';
#endif

#ifdef PLATFORM_NAME
    std::cout << "Platform         : "
              << PLATFORM_NAME << '\n';
#endif

    // Ask the selected platform implementation
    // to print its specific information.
    printSpecific();
}

}