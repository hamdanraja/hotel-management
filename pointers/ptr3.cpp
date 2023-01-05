#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int var=20;
	int *ip;
	ip=&var;
	cout<<"value of var variable"<<endl;
	cout<<var<<endl;
	cout<<"address stored in ip variable"<<endl;
	cout<<ip<<endl;
	cout<<"value of *ip variable"<<endl;
	cout<<*ip<<endl;
	return 0;
	
}
