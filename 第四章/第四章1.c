#include<stdio.h>
#include<math.h>
int main()
{	
	int i,j;
	double s,m,x;
	s=0;i=1;
	scanf("%lf",&m);
	x=m;
	while(fabs(x)>=1e-4)
	{//printf("%f\n",x);
		
		s+=x;
		++i;
		x*=m;x/=i;
		x=-x;
		
	}
	printf("%.2f\n",s);
	return 0;
}
