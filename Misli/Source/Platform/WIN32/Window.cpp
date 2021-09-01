#include "Misli.h"
#include "Window.h"

namespace Win32 {

	Window::Window(std::wstring className, std::wstring classTitle, HICON icon, INT width, INT height))
		: Win32::SubObject(className,classTitle,icon) m_with(with), m_height(height)
	{
			
	}

	Window::~Window()
	{
	}
}
