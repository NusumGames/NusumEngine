#pragma once

/*
TSelectIntPointerType Template will decide which pointer to select bassed on size of integer.
This Template Struct is very important to support bothe 32 bit/ 63 bit platforms.
And will be used for all Operating Systems like Windows, Mac etc...
*/

template<typename INT32BIT, typename INT64BIT, int pointerSize>
struct TSelectIntPointerType
{
	// overloaded templates will decide  which pointer to select.
};

template<typename INT32BIT, typename INT64BIT>
struct TSelectIntPointerType<INT32BIT, INT64BIT, 4>
{
	typedef INT32BIT INTPOINTER
};

template<typename INT32BIT, typename INT64BIT>
struct TSelectIntPointerType<INT32BIT, INT64BIT, 8>
{
	typedef INT64BIT INTPOINTER
};

/*
NEGenericDataTypes is use to set fixed naming conversions to c++ data types.
These naming conversions will be used in entire application
*/

struct NEGenericDataTypes
{
	// naming convensions for all unsigned primitive data types
	typedef unsigned char uint8;
	typedef unsigned short int uint16;
	typedef unsigned int uint32;
	typedef unsigned long long uint64;

	// naming convensions for all signed primitive data types
	typedef signed char int8;
	typedef signed short int int16;
	typedef signed int int32;
	typedef signed long long int64;

	// it is 8-bit fixed representation of 7-bit char.
	typedef char ANSICHAR;

	// it can be different size in different platforms
	typedef wchar_t WIDECHAR;

	typedef uint8 CHAR8;
	typedef uint16 CHAR16;
	typedef uint32 CHAR32;

	// Unsigned int. The same size as a pointer.
	typedef TSelectIntPointerType<uint32, uint64, sizeof(void*)>::INTPOINTER UPTRINT;

	// Signed int. The same size as a pointer.
	typedef TSelectIntPointerType<int32, int64, sizeof(void*)>::INTPOINTER PTRINT;

	// Unsigned int. The same size as a pointer.
	typedef UPTRINT SIZE_T;

	// Signed int. The same size as a pointer.
	typedef PTRINT SSIZE_T;

};




