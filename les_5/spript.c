#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main () {
	int pid_1, pid_2;
	pid_1 = fork();
	if (pid_1 == 0) {
		//parent
		exit(0);
		
	} else if (pid_1 >0) {
		//child
		pid_2 = fork();
		sleep(5);

	}
	return 0;


}
