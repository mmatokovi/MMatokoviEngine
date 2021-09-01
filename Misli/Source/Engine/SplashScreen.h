#pragma once

#include "Platform/WIN32/Window.h"

namespace SplashScreen {

	VOID MISLI_API Open();
	VOID MISLI_API Close();
	VOID MISLI_API AddMessage(CONST WCHAR* message);

}
class MISLI_API SplashWindow : public Win32::Window{
public:
	SplashWindow();
	~SplashWindow();

	virtual			LRESULT				MessageHandler(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam) override;

private:
	WCHAR m_outputMessage[MAX_NAME_STRING];
};
