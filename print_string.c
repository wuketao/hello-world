#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	char *buf[5] = {"Hello world", 
			"I want to see good thing", 
			"This is new day",
			"Is luck job",
			"Smile, health, long"};
	for (i = 0; i < 2; i++)
	{
		printf("\r\033[K\033[31m%s\033[36m%s\n", buf[i % 5], buf[(i + 1) % 5]);
		fflush(stdout);
		usleep(1000000);
		printf("\r\033[K%s\033[35m%s\n", buf[i % 5], buf[(i + 1) % 5]);
		fflush(stdout);
		usleep(1000000);
#if 0
		printf("\r\033[K%s\033[32m", buf[++i % 5]);
		fflush(stdout);
		usleep(1000000);
		printf("\r\033[K%s\033[33m", buf[++i % 5]);
		fflush(stdout);
		usleep(1000000);
#endif
	}

	return 0;
}
