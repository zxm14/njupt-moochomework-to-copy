#include<stdio.h>
int sort(int *a,int n);
int main()
{
	int a[10],n;
	scanf("%d",&n);
	for(int i=0;i<n;++i)scanf("%d",a+i);
	sort(a,n); 
	for(int i=0;i<n;++i)printf("%d  ",a[i]);
	printf("\n");
	return 0;
}
int sort(int *a,int n)
{
	for(int i=0;i<n;++i)
	{	int minn=i,t;
		for(int j=i+1;j<n;++j)	
			if(a[j]<a[minn])minn=j;
	
		t=a[minn];
		a[minn]=a[i];
		a[i]=t;	
	//	printf("%d %d\n",a[minn],a[i]);
		//for(int i=0;i<n;++i)printf("%d  ",a[i]);putchar(10);
	}
	return 0;
}
		
