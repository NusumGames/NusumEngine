#pragma once

#include <iostream>

#include "NEPlatform.h"
#include "InputNameConstants.h"
#include "NEWindowsWindow.h"
#include "PracticeTest.h"


void createWindow()
{
	std::cout << "Welcome to NusumEngine!" << std::endl;

	NEWindowsWindow* wWindow = new NEWindowsWindow();
	wWindow->initWindow();
	wWindow->createPushButton(wWindow->getHWnd());
	bool isRunning = true;
	while (isRunning)
	{
		if (!wWindow->processMessage()) {
			std::cout << TEXT("Closing Window") << std::endl;
			isRunning = false;
		}
		//Render content
		Sleep(10);
	}
}

void getMonitorInfo()
{
	// this will get display resolution by excluding taskbar area.
	RECT rect;
	HMONITOR hMonitor = MonitorFromRect(&rect, MONITOR_DEFAULTTONEAREST);
	MONITORINFOEX monitorInfo;
	monitorInfo.cbSize = sizeof(MONITORINFO);
	if (!::GetMonitorInfo(hMonitor, &monitorInfo)) {
		std::cout << "Failed to fetch monitor infor" << std::endl;
	}
	std::cout << "monitorInfo.rcWork.left : " << monitorInfo.rcWork.left << " monitorInfo.rcWork.top : " << monitorInfo.rcWork.top << std::endl;
	std::cout << "monitorInfo.rcWork.right : " << monitorInfo.rcWork.right << " monitorInfo.rcWork.bottom : " << monitorInfo.rcWork.bottom << std::endl;
}

void getWorkAreaExcludingTaskBar()
{
	// this will get display resolution by excluding taskbar area.
	RECT WorkAreaRect;
	if (!SystemParametersInfo(SPI_GETWORKAREA, 0, &WorkAreaRect, 0))
	{
		WorkAreaRect.top = WorkAreaRect.bottom = WorkAreaRect.left = WorkAreaRect.right = 0;
	}
	std::cout << "WorkAreaRect.left : " << WorkAreaRect.left << " WorkAreaRect.top : " << WorkAreaRect.top << std::endl;
	std::cout << "WorkAreaRect.right : " << WorkAreaRect.right << " WorkAreaRect.bottom: " << WorkAreaRect.bottom << std::endl;
}

void getCurrentDisplayResolutionIncludingTaskbarArea()
{
	int resolutionX = ::GetSystemMetrics(SM_CXSCREEN);
	int resolutionY = ::GetSystemMetrics(SM_CYSCREEN);
	std::cout << "ResolutionX : " << resolutionX << " ResolutionY : " << resolutionY << std::endl;
}

void mouseEventExample()
{
	INPUT input;
	ZeroMemory(&input, sizeof(input));

	input.type = INPUT_KEYBOARD;
	input.ki.wVk = 'D'; // 
}

void printWideChar(WIDECHAR msg)
{
	std::cout << msg << std::endl;
}

//typedef unsigned int 

int main() {
	
	//createWindow();

	dataTypesComparision();

	//printWideChar(InputNameConstant::STR_ZERO);

	/*uint8 charA = 'A';
	std::cout << "Char A : " << charA << std::endl;*/
	
	//std::cout << (0x0) << std::endl;

	//getCurrentDisplayResolutionIncludingTaskbarArea();
	//getMonitorInfo();
	//getWorkAreaExcludingTaskBar();


	std::cin.get();

}