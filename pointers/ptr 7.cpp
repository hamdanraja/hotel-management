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
	int *min=arr;
	int small=*min;
	for(int i=0;i<4;i++)
	{
		if(*(ptr+i)<small)
		{
			small=*(ptr+i);
		}
	}
	cout<<"the smallest element of array is"<<endl;
	cout<<small;
	return 0;
}
