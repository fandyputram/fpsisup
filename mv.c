#include "types.h"
#include "stat.h"
#include "user.h"

int main (int argc, char *argv[]){
  if (argc != 3){
    printf(2, "Usage: mv file path\n");
    exit();
  }
  if ((link(argv[1], argv[2]) < 0) || (unlink(argv[1]) < 0))
    printf(2, "Mv %s to %s failed\n", argv[1], argv[2]);

  exit();
}
