#include "Misli.h"
#include "Window.h"

namespace Win32 {

	Window::Window(std::wstring className, std::wstring classTitle, HICON icon, INT width, INT height)
		: Win32::SubObject(className,classTitle,icon), m_Width(width), m_Height(height)
	{
			
	}

	Window::~Window()
	{
	}
	VOID Window::Initialize()
	{
		HWND hWnd = CreateWindow(m_Class.c_str(), m_Title.c_str(), WS_OVERLAPPEDWINDOW,
			CW_USEDEFAULT, 0, m_Width, m_Height, nullptr, nullptr, HInstance(), (void*)this);
		if (!hWnd) {
			MessageBox(0, L"Failed to Create Window!.", 0, 0);
			PostQuitMessage(0);
		}

		ShowWindow(hWnd, SW_SHOW);
	}
}
