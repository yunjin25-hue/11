#include <stdio.h>
#include <stdlib.h>

//실습 3

void swap(int* x,int *y) //여기서 *은 어디에 붙이든 같음 
{
     int temp;
     temp=*x;
     *x=*y;
     *y=temp;
}

int main(int argc, char *argv[])
{
  
  int a=3,b=5;
  //int *x,y; 이렇게 하면 x만 포인터 변수가 됨(확실 X)  
  
  swap(&a,&b);
  printf("a:%i, b:%i\n",a,b);
  
  system("PAUSE");	
  return 0;
}
