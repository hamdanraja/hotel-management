#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a=32;
	int *ptr;
	ptr=&a;
	char ch='A',&cho=ch;
	cho+=a;
	*ptr+=ch;
	cout<<a<<","<<ch<<endl;
	return 0;
	
}
