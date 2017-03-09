
#include <iostream>
#include <conio.h>
#include <string>
#include <vector>

using namespace std;



struct Employee
{
	int ID;
	string firstName;
	string lastName;
	double payRate;
	int hours;
};

void Print(Employee const&e)
{
	cout << "Here is your employee report: " << endl;
	cout << e.ID << "  " << e.firstName << "  " << e.lastName << "  " << e.payRate * e.hours << endl;
}

int main()
{
	//Employee em[10], *p;

	vector<int> em;

	char input = 'y';
	int num;
	do
	{
		cout << "How Many Employees? ";
		cin >> num;
	}


	int n, j, q = 0;
	cout << "How many employees?: " << endl;
	cin >> n;
	cout << "Please enter your data: " << endl;

	for (em; em + n; em++)
	{
		q++;

		cout << "\nEnter the employee ID for " << q << " employee : ";
		cin >> p->ID;
		cout << "\nEnter the employee first name for " << q << " employee : ";
		cin >> p->firstName;
		cout << "\nEnter the employee last name for " << q << " employee : ";
		cin >> p->lastName;
		cout << "\nEnter the employee payRate for " << q << " employee : ";
		cin >> p->payRate;
		cout << "\nEnter the employee hours worked for " << q << " employee : ";
		cin >> p->hours;
	}

	

	p = em;
	cout << "\nYour Entered Data is:" << endl;
	//p = 0;

	

	while (p < em + n)
	{
		q++;
		cout << p->ID << " " << p->firstName << " " << p->lastName << " " << p->payRate * p->hours << " " << endl;

	
		p++;
	} 

	


	


	_getch();
	return 0;

}


