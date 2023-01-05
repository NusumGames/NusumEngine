#include <iostream>
#include "WindowsWindow.h"

int main() {
	
	std::cout << "Welcome to NusumEngine!" << std::endl;

	WindowsWindow* wWindow = new WindowsWindow();
	wWindow->initWindow();
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


	std::cin.get();

}