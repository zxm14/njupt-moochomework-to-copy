#include<stdio.h>
int main()
{	
	int i,j,count=0,fg;
	for(i=100;i<=999;++i)
	{	fg=0;
		for(j=2;j*j<=i;++j)
			if(i%j==0){fg=1;break;}
		if(!fg)printf("%4d",i),++count;
		if(!fg&&count%8==0)putchar(10);
	}
	putchar(10);
	return 0;
}
		
