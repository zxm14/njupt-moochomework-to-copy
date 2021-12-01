#include<stdio.h>
int f(int a[],int m)
{
	int i,j; 
	for(i=1;i<=m;++i)
	{
		int t=a[9];
		for(j=9;j>0;--j)
			a[j]=a[j-1];
		a[0]=t;
		
		//for(j=0;j<10;++j)printf("%d ",a[j]);putchar(10);
	}
	return 0;
}
		
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10},m,i;
	scanf("%d",&m);
	f(a,m);
	for(i=0;i<10;++i)printf("%3d",a[i]);
	printf("\n");
	return 0;
}
	
