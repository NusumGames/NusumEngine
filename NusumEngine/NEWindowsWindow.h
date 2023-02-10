#pragma once
#include <Windows.h>
#include "NEPlatform.h"
#include "NEWindowsApplication.h"
#include "NEGenericWindowDefinition.h"
#include "memory"

LRESULT CALLBACK WindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

class NEWindowsWindow
{
public:
	NEWindowsWindow();
	~NEWindowsWindow();

	// Windows specific functions
	std::shared_ptr<NEWindowsWindow> make(); // This will not create window. its just initialize properties of window and return shared reference.
	void initWindow(); // only testing/practice purpose
	void initWindow(NEWindowsApplication* const application, std::shared_ptr<NEWindowsWindow> parentWindow, std::shared_ptr<FGenericWindowDefinition> definiton, HINSTANCE hInstance);
	void createPushButton(HWND parentHWnd);
	bool processMessage();
	HWND getHWnd() const;

private:
	HINSTANCE hInstance;
	HWND hWnd;
	const wchar_t* CLASS_NAME = TEXT("NusumEngineWindow");
};

