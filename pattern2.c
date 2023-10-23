/* print the following pattern 
	****
	***
	**
	*	*/
#include<stdio.h>
void main()
{
	int row,col,n;
	printf("enter limit=");
	scanf("%d",&n);
	for(row=n;row>=1;row--)
	{
	for(col=1;col<=row;col++)
	{
	printf("*");
	}
	printf("\n");
	}
}
