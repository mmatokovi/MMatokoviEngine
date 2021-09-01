#include "Misli.h"
#include "SplashScreen.h"

VOID MISLI_API SplashScreen::Open()
{
	return VOID MISLI_API();
}

VOID MISLI_API SplashScreen::Close()
{
	return VOID MISLI_API();
}

VOID MISLI_API SplashScreen::AddMessage(const WCHAR* message)
{
	return VOID MISLI_API();
}

SplashWindow::SplashWindow()
	: Win32::Window(L"SplashScreen", L"SplashScreen", NULL, 500, 600)
{
	wcscpy_s(m_outputMessage, L"SplashScreen Starting...");
}

SplashWindow::~SplashWindow()
{
}
