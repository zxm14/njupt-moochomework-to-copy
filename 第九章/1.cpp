#include<stdio.h>
#define DAYS_FEB(year) year%400==0||year%4==0&&year%100!=0?29:28
int main()
{
	int y;
	scanf("%d",&y); 
	printf("days of the FEB.: %d\n",DAYS_FEB(y));
	return 0;
}
