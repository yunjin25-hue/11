#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  //½Ç½À 2
  
  int i=300; 
  
  int *pi=&i;
  char *pc=&i;
  
  printf("%i, %i, %i\n",i,*pi,*pc);
  
  system("PAUSE");	
  return 0;
}
