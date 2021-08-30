#pragma once

#include "Platform/Win32/IApplication.h"

namespace Misli {

	class MISLI_API Simulation : public Win32::IApplication {

	public:
		Simulation();
		~Simulation();
	};

}
