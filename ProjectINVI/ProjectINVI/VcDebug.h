#pragma once

#include <stdio.h>
#include <stdarg.h>
#include <ctype.h>
#include <Windows.h>
#include <sstream>

class VcDebug
{
public:
	static void odprintf(const char* format, ...);
};

