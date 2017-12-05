<<<<<<< HEAD
#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[]){
  if(argc<2){
    printf(1,"need 2 arguments\n");
    exit();
  }  

  if(chdir(argv[1])<0){
    printf(1,"Failed to change directory\n");
  }
  exit();
}
=======
#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  int i;

  if(argc < 2){
    printf(2, "Usage: chdir files...\n");
    exit();
  }

  for(i = 1; i < argc; i++){
    if(chdir(argv[i]) < 0){
      printf(2, "chdir: %s failed to create\n", argv[i]);
      break;
    }
  }

  exit();
}
>>>>>>> 417b2c74f2c875045517083de0ac42d56b9b7d6e
