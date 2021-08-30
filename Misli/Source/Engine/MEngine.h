#pragma once

class MISLI_API MEngine;

namespace Engine {

	enum EngineMode : INT {
		NONE, DEBUG, RELEASE, EDITOR, SERVER
	};
	
	extern MEngine g_MisliEngine;

	VOID MISLI_API SetMode(EngineMode mode);
	EngineMode MISLI_API GetMode();

	std::wstring MISLI_API EngineModeToString();
}

using namespace Engine;
class MISLI_API MEngine {

public:
	MEngine();
	~MEngine();

private:
	EngineMode m_EngineMode;

public:
	EngineMode GetEngineMode();
	VOID SetEngineMode(EngineMode mode);
};
