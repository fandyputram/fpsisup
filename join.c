#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"


char buf[10];
char buf1[10];
char *token,*token1;
int main(int argc, char *argv[])
{
	int fd0,fd1,fd2;

	if(argc <= 3){
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

	if((fd2 = open(argv[3], O_CREATE|O_RDWR)) < 0){
		printf(1,"cp: cant not open %s\n",argv[3]);
		exit();
	}

	while(fgets(buf,sizeof(buf),fd0)!=NULL && fgets(buf,sizeof(buf1),fd1)!=NULL){
		token=strtok(buf," ,."); token1=strtok(buf1," ,.");
		while( token != NULL && token1 != NULL) {
		    fputs(token,fd2); fputs(token1,fd2);	      	    
			
		    token = strtok(NULL, " ,."); token1 = strtok(NULL, " ,.");
	   	}
	}
	close(fd0);
	close(fd1);
	close(fd2);
  exit();
}
