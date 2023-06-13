#pragma once

/**
 * @file Task.hpp
 * @author Adrian Szczepanski
 * @date 2023-06-12
 */

namespace l4boot::program::application
{
	class Task
	{
	public:
		Task();

        void execute();
	};
}
