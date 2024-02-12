#pragma once

#ifndef _MSC_VER

#endif

#include <stdlib.h>

#include <stdio.h>

void check_null_alloc(const void* ptr, const char* msg) {
	if (ptr == NULL) {
		printf(msg);
		getchar();
		exit(1);
	}
}
