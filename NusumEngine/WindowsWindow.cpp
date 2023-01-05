#include "WindowsWindow.h"

LRESULT CALLBACK WindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_CLOSE:
		DestroyWindow(hWnd);
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		return 0;
	}

	return DefWindowProc(hWnd, uMsg, wParam, lParam);
}

WindowsWindow::WindowsWindow() : hInstance(GetModuleHandle(nullptr))
{
	// do nothing for now
	// but in futur we need to initial windows minimum variables
	// we can initailize hInstance using
	// extern "c" HINSTANCE hInstance;
}

WindowsWindow::~WindowsWindow()
{
	// in futur i need to write destroy() to destroy window insted of this.
	// Means in future this would be empty implementation.
	UnregisterClass(CLASS_NAME, hInstance);
}

void WindowsWindow::initWindow()
{
	WNDCLASSEX wndClass = {};
	wndClass.lpfnWndProc = WindowProc;
	wndClass.lpszClassName = CLASS_NAME;
	wndClass.hCursor = LoadCursor(NULL, IDC_ARROW);
	wndClass.hInstance = hInstance;
	wndClass.hIcon = LoadIcon(NULL, IDI_WINLOGO);
	wndClass.cbSize = sizeof(WNDCLASSEX);
	wndClass.hbrBackground = (HBRUSH)COLOR_WINDOW;

	RegisterClassEx(&wndClass);

	int width = 640;
	int height = 480;

	RECT rect = {0, 0, 0, 0};
	rect.left = 250;
	rect.top = 250;
	rect.right = rect.left + width;
	rect.bottom = rect.top + height;

	DWORD style = WS_CAPTION | WS_MINIMIZEBOX | WS_SYSMENU;

	AdjustWindowRectEx(&rect, style, false, false);

	hWnd = CreateWindowEx(0, 
		CLASS_NAME, 
		TEXT("FirstWindow"), 
		style,
		rect.left, 
		rect.top, 
		rect.right - rect.left, 
		rect.bottom - rect.top, 
		NULL, 
		NULL, 
		hInstance, 
		NULL);

	/*
	if(hWnd == NULL) 
	{
		// in futur I need to write some destroy related code like (destroy thread)
		// and destroy other objects and processors 
		#error "Window creation failed"
	}
	*/

	ShowWindow(hWnd, SW_SHOW);
}

bool WindowsWindow::processMessage()
{
	MSG msg = {};
	while(PeekMessage(&msg, NULL, 0, 0, PM_REMOVE)) 
	{
		if (msg.message == WM_QUIT) {
			return false;
		}
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return true;
}


