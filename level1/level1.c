#include <stdio.h>
#include <stdlib.h>

int     main(int argc, char **argv)
{
	char buf[64];
	gets(buf);
}

void    run()
{
	fwrite("Good... Wait what?\n", 13, 1, stdout);
	system("/bin/sh");
}
