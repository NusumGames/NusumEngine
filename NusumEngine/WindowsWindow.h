#pragma once
//#undef UNICODE
#include <Windows.h>
#include "Platform.h"

LRESULT CALLBACK WindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

class WindowsWindow
{
public:
	WindowsWindow();
	~WindowsWindow();

	void initWindow();
	bool processMessage();

private:
	HINSTANCE hInstance;
	HWND hWnd;
	const wchar_t* CLASS_NAME = TEXT("NusumEngineWindow");
};

