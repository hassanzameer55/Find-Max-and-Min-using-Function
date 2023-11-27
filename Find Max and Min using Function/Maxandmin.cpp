#include<iostream>
using namespace std;

int ismax(int num1, int num2, int num3)
{
	if (num1 >= num2 && num1 >= num3)
	{
		cout << "\nThe number " << num1 << " is greater ";
	
	}
	else if (num2 >= num1 && num2 >= num3)
	{
		cout << "\nThe number " << num2 << " is greater ";
	}
	else
	{
		cout << "\nThe number " << num3 << " is greater ";
	}
}
int ismin(int num1, int num2, int num3)
{
	if (num1 <= num2 && num1 <= num3)
	{
		cout << "\nThe number " << num1 << " is smaller ";
		return 0;
	}
	else if (num2 <= num1 && num2 <= num3)
	{
		cout << "\nThe number " << num2 << " is smaller ";
	}
	else
	{
		cout << "\nThe number " << num3 << " is smaller ";
	}
}
int main()
{
	char choice1;
	do {
		int num1, num2, num3, choice;
		cout << "Finding maximum number from the given number ):";
		cout << "\nEnter number 1 : ";
		cin >> num1;
		cout << "\nEnter number 2 : ";
		cin >> num2;
		cout << "\nEnter number 3 : ";
		cin >> num3;

		cout << "\nEnter your choice what you want to find,\nPress 1 for Max.\nPress 2 for min." << endl;
		cout << "\nYour choice is : ";
		cin >> choice;
		if (choice == 1)
		{
			int maxNUM = ismax(num1, num2, num3);
		}
		else if (choice == 2)
		{
			int minNUM = ismin(num1, num2, num3);
		}
		else
		{
			cout << "\nInvalid entry !";
		}
		cout << "\nDo you want to do again ? (Y / N) " << endl;
		cout << "\nYour choice is : ";
		cin >> choice1;
	} while (choice1 == 'Y' || choice1 == 'y');
	cout << "\nThank you program closed ):";
}