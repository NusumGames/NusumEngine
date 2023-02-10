#pragma once

// this macro is used to return content as a string literal.
#define PREPROCESSOR_TO_STRING(x) #x

// this macro is used to combine two TOKENS x & y. But this will not return as string literal
#define PREPROCESSOR_TO_JOIN(x, y) x##y



