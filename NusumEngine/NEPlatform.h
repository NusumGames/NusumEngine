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