#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/types.h>


int main(int argc, char **argv)
{
	int pid;
	pid = fork();
	if(pid == 0)
		printf("[C] My PID is %d, my parent pid is pid %d\n", getpid(),getppid());
	else
	{
		printf("[P] My PID is %d, my parent pid is pid %d\n", getpid(), getppid());
		wait(NULL);
	}

		return 0;

}
