#include <stdio.h>
#include "hello_world.h"

int main(int argc, char *argv[])
{
	const char *str = NULL;

	str = hello();
	printf("str:%s\n", str);

	return 0;
}
