#include "Init.hpp"
#include <main.h>

using namespace l4boot;

void driver::init()
{
    cubeHardwareInit();
}