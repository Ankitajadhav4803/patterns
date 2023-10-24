/* print the following pattern 
	12345
	12345
	12345
	12345	*/
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
	printf("%d",col);
	}
	printf("\n");
	}
}
