#pragma once
#include <iostream>

struct NEMonitorInfo
{
	std::string name;
	std::string id;
	bool isPrimary;



};

enum class EWindowTitleAlignment
{
	//  Display window title at left side of title bar
	LETF, 
	//  Display window title at right side of title bar
	RIGHT, 
	//  Display window title at center of title bar
	CENTER
};



class NEGenericApplication
{
};

