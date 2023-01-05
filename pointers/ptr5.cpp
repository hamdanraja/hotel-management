#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[3];
	int*ptr;
	ptr=a;
	for(int i=0;i<2;i++)
	{  
	cout<<"enter value oF variable ["<<i<<"]"<<ptr<<endl;
	cout<<"enter address of variable ["<<i<<"]"<<*ptr<<endl;
	ptr++;
}
return 0;
}
