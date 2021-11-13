/******************************************************************************
my name :Amr mohamed mohamed ahmed ali
         G 2B

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std ;
struct bankinfo
{
	string name;
	string location;
	int emp_numbers;
	int bank_id;
	string manger_name;
};
void getlistofbankifo(bankinfo *banklist,int banksize )
{ 
	for(int i=0;i<banksize;i++)
{
	cout<<"========= Bank info number "<<i+1<<" ========="<<endl;
	cout<<"Name : ";
	getline(cin,banklist[i].name);
	cout<<"manger name : ";
	getline(cin,banklist[i].manger_name);
	cout<<"location : ";
	getline(cin,banklist[i].location);
	cout<<"bank id : ";
	cin>>banklist[i].bank_id;
	cout<<"Employees Number: ";
	cin>>banklist[i].emp_numbers;
	cin.ignore();
	}
}
void displaylistofbank(bankinfo *banklist,int banksize)
{bankinfo  s[3];
	for(int i=0;i<banksize;i++)
	{
		cout<<"======== show Bank info number "<<i+1<<" ========="<<endl;
		cout<<"Name :"<<banklist[i].name<<endl;
		cout<<"Location :"<<banklist[i].location<<endl;
		cout<<"Employees Number :"<<banklist[i].emp_numbers<<endl;
		cout<<"Manger Name : "<<banklist[i].manger_name<<endl;
		cout<<"Bank id :"<<banklist[i].bank_id<<endl;
    }
}
int main()
{
	bankinfo a[3] ;
	getlistofbankifo(a,3);
	displaylistofbank(a,3);

return 0;
}

