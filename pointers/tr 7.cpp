
		#include<iostream>
using namespace std;
struct data
{
	string name;
	int marks;
	char grade;
	
	void input()
	{
		cout<<endl;
		fflush(stdin);
		cout<<"Enter your name: ";
		cin>>name;
		fflush(stdin);
		cout<<"Enter your marks: ";
		cin>>marks;
		cout<<"Enter your grade: ";
		cin>>grade;
	}
	
};

int main()
{
	data d1,d2;
	struct data *ptr1=&d1;
	struct data *ptr2=&d2;
	
	ptr1->input();
	ptr2->input();
	
	if(ptr1->marks>ptr2->marks)
	{
		cout<<endl;
		cout<<"**HIGHEST MARKS**"<<endl;
		cout<<"NAME: "<<ptr1->name<<endl;
		cout<<"MARKS: "<<ptr1->marks<<endl;
		cout<<"GRADE: "<<ptr1->grade<<endl;
	}
	else
{
	cout<<endl;
	cout<<"**HIGHEST MARKS**"<<endl;
	cout<<"NAME: "<<ptr2->name<<endl;
	cout<<"MARKS: "<<ptr2->marks<<endl;
	cout<<"GRADE: "<<ptr1->grade<<endl;    
}
	


}
	}
};

