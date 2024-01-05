/* print the following pattern 
	1
	22
	333
	4444
	333
	22
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
	printf("%d",row);
	}
	printf("\n");
	}
	for(row=n-1;row>=1;row--)
	{
	for(col=1;col<=row;col++)
	{
	printf("%d",row);
	}
	printf("\n");
	}
}

