#include <stdio.h>

int main(int argc, char *argv[])
{
  char *name;
  
  if (argc < 2) {
    printf("please input you name!\n");
    return -1;
  }
  
  if (argv[1] == NULL) {
    printf("there is a error!\n");
    return -1;
  }
  
  name = argv[1];
  
  printf("welcome to my word!!!\n");
  printf("%s\n", name);
  
  return 0;
}
