#include<stdio.h>
struct student
{
	int num,m,p,e,ave;
	char nam[20];
};
int main()
{
	struct student a[10];
	int n,i;
	scanf("%d",&n);
	for(int i=0;i<n;++i)
	{
		scanf("%d%s%d%d%d",&a[i].num,a[i].nam,&a[i].m,&a[i].p,&a[i].e);
		//printf("%d %s %d %d %d",a[i].num,a[i].nam,a[i].m,a[i].p,a[i].e);
		a[i].ave=a[i].m+a[i].p+a[i].e;
		a[i].ave/=3;
		printf("The average score of the %dth student is %d.\n",i+1,a[i].ave);
	}
	return 0;
}
	
