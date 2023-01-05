#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[5];
	int *ptr;
	ptr=&arr[0];
	cout<<"enter an array"<<endl;
	for(int i=0;i<4;i++)
	{
		cin>>*(ptr+i);
	}
	int *max=arr;
	int large=*max;
	for(int i=0;i<4;i++)
	{
		if(*(ptr+i)>large)
		{
			large=*(ptr+i);
			
		}
	}
	cout<<"the largest element of array is";
	cout<<large;
	return 0;
	
	
}
