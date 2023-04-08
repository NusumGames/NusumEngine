#pragma once
#include <iostream>
#include "NEPlatform.h"

struct NEMonitorInfo
{
	std::string name;
	std::string id;
	bool isPrimary;
};

enum class EWindowTitleAlignment
{
	//  Display window title at the left side of the title bar LEFT
	LETF, 
	//  Display window title at the right side of the title bar RIGHT
	RIGHT, 
	//  Display window title at the center of the title bar CENTER
	CENTER
};

struct ModifieKey
{
	enum Key : uint8
	{
		NONE = 0,
		CONTOL = 1 << 0,
		ALT = 1 << 1,
		SHIFT = 1 << 2
	};

	static Key FromBools(const bool isCtrlPressed, const bool isAltPressed, const bool isShiftPressed)
	{
		Key k = NONE;
		if (isCtrlPressed)	k = static_cast<Key>(k | CONTOL);
		if (isAltPressed)	k = static_cast<Key>(k | ALT);
		if (isShiftPressed)	k = static_cast<Key>(k | SHIFT);
		return k;
	}

};

class NEGenericApplication
{
	//ModifieKey::Key key = ModifieKey::FromBools(true, true, true);



};


