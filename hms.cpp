#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
void mainmenu()
{
	cout<<"__________________"<<endl;
	  cout<<"***WELCOME TO NUML HEIGHTS***"<<endl;
	  cout<<"___THE NAME OF QUALITY_"<<endl;
	  cout<<"press 1 to book a ROOM"<<endl;
	  cout<<"press 2 for enter your information"<<endl;
	  cout<<"press 3 to collect your keys"<<endl;
	 // cout<<"press 4 to exit"<<endl;
	cout<<"_________________"<<endl;
}
void mainmenu1()
{
	cout<<endl;
	cout<<endl;
	cout<<"~~~~~~~~~~~~~~"<<endl;
	cout<<"**STEP 1 IS COMPLETED** "<<endl;
	cout<<"press 2 for enter your information "<<endl;
	cout<<"press 3 to collect your keys  "<<endl; 
}
void mainmenu2()
{
	cout<<endl;
	cout<<endl;
	cout<<"~~~~~~~~~~~~~~"<<endl;
	cout<<"**STEP 1 IS COMPLETED** "<<endl;
	cout<<"**STEP 2 IS COMPLETED** "<<endl;
	cout<<"press 3 to collect your keys "<<endl; 

	
}
void booking()
{
	/*cout<<"__________________"<<endl;
	cout<<"***LIST OF Hotel**"<<endl;
	cout<<"QATAR"<<"          "<<"PRESS 1"<<endl;
	cout<<"UK"<<"             "<<"PRESS 2"<<endl;
	cout<<"US"<<"             "<<"PRESS 3"<<endl;
	cout<<"DUBAI"<<"          "<<"PRESS 4"<<endl;
	cout<<"INDIA"<<"          "<<"PRESS 5"<<endl;
	cout<<"__________________"<<endl;*/
	//int c;
	//cout<<"**choose your rooms**"<<endl;
	//cin>>c;
	cout<<"~~~~~~AVAILABLE ROOMS~~~~~"<<endl;
		
 cout<<"Floor"<<"   "<<"RESERVATION DATE"<<"   "<<"TIME"<<"   "<<"RENT"<<"   "<<"ROOM TYPE"<<endl;
cout<<  "Ground floor"<<"       "<<"4-12-2022"<<"  "<<"2AM"<<"  "<<"25,000"<<"     "<<"BUSSINESS CLASS"<<"      "<<"press A"<<endl;
cout<<  "1st floor"<<"       "<<"5-12-2022"<<"  "<<"5pm"<<"  "<<"19,500"<<"     "<<"EXECUTIVE CLASS"<<"      "<<"press B"<<endl;
cout<<  "2nd floor"<<"       "<<"7-12-2022"<<"  "<<"6pm"<<"  "<<"15,000"<<"     "<<"ECONOMY ROOM"<<"      "<<"press C"<<endl;
    

		
/*	case 2:
		{
	cout<<"FLOOR"<<"   "<<"RESERVATION DATE"<<"   "<<"TIME"<<"   "<<"RENT"<<"   "<<"SEATS AVAILABLE"<<endl;
cout<<  "GROUND FLOOR"<<"       "<<"4-12-2022"<<"  "<<"2AM"<<"  "<<"25000"<<"     "<<"23"<<"      "<<"press D"<<endl;
cout<<  "1ST FLOOR"<<"       "<<"5-12-2022"<<"  "<<"5pm"<<"  "<<"16500000"<<"     "<<"12"<<"      "<<"press E"<<endl;
cout<<  "2 FLOOR"<<"       "<<"7-12-2022"<<"  "<<"6pm"<<"  "<<"15600000"<<"     "<<"13"<<"      "<<"press F"<<endl;
   break;

		}
	case 3:
		{
	cout<<"FLIGHT NAME"<<"   "<<"DATE"<<"   "<<"TIME"<<"   "<<"PRICE"<<"   "<<"SEATS AVAILABLE"<<endl;
cout<<  "US_123"<<"       "<<"4-12-2022"<<"  "<<"2AM"<<"  "<<"15000000"<<"     "<<"23"<<"      "<<"press G"<<endl;
cout<<  "US_341"<<"       "<<"5-12-2022"<<"  "<<"5pm"<<"  "<<"16500000"<<"     "<<"12"<<"      "<<"press H"<<endl;
cout<<  "US_657"<<"       "<<"7-12-2022"<<"  "<<"6pm"<<"  "<<"15600000"<<"     "<<"13"<<"      "<<"press I"<<endl;
    break;

		}
	case 4:
	{
	cout<<"FLIGHT NAME"<<"   "<<"DATE"<<"   "<<"TIME"<<"   "<<"PRICE"<<"   "<<"SEATS AVAILABLE"<<endl;
cout<<  "DUB_123"<<"       "<<"4-12-2022"<<"  "<<"2AM"<<"  "<<"15000000"<<"     "<<"23"<<"      "<<"press J"<<endl;
cout<<  "DUB_341"<<"       "<<"5-12-2022"<<"  "<<"5pm"<<"  "<<"16500000"<<"     "<<"12"<<"      "<<"press K"<<endl;
cout<<  "DUB_657"<<"       "<<"7-12-2022"<<"  "<<"6pm"<<"  "<<"15600000"<<"     "<<"13"<<"      "<<"press L"<<endl;
    break;
			
	}
	case 5:
	{
	cout<<"FLIGHT NAME"<<"   "<<"DATE"<<"   "<<"TIME"<<"   "<<"PRICE"<<"   "<<"SEATS AVAILABLE"<<endl;
cout<<  "IND_123"<<"       "<<"4-12-2022"<<"  "<<"2AM"<<"  "<<"15000000"<<"     "<<"23"<<"      "<<"press M"<<endl;
cout<<  "IND_341"<<"       "<<"5-12-2022"<<"  "<<"5pm"<<"  "<<"16500000"<<"     "<<"12"<<"      "<<"press N"<<endl;
cout<<  "IND_657"<<"       "<<"7-12-2022"<<"  "<<"6pm"<<"  "<<"15600000"<<"     "<<"13"<<"      "<<"press O"<<endl;
    break;
}
}*/
	//cout<<endl;
	cout<<"__________________"<<endl;
	char press;
	cout<<"which ROOM you want to book?"<<endl;
	cin>>press;
	if(press=='A'||press=='a')
	{
	cout<<"you selected BUSSINESS CLASS"<<endl;
	cout<<"Time:  2am"<<" "<<"Price:  25,000"<<" "<<"Seats available:  23"<<endl;
	cout<<"to collect the KEYS, enter your information"<<endl;
	}
else if(press=='B'||press=='b')
   {
	   cout<<"you selected EXECUTIVE CLASS"<<endl;
	   cout<<"Time:  5pm"<<" "<<"Price:  19,500"<<" "<<"Seats available:  12"<<endl;
	   cout<<"to collect the KEYS, enter your information"<<endl;
	}
	
else if(press=='C'||press=='c')
   {   
	cout<<"you selected ECONOMY CLASS"<<endl;
	cout<<"Time:  6pm"<<" "<<"Price:  15,000"<<" "<<"Seats available:  13"<<endl;
	cout<<"to collect the KEYS, enter your information"<<endl;
	}
/*else if(press=='D'||press=='d')
	{
	cout<<"you selected UK_123"<<endl;
	cout<<"Time:  2am"<<" "<<"Price:  15000000"<<" "<<"Seats available:  23"<<endl;
	cout<<"to collect the ticket, enter your information"<<endl;
	}
else if(press=='E'||press=='e')
	{
	cout<<"you selected UK_341"<<endl;
	cout<<"Time:  5pm"<<" "<<"Price:  16500000"<<" "<<"Seats available:  12"<<endl;
	cout<<"to collect the ticket, enter your information"<<endl;
	}
else if(press=='F'||press=='f')
	{
	cout<<"you selected UK_657"<<endl;
	cout<<"Time:  6pm"<<" "<<"Price:  15600000"<<" "<<"Seats available:  13"<<endl;
	cout<<"to collect the ticket, enter your information"<<endl;
	}
else if(press=='G'||press=='g')
	{
	cout<<"you selected US_123"<<endl;
	cout<<"Time:  2am"<<" "<<"Price:  15000000"<<" "<<"Seats available:  23"<<endl;
	cout<<"to collect the ticket, enter your information"<<endl;
	}
else if(press=='H'||press=='h')
	{
	cout<<"you selected US_341"<<endl;
	cout<<"Time:  5pm"<<" "<<"Price:  16500000"<<" "<<"Seats available:  12"<<endl;
	cout<<"to collect the ticket, enter your information"<<endl;
	}
else if(press=='I'||press=='i')
	{
	cout<<"you selected US_657"<<endl;
	cout<<"Time:  6pm"<<" "<<"Price:  15600000"<<" "<<"Seats available:  13"<<endl;
	cout<<"to collect the ticket, enter your information"<<endl;
	}
	else if(press=='J'||press=='j')
	{
	cout<<"you selected DUB_657"<<endl;
	cout<<"Time:  6pm"<<" "<<"Price:  15600000"<<" "<<"Seats available:  13"<<endl;
	cout<<"to collect the ticket, enter your information"<<endl;
	}
	else if(press=='K'||press=='k')
	{
	cout<<"you selected DUB_657"<<endl;
	cout<<"Time:  6pm"<<" "<<"Price:  15600000"<<" "<<"Seats available:  13"<<endl;
	cout<<"to collect the ticket, enter your information"<<endl;
	}
	else if(press=='L'||press=='l')
	{
	cout<<"you selected DUB_657"<<endl;
	cout<<"Time:  6pm"<<" "<<"Price:  15600000"<<" "<<"Seats available:  13"<<endl;
	cout<<"to collect the ticket, enter your information"<<endl;
	}
	else if(press=='M'||press=='m')
	{
	cout<<"you selected IND_657"<<endl;
	cout<<"Time:  6pm"<<" "<<"Price:  15600000"<<" "<<"Seats available:  13"<<endl;
	cout<<"to collect the ticket, enter your information"<<endl;
	}
	else if(press=='N'||press=='n')
	{
	cout<<"you selected IND_657"<<endl;
	cout<<"Time:  6pm"<<" "<<"Price:  15600000"<<" "<<"Seats available:  13"<<endl;
	cout<<"to collect the ticket, enter your information"<<endl;
	}
	else if(press=='O'||press=='o')
	{
	cout<<"you selected IND_657"<<endl;
	cout<<"Time:  6pm"<<" "<<"Price:  15600000"<<" "<<"Seats available:  13"<<endl;
	cout<<"to collect the ticket, enter your information"<<endl;
	}*/
	else
	{
		cout<<"SORRY! WRONG CHOICE"<<endl;
	}
	
}
struct information
{
	char fname[20];
	char lname[20];
	char cnic[20];
	int age;
	char adress[35];
	int room_no;
	int price;
	char account_no[30];
	char date[15];
	
	
	void input()
	{
		cout<<"Enter your first name: ";
		cin>>fname;
		cout<<"enter your last name: ";
		cin>>lname;
		cout<<"Enter your cnic no: "<<"underscores allowed only: ";
		cin>>cnic;
		cout<<"Enter your age: ";
		cin>>age;
		cout<<"enter your adress: "<<"underscores allowed only: ";
		cin>>adress;
		cout<<"enter your room number:";
		cin>>room_no;
		cout<<"enter the rent of the room mentioned above: ";
		cin>>price;
		cout<<"Enter account no to pay: ";
		cin>>account_no;
		cout<<"Enter your arriving date: "<<"underscores allowed only: ";
		cin>>date;

	}

	void display()
	{
		cout<<"****NUML HEIGHTS***"<<endl;
		cout<<endl;
		cout<<endl;
		cout<<"~~~~~~ROOMS ~~~~~~"<<endl;
		cout<<"_______________"<<endl;
		cout<<"NAME:  "<<"         "<<fname<<"   "<<lname<<endl;
		cout<<"CNIC NO: "<<"       "<<cnic<<endl;
		cout<<"AGE:     "<<"        "<<age<<endl;
		cout<<"ADRESS:  "<<"        "<<adress<<endl;
		cout<<"ROOM: "<<"         "<<room_no<<endl;
		cout<<"TOTAL CHARGES: "<<"   "<<price<<endl;
		cout<<"ACCOUNT NO: "<<"      "<<account_no<<endl;
		cout<<"ARRIVING DATE: "<<" "<<date<<endl;
		cout<<"________________"<<endl;
		
	}
};
void save(information c)
{
	ofstream f;
	f.open("project.txt",ios::app);
	{
		f<<"NAME: "<<c.fname<<" "<<c.lname<<endl;
		f<<"CNIC NO: "<<c.cnic<<endl;
		f<<"AGE: "<<c.age<<endl;
		f<<"ADRESS: "<<c.adress<<endl;
		f<<"ROOM NO: "<<c.room_no<<endl;
		f<<"RENT: "<<c.price<<endl;
		f<<"ACCOUNT NO: "<<c.account_no<<endl;
		f<<"ARRIVING DATE : "<<c.date<<endl;
	}
	f.close();
}
void exit()
{
	cout<<"****THANKS FOR CHOOSING NUML HEIGHTS****"<<endl;
	cout<<"~~THANKS FOR GIVING US A CHANCE FOR HOSPITANTLY~~~"<<endl;
	//cout<<"****GOOD BYE! SEE YOU SOON....*****"<<endl;
}
	

int main()
{
	
	mainmenu();

	int choice;
	cout<<"****welcome to our hotel**"<<endl;
	cin>>choice;
	if(choice==1)
	{
		booking();
	}
	
	
	

      information c;
	 
	 mainmenu1();
	cin>>choice;
	if(choice==2)
	  {
	  	c.input();
	  }
	  
	  
	  mainmenu2();
	  
	  cin>>choice;
    if(choice==3)
	  {
	  	c.display();
	  }
	  
	  
	  save(c);
	  
	  int back;
	  cout<<"------your seat is reserved, thank you------- "<<endl;
	  cout<<"------press any key to exit------ "<<endl;
	  cin>>back;
	  if(back==1)
	  {
	  	exit();
	  }
	  else
	  {
	  	exit();
	  }
	  

}
