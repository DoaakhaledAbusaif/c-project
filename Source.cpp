#include<iostream>
#include<string>
using namespace std;
struct BankInfo {
	string name ;
	string location ;
	int bank_id ;
	int emp_numbers ;
	string manager_name;
};
// This function will get data from user 
	void getListOfBankInfo(BankInfo* bankList, int size) 
	{
		BankInfo b;

		for (int i = 0; i < size; i++)
		{
			cout << "Name: " << endl;
			b.name = (bankList + i)->name;
			getline(cin, b.name);
			cout << "Location: " << endl;
			b.location = (bankList + i)->location;
			getline(cin, b.location);
			cout << "Manager Name: " << endl;
			b.manager_name = (bankList + i)->manager_name;
			getline(cin, b.manager_name);
			cout << "Employees Number: " << endl;
			b.emp_numbers = (bankList + i)->emp_numbers;
			cin >> b.emp_numbers;
			cout << "Bank Id" << endl;
			b.bank_id = (bankList + i)->bank_id;
			cin >> b.bank_id;			
		}
	}
	void	DipslayListOfBank(BankInfo*bankList, int size)
	{
		for (int i = 0; i < size; i++)
		{
			cout << "Name: " << (bankList + i)->name << endl;
			cout << "Location: " << (bankList + i)->location << endl;
			cout << "Bank Id: " << (bankList + i)->bank_id << endl;
			cout << "Empolees number: " << (bankList + i)->emp_numbers << endl;
			cout << "Manager Name: " << (bankList + i)->manager_name << endl;
		}
	}
	int main()
{
	BankInfo bankList[3];
	getListOfBankInfo(bankList, 3);
	DipslayListOfBank(bankList, 3);
	
	return 0;
}


