#pragma once

#include "SubObject.h"

namespace Win32 {

	class MISLI_API Window : public Win32::SubObject {

	public:
		Window(std::wstring className, std::wstring classTitle, HICON icon, INT width, INT height);
		~Window();

		virtual VOID Initialize() override;

	private:
		INT				m_Width;
		INT				m_Height;
	};
}