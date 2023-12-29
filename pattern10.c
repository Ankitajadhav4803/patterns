/* print the following pattern 
	1
	12
	123
	1234
	123
	12
	1	*/
#include<stdio.h>
void main()
{
	int row,col,n;
	printf("enter limit=");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
	for(col=1;col<=row;col++)
	{
	printf("%d",col);
	}
	printf("\n");
	}
	for(row=n-1;row>=1;row--)
	{
	for(col=1;col<=row;col++)
	{
	printf("%d",col);
	}
	printf("\n");
	}
}

