#pragma once
#include "NEGenericPlatform.h"

struct NEWindowsPlatform : public NEGenericPlatform
{
#ifdef _WIN64
	typedef unsigned __int64	SIZE_T;
	typedef __int64				SSIZE_T;
#else
	typedef unsigned long		SIZE_T;
	typedef long				SSIZE_T;
#endif
};

typedef NEWindowsPlatform NEPlatformType;



