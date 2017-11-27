#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[])
{
	int i,fd1;

	if(argc < 2){
		printf(2, "Usage: cant create\n");
		exit();
	}

	for(i = 1; i < argc; i++){
		if((fd1 = open(argv[1], O_CREATE|O_RDWR)) < 0){
			printf(2, "touch: %s failed to create\n", argv[i]);
			break;
		}
	}

  exit();
}
