#include<iostream>
using namespace std;
int main()
{
	int n,*p;
	cin>>n;
	p=new int[n];
	for(int i=0;i<n;++i)cin>>p[i];
	
	double ave;
	int number,num;
	ave=number=num=0;
	for(int i=0;i<n;++i)
	{
		if(p[i]>0)ave+=p[i],++num;
		if(p[i]<0)++number;
	}
	if(!num)ave=0;
	else ave/=num;
	cout << "ave=" <<ave<<"  number="<<number<<endl;
	delete []p;	
	
	return 0;
}
