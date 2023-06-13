#pragma once

/**
 * @file Led.hpp
 * @author Adrian Szczepanski
 * @date 2023-06-12
 */

namespace l4boot::program::hardware
{
	class Led
	{
	public:
		virtual ~Led() {}

        virtual void toggle() = 0;

		static Led* getInstance();

	protected:
		static Led* instance;
	};
}
