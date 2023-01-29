#pragma once
//#undef UNICODE
#include <Windows.h>
#include "NEPlatform.h"

LRESULT CALLBACK WindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

class NEWindowsWindow
{
public:
	NEWindowsWindow();
	~NEWindowsWindow();
	void initWindow();
	void createPushButton(HWND parentHWnd);
	bool processMessage();
	HWND getHWnd() const;

private:
	HINSTANCE hInstance;
	HWND hWnd;
	const wchar_t* CLASS_NAME = TEXT("NusumEngineWindow");
};

