#pragma once

namespace Win32 {

	class MISLI_API SubObject {

	public:
		SubObject(std::wstring className, std::wstring classTitle, HICON icon);
		~SubObject();

	private:
		std::wstring			m_Class;
		std::wstring			m_Title;

		HICON					m_hIcon;
	};
}