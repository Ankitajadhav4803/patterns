/* print the following pattern 
	11111
	22222
	33333
	44444
	55555	*/
#include<stdio.h>
void main()
{
	int row,col,n;
	printf("enter limit=");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
	for(col=1;col<=n;col++)
	{
	printf("%d",row);
	}
	printf("\n");
	}
}
