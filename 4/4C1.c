#include<stdio.h>
void main()
{
	int s,m,h;
	printf("Enter second:",s);
	scanf("%d",&s);
	h=s/3600;
	m=s/60;
	printf("%d:%d:%d",h,m,s);
	
}
