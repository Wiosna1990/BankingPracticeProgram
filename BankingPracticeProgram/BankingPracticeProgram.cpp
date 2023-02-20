
#include <iostream>
#include <iomanip>
using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);
int main()
{
	double balance = 0;
	int choice = 0;
	double dep;
	double wit;

	do
	{
		cout << "Enter your choice: \n";
		cout << "1.Show Balance\n";
		cout << "2.Deposit Money\n";
		cout << "3.Withdraw money\n";
		cout << "4.Exit\n";
		cin >> choice;
		cin.clear();
		fflush(stdin);

		switch (choice)
		{
		case 1: showBalance(balance);
			break;
		case 2: balance += deposit();
			showBalance(balance);
			break;
		case 3: balance -= withdraw(balance);
			showBalance(balance);
			break;
		case 4: cout << "Thanks for visiting\n";
			break;
		default: cout << "Invalid choice\n";
		}
	} while (choice != 4);
}

void showBalance(double balance)
{
	cout << "Balance is:" << setprecision(2) << fixed << balance << endl;
}
double deposit()
{
	double dep;
	cout << "How much you want to deposit?: \n";
	cin >> dep;
	if (dep > 0)
	{
		return dep;
	}
	cout << "Wrong amount!\n";
}
double withdraw(double balance)
{
	double wit;
	cout << "How much you want to withdraw?: \n";
	cin >> wit;
	if (wit <= balance)
	{
		return wit;
	}
	cout << "Too much ! You have only " << balance << endl;


}


