#include<stdio.h>
main()
{
	
	int i;
	int no ,f=0;
	printf("\nEnter number =>");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		
		printf("%d +",i);
		f=f+i;
	}
	printf("\nf=%d",f);
	
}
