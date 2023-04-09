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
	//wWindow->createPushButton(wWindow->getHWnd());
	wWindow->createTextBox(wWindow->getHWnd());
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

void printWideChar(WIDECHAR msg)
{
	std::cout << msg << std::endl;
}

int main() {

	createWindow();


	std::cin.get();

}