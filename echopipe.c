#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
int main()
{
	int fd[2],fd1[2],nbyte;
	pid_t cpid;
	char buf[80];
	char string[]="hello D";int ch;
	pipe(fd);
	pipe(fd1);

	if ((cpid=fork())==-1)
	{
		perror("fork");
		exit(1);
	}

	if (cpid==0)
	{
		printf("\nchild writing");
		close(fd[0]);
		write(fd[1],string,(strlen(string)+1));
		wait(NULL);
		close(fd1[1]);
		nbyte = read(fd1[0],buf,sizeof(buf));
		printf("\n'C' received string:%s",buf);
		exit(0);
	}
	else
	{
		close(fd[1]);
		printf("\nparent reading");
		nbyte = read(fd[0],buf,sizeof(buf));
		printf("\n'P'received string:%s",buf);
		close(fd1[0]);
		printf("\n'P' writing:");
		write(fd1[1],buf,sizeof(buf));
	}
return 0;
}

