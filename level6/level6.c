#include <stdio.h>
#include <stdlib.h>

void m(void)
{
	puts("Nope");
	return;
}

void n(void)
{
	system("/bin/cat /home/user/level7/.pass");
	return;
}

void main(int ac, char **av)
{
	char *str;
	code *f;

	str = malloc(64);
	f = malloc(4);
	*f = (void*)m;
	strcpy(str, av[1]);
	f();
	return ;
}
