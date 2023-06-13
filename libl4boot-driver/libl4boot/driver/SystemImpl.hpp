#pragma once

/**
 * @file SystemImpl.hpp
 * @author Adrian Szczepanski
 * @date 2023-06-12
 */

#include <libl4boot/hardware/System.hpp>

namespace l4boot::driver
{
	class SystemImpl : public hardware::System
	{
	public:
		SystemImpl();

        void setStackAndJump(uint32_t stackPointer, uint32_t jumpAddress) override;
	};
}
