#include <stdio.h>
#include <stdlib.h>

//½Ç½À 6 (5°Ç³Ê¶Ü) 

int main(int argc, char *argv[])
{
  
  int i=100;
  int *p=&i;
  int **q=&p;
  
  *p=200; 
  printf("i=%i, *p=%d, **q=%d\n",i,*p,**q);
  
  **q=300;
  printf("i=%i, *p=%d, **q=%d\n", i, *p, **q);
  
  system("PAUSE");	
  return 0;
}
