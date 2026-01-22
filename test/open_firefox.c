#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	printf("Hello before calling execv()\n");

	const char *path = "/usr/bin/firefox";
	char *argv[] = {
		"firefox",
		"--incognito",
		"https://www.youtube.com/watch?v=SwIPOf2YAgI",
		NULL
	};

	execv(path, argv);
	printf("hello after calling execv()\n");
}

