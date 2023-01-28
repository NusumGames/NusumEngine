#include <iostream>
#include "NEWindowsWindow.h"

void createWindow()
{
	std::cout << "Welcome to NusumEngine!" << std::endl;

	NEWindowsWindow* wWindow = new NEWindowsWindow();
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
}

int main() {
	
	createWindow();

	//std::cout << (0x0) << std::endl;


	


	std::cin.get();

}