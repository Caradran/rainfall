#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*auth;
char	*service;


int main(void)
{
	char buf[128];

	while (1)
	{
		printf("%p, %p \n", auth, service);
		if (fgets(buf, 128, stdin) == NULL)
			return 0;
		if (strncmp(buf, "auth ", 5) == 0)
		{
			auth = malloc(4);
			auth[0] = 0;
			if (strlen(&(buf[5])) <= 30)
				strcpy(auth, &(buf[5]));
		}
		if (strncmp(buf, "reset", 5) == 0)
			free(auth);
		if (strncmp(buf, "service", 6) == 0)
			service = strdup(&(buf[7]));
		if (strncmp(buf, "login", 5) == 0)
		{
			if (auth[32] == 0)
				fwrite("Password:\n", 1, 10, stdout);
			else
				system("/bin/sh");
		}
	}
	return 0;
}
