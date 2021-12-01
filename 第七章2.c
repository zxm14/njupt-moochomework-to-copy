#include<stdio.h>
int main()
{
	int n;
	char s[50],*t;
	scanf("%s",s);
	t=s;

	while(*t++)
	{
		if(*t>='0'&&*t<='9')putchar(*t);
		t++;
	}
	return 0;
}
