#include<stdio.h>
int main()
{
	int i=0,x;
	long long n;
	char s[]="0123456789ABCDEF",s0[30];
	scanf("%lld",&n); 
	while(n)
	{
		x=n%16;
		s0[i++]=s[x];
		n/=16;
		//printf("%d\n",x);
	}
	for(x=i-1;x>=0;--x)putchar(s0[x]);
	return 0;
}
		
		
