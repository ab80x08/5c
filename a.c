#include <stdio.h>
#include <math.h>

int main ()
{
  int i=2,j=1,N,S=0;
  printf("Value of N :  ");
  scanf("%d",&N);
  printf("The calculated terms are :  ");
  while(j<=N)
  {
    S+=i;
    i+=2;
    ++j;
  }
  printf("%d\n",S);
  return 0;
}