#include<stdio.h>
int main()
{
  int i,j;
   i=1;
  do
  {	j=1;
	while(j<=i)
	{
		printf("%d ",j);
		j++;
	}
	printf("\n");
	i++;
  }while(i<=5);
 
}
