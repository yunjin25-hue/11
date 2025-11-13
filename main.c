#include <stdio.h>
#include <stdlib.h>

//½Ç½À 4

int main(int argc, char *argv[])
{
  
  int i;
  int grade[5];
  int sum=0;
  
  for(i=0; i<5; i++)
  {
     printf("grade[%i]=",i);
     scanf("%d",&grade[i]);
  }
  
  for(i=0; i<5; i++)
  {
     printf("grade[%i]=%i\n",i,*(grade+1));
     sum=sum+ *(grade+i);
  }
  
  printf("Average : %i\n",sum/5);
  
  system("PAUSE");	
  return 0;
}
