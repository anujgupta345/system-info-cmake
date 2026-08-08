#pragma once

namespace Platform
{
    void print();

    // Implemented by unix.cpp OR windows.cpp
    void printSpecific();
}