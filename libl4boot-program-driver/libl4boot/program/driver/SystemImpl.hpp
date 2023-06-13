#pragma once

/**
 * @file SystemImpl.hpp
 * @author Adrian Szczepanski
 * @date 2023-06-12
 */

#include <libl4boot/program/hardware/System.hpp>

namespace l4boot::program::driver
{
	class SystemImpl : public hardware::System
	{
	public:
		SystemImpl();

        void delay(unsigned ms) override;
	};
}
