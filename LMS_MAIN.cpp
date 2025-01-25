#include "Flex_Classes.h";

#define Loading   "\n\n\n\n\n\tLoading\x1b[5m.....\x1b[25m\n"

int main()
{ 
	char ch;
	cout << "\x1b[91m";
	cout << "\n\t\t\t\t\t\x1b[1m\x1b[3mWelcome to our Learning Management System\n\n\n";
	cout << "\n\n\t\t\t\t\t MADE BY :" << endl;
	cout << "\t\t\t\t\t---------------------------------------" << endl;
	cout << "\t\t\t\t\t\tAbdul-Rehman Naseer (23L-0787) " << endl;
	cout << "\t\t\t\t\t---------------------------------------" << endl;
	cout << Loading;
	cout << "\x1b[0m";

	ch = _getch();
	system("cls");
	university c;
	char Back;
	system("cls");

	do {
		system("cls");
		cout << "\nAre you: " << endl << "\n1)Administrator" << endl << "\n2)Teacher" << endl << "\n3)student" << endl << "\nEnter your choice: ";

		int choice;
		cin >> choice;
		system("cls");

		if (choice == 1)
		{

			admin obj3;

		}
		else if (choice == 2)
		{
			teacher obj2;
		}

		else
			if (choice == 3)
			{

				student obj;
			}

		cout << "\nPress t to go back" << endl;
		cin >> Back;
		system("cls");

	} while (Back == 't');

}
