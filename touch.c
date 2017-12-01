#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[])
{
	int i,fd1;

	if(argc < 2){
		printf(2, "need at least 2 arguments\n");
		exit();
	}

	for(i = 1; i < argc; i++){
		if((fd1 = open(argv[i], O_CREATE|O_RDWR)) < 0){
			printf(2, "failed to create %s\n", argv[i]);
			break;
		}
	}

  exit();
}
