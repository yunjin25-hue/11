#include <stdio.h>
#include <stdlib.h>

//실습 7

char *proverb="All that glisters is not gold.";
void setPointer(char** q)  // 1. 여기에 이중포인터 적용시 
{
  *q=proverb; // 2. 여기에 *하나 붙이고 
}

int main(int argc, char *argv[])
{
  char *p="zzz";
  
  setPointer(&p); // 3. 여기에 &붙이기 
  printf("%s \n",p);
  
  system("PAUSE");	
  return 0;
}
