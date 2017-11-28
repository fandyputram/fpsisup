#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

char buf[512];
char buf1[512];
int main(int argc, char *argv[])
{
	int fd0,fd1,fd2,n,m;

	if(argc < 3){
		printf(1, "Need 2 arguments\n");
		exit();
	}

	if((fd0 = open(argv[1], O_RDONLY)) < 0){
		printf(1,"cp: cant not open %s\n",argv[1]);
		exit();
	}

	if((fd1 = open(argv[2], O_RDONLY)) < 0){
		printf(1,"cp: cant not open %s\n",argv[2]);
		exit();
	}

	close(fd0);
	close(fd1);
  exit();
}
