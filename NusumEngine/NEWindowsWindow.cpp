#include "NEWindowsWindow.h"
#include <iostream>
#include <thread>


void printKeyCodes(WPARAM wParam)
{
	switch (wParam)
	{
	case 'a':
		std::cout << "a : " << wParam << std::endl;
		break;
	case 'A':
		std::cout << "A : " << wParam << std::endl;
		break;
	case 'b':
		std::cout << "b : " << wParam << std::endl;
		break;
	case 'B':
		std::cout << "B : " << wParam << std::endl;
		break;
	case '0':
		std::cout << "0 : " << wParam << std::endl;
		break;
	case '1':
		std::cout << "1 : " << wParam << std::endl;
		break;
	case '2':
		std::cout << "2 : " << wParam << std::endl;
		break;
	case '3':
		std::cout << "3 : " << wParam << std::endl;
		break;
	case '4':
		std::cout << "4 : " << wParam << std::endl;
		break;
	case '5':
		std::cout << "5 : " << wParam << std::endl;
		break;
	case '6':
		std::cout << "6 : " << wParam << std::endl;
		break;
	case '7':
		std::cout << "7 : " << wParam << std::endl;
		break;
	case '8':
		std::cout << "8 : " << wParam << std::endl;
		break;
	case '9':
		std::cout << "9 : " << wParam << std::endl;
		break;
	case ')':
		std::cout << ") : " << wParam << std::endl;
		break;
	case ' ':
		std::cout << "SpaceBar : " << wParam << std::endl;
		break;
	case '@':
		std::cout << "@ : " << wParam << std::endl;
		break;

	}
}


LRESULT CALLBACK WindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	//std::cout << "hWnd : " << hWnd << " uMsg : " << uMsg << " wParam : " << wParam << " lParam : " << lParam << std::endl;


	printKeyCodes(wParam);

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

NEWindowsWindow::NEWindowsWindow() : hInstance(GetModuleHandle(nullptr))
{
	// do nothing for now
	// but in futur we need to initial windows minimum variables
	// we can initailize hInstance using
	// extern "c" HINSTANCE hInstance;
}

NEWindowsWindow::~NEWindowsWindow()
{
	// in futur i need to write destroy() to destroy window insted of this.
	// Means in future this would be empty implementation.
	UnregisterClass(CLASS_NAME, hInstance);
}

std::shared_ptr<NEWindowsWindow> NEWindowsWindow::make()
{
	return std::shared_ptr<NEWindowsWindow>();
}

void NEWindowsWindow::initWindow()
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
	rect.left = 400; // x position
	rect.top = 400; // y position
	rect.right = rect.left + width; // width
	rect.bottom = rect.top + height; // height
	

	DWORD style = WS_OVERLAPPEDWINDOW | WS_CAPTION | WS_MINIMIZEBOX | WS_SYSMENU;

	AdjustWindowRectEx(&rect, style, false, WS_EX_WINDOWEDGE);

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

	std::cout << "Initial Parent HWND : " << hWnd << std::endl;

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

void NEWindowsWindow::initWindow(NEWindowsApplication* const application, std::shared_ptr<NEWindowsWindow> parentWindow, std::shared_ptr<FGenericWindowDefinition> definiton, HINSTANCE hInstance)
{


}

void NEWindowsWindow::createPushButton(HWND parentHWnd)
{
	std::cout << "Parent HWND passing to createButtonWindow : " << parentHWnd << std::endl;
	HWND hwndButton = CreateWindow(
		L"BUTTON",  // Predefined class; Unicode assumed 
		L"OK",      // Button text 
		WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,  // Styles 
		10,         // x position 
		10,         // y position 
		100,        // Button width
		100,        // Button height
		parentHWnd,     // Parent window
		NULL,       // No menu.
		(HINSTANCE)GetWindowLongPtr(parentHWnd, GWLP_HINSTANCE),
		NULL);      // Pointer not needed.
	std::cout << "Button HWND : " << hwndButton << std::endl;
}

bool NEWindowsWindow::processMessage()
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

HWND NEWindowsWindow::getHWnd() const
{
	return hWnd;
}


