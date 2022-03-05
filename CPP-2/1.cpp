#include<iostream>
using namespace std;
#define pi 3.14159
int main()
{
	double radius,area,circumference;
	cin>>radius;
	area=radius*radius*pi;
	circumference=2*pi*radius;
	if(radius<=0)
		cout<<"error input!"<<endl; 
	else cout<<area<<" "<<circumference<<endl;
	return 0;
}
	
