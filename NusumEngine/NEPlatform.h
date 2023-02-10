#pragma once

#define TEXT_FORMAT_UTF8(x) u8 ## x
#define TEXT_FORMAT_UTF16(x) u ## x
#define TEXT_FORMAT_UTF32(x) L ## x


#ifdef PLATFORM_SUPPORTED_CHAR_IS_UTF8
#define GET_TEXT(x) TEXT_FORMAT_UTF8(x)
#elif defined(PLATFORM_SUPPORTED_CHAR_IS_UTF16)
#define GET_TEXT(x) TEXT_FORMAT_UTF16(x)
#else
#define GET_TEXT(x) TEXT_FORMAT_UTF32(x)
#endif // !PLATFORM_CHAR_IS_UTF8

#define TEXT(x) GET_TEXT(x)

#define PLATFORM_WINDOW 1
#define PLATFORM_WINDOW_64BIT 1
#define PLATFORM_WINDOW_32BIT 0

#if defined(PLATFORM_WINDOW)
	#include "NEWindowsPlatform.h"
#endif // defined(PLATFORM_WINDOW)

typedef NEPlatformType::uint8	  uint8;
typedef NEPlatformType::uint16	  uint16;
typedef NEPlatformType::uint32	  uint32;
typedef NEPlatformType::uint64	  uint64;
typedef NEPlatformType::int8	  int8;
typedef NEPlatformType::int16	  int16;
typedef NEPlatformType::int32	  int32;
typedef NEPlatformType::int64	  int64;
typedef NEPlatformType::ANSICHAR  ANSICHAR;
typedef NEPlatformType::WIDECHAR  WIDECHAR;
typedef NEPlatformType::CHAR8	  CHAR8;
typedef NEPlatformType::CHAR16	  CHAR16;
typedef NEPlatformType::CHAR32	  CHAR32;
typedef NEPlatformType::UPTRINT	  UPTRINT;
typedef NEPlatformType::PTRINT	  PTRINT;
typedef NEPlatformType::SIZE_T	  SIZE_T;
typedef NEPlatformType::SSIZE_T	  SSIZE_T;