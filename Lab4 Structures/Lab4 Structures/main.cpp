// Lab assignment 4 structs
// Jessica Barnes & Sharad Ranpara
// 3.09.2017

#include <iostream> 
#include <conio.h> 
#include<string>
#include<vector>

using namespace std;

struct Employee
{
	int ID;
	string firstName;
	string lastName;
	double payRate;
	int hours;
}e;



int main()
{
	vector<int> empID;
	vector<string> fName;
	vector<string> lName;
	vector<int> pay;
	vector<int> hoursWorked;
	vector<int> grossPay;
	

	char input = 'y';
	int sum = 0;
	do
	{
		cout << "Enter employee ID: ";
		cin >> e.ID;
		empID.push_back(e.ID);

		cout << "Enter employee first name : ";
		cin >> e.firstName;
		fName.push_back(e.firstName);

		cout << "Enter employee last name : ";
		cin >> e.lastName;
		lName.push_back(e.lastName);

		cout << "Enter employee pay rate : ";
		cin >> e.payRate;
		pay.push_back(e.payRate);

		cout << "Enter employee hours worked : ";
		cin >> e.hours;
		hoursWorked.push_back(e.hours);

		
		cout << "Would you like to add another employee?: ";
		cin >> input;
	} while (input == 'Y' || input == 'y');

	cout << "Employee Report: " << endl;

	for (int i = 0; i < empID.size(); i++)
	{
		cout << empID[i] << ", " << fName[i] << " " << lName[i] << ", " << pay[i] * hoursWorked[i] << endl;
		
	}

	cout << endl;

	//vector<int> ::iterator it;
	//for (it = hoursWorked.begin(); it != hoursWorked.end(); ++it)
	//{
	//	
	//	sum += *it;
	//	//cout << sum << endl;
	//	//cout << *it << endl;
	//}

	_getch();

	return 0;
}