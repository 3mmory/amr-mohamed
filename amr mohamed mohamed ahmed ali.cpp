#include <iostream>
#include <string>
using namespace std;
// my name is amr mohamed mohamed ahmed ali; B2//


struct Bankinfo
{
	string name;
	string location;
	int emp_numbers;
	int bank_id;
	string manger_name;
};
Bankinfo getBankinfO()
{
		Bankinfo bank1 ;
		cout<<"Name :";
		cin >> bank1.name;
		cout<<"Location :";
		cin>>bank1.location;
		cout<<"Manger Name : ";
		cin>>bank1.manger_name;
		cout<<"Employees Number :";
		cin>>bank1.emp_numbers;
		cout<<"Bank id :";
		cin>>bank1.bank_id;
		return bank1 ;
}
void displayBankinfo(Bankinfo *bank1)
{
	cout<<"       "<<"Bank Infomation Data is :"<<endl ;
cout<<"Bank id :"<<bank1->bank_id<<endl;
cout<<"Employees Number :"<<bank1->emp_numbers<<endl;
cout<<"Location :"<<bank1->location<<endl;
cout<<"Manger Name : "<<bank1->manger_name<<endl;
cout<<"Name :"<<bank1->name<<endl;
}
int main ()
{ Bankinfo b ; 
	Bankinfo b=getBankinfO();
	Bankinfo*ptr=&b;
	displayBankinfo(&b);
return 0;
}