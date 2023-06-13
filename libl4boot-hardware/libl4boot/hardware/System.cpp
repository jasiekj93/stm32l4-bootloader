#include "System.hpp"
#include <assert.h>

using namespace l4boot::hardware;

System* System::instance = nullptr;

System* System::getInstance()
{
    assert(instance);
    return instance;
}
