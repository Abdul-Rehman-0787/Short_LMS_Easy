#include<iostream>
#include<string>
#include<conio.h>
#include<windows.h>
#include<fstream>
#include<exception>

using namespace std;
class developers {
public:
	virtual void display() = 0;
	virtual ~developers() {}

};

#define Loading   "\n\n\n\n\n\tLoading\x1b[5m.....\x1b[25m\n"
class subdeveloper : public developers {
public:
	void display() {
		cout << "\x1b[91m";
		cout << "\n\t\t\t\t\t\x1b[1m\x1b[3mWelcome to our Learning Management System\n\n\n";
		cout << "\n\n\t\t\t\t\t MADE BY :" << endl;
		cout << "\t\t\t\t\t---------------------------------------" << endl;
		cout << "\t\t\t\t\t    ABDUL-REHMAN NASEER (23L-0787)     " << endl;
		cout << "\t\t\t\t\t---------------------------------------" << endl;
		cout << Loading;
		cout << "\x1b[0m";
	}

};

class university {
	string campus;
public:
	university()
	{

		cout << "\x1b[33m";
		cout << "\n\n\t\t\t\t  **********************" << endl;
		cout << "\t\t\t\t  *    University      *" << endl;
		cout << "\t\t\t\t  **********************" << endl;
		cout << "\x1b[37m";
		try {
			cout << "\n\tEnter your campus : ";
			cin >> campus;
			if (campus == "Dehli")
			{
				throw invalid_argument("\tInvalid Campus!!!\n");
			}

		}
		catch (const exception& e) {
			cout << "\nError :" << e.what();
			Sleep(1000);
		}
		system("cls");
	}
};


class St_User {
	string name, id, back;
	int choice, sem;
public:
	St_User() : name(""), id(""), sem(0) {
	D:
		cout << "\t\t\t  =====================" << endl;
		cout << "\t\t\t  |      LOGIN        |" << endl;
		cout << "\t\t\t  =====================" << endl;

		string USERNAME = "Student", ID;
		cout << "\n\tEnter Username (Student) : ";
		cin >> name;
		cout << "\n\tEnter  Id (Roll Number) : ";
		cin >> id;
		if (name == USERNAME)
		{

			fstream file;
			file.open("StudentRecord.txt");
			if (file.is_open())
			{
				int x = 0;
				bool check = false;
				while (file >> ID && x == 0) {
					if (id == ID)
					{
						check = true;
						x = 1;
					}
				}
				if (check)
				{
					cout << "\n\tLogin Successfully!" << endl;
					Sleep(1000);
				}
				else
				{
					cout << "\nInvalid ID!!!!!!\n";
					Sleep(1000);
					system("cls");
					goto D;
				}
				file.close();
			}
			else
			{
				cout << "\nCan't Open StudentRecord File!!!\n";
				Sleep(1000);
				system("cls");
				goto D;
			}

		}
		else {
			cout << "\n\tInvalid Credentials. Try Again." << endl;
			Sleep(1000);
			system("cls");
			goto D;
		}
	}


	St_User(const string& name, const string& campus, string& id, int sem) : name(name), id(id), sem(sem) {

	}


	St_User(const St_User& other) : name(other.name), id(other.id), sem(other.sem) {
	}


	St_User& operator=(const St_User& other)
	{
		if (this != &other)
		{
			name = other.name;
			id = other.id;
			sem = other.sem;
		}
		return *this;
	}

	virtual ~St_User() {}
	virtual void menu() = 0;
};

class Users
{
	string name, back;
	int choice, id, sem;
public:
	Users() : name(""), id(0), sem(0) {
	D:
		cout << "\t\t\t  =====================" << endl;
		cout << "\t\t\t  |      LOGIN        |" << endl;
		cout << "\t\t\t  =====================" << endl;

		string USERNAME = "RIAZ";
		int ID = 100;
		cout << "\n\tEnter Username : ";
		cin >> name;
		cout << "\n\tEnter  Id: ";
		cin >> id;
		if (name == USERNAME && id == ID)
		{
			cout << "\n\tLogin SuccessfuLlY!" << endl;
			Sleep(1000);
		}
		else {
			cout << "\n\tInvalid Credentials. Try Again." << endl;
			Sleep(1000);
			goto D;
		}
	}


	Users(const string& name, const string& campus, int id, int sem) : name(name), id(id), sem(sem) {

	}


	Users(const Users& other) : name(other.name), id(other.id), sem(other.sem) {
	}


	Users& operator=(const Users& other)
	{
		if (this != &other)
		{
			name = other.name;
			id = other.id;
			sem = other.sem;
		}
		return *this;
	}

	virtual ~Users() {}
	virtual void menu() = 0;
};
class course
{

public:
	course()
	{

	}
	void show()
	{
		system("cls");

		cout << "\t\t\t  =================" << endl;
		cout << "\t\t\t  |    Courses    |" << endl;
		cout << "\t\t\t  =================" << endl;
		cout << "\nCourses " << endl;
		cout << "\na)Object Oriented Programming" << endl;
		cout << "\nb)Communication Skills" << endl;
		cout << "\nc)Object Oriented Programming Lab\n " << endl;
		cout << "\nd)Go Back (<--)\n " << endl;
	}

};
class lecture_note :public  course
{

private:
	char choice;
public:
	lecture_note()
	{
		show();
		cout << "\nEnter you choice: ";
		cin >> choice;
		if (choice == 'a')
		{
			system("cls");
			cout << "\t\t\t  =======================" << endl;
			cout << "\t\t\t  |    Lecture Tittle    |" << endl;
			cout << "\t\t\t  =======================" << endl;

			cout << "\nstructure code\n" << endl;

			cout << "\t\t\t  =======================" << endl;
			cout << "\t\t\t  |    Lecture file     |" << endl;
			cout << "\t\t\t  =======================" << endl;

			cout << "loading [==============================]\n" << endl;
			cout << endl;

			fstream myFile;
			myFile.open("OOP.txt", ios::in);
			if (myFile.is_open())
			{
				string line;
				while (getline(myFile, line)) {
					cout << line << endl;
				}
				myFile.close();
			}
			else
			{
				cout << "\nFailed to Open OOP.txt!!!\n";
			}
		}

		else if (choice == 'b')
		{
			system("cls");

			cout << "\t\t\t  =======================" << endl;
			cout << "\t\t\t  |    Lecture Tittle    |" << endl;
			cout << "\t\t\t  =======================" << endl;

			cout << "\nLetter \n" << endl;

			cout << "\t\t\t  =======================" << endl;
			cout << "\t\t\t  |    Lecture file     |" << endl;
			cout << "\t\t\t  =======================" << endl;

			cout << "loading [==============================]\n" << endl;
			cout << endl;

			fstream myFile;
			myFile.open("CS.txt", ios::in);
			if (myFile.is_open())
			{
				string line;
				while (getline(myFile, line)) {
					cout << line << endl;
				}
				myFile.close();
			}
			else
			{
				cout << "\nFailed to Open CS.txt!!!\n";
			}
		}

		else if (choice == 'c')
		{
			system("cls");

			cout << "\t\t\t  =======================" << endl;
			cout << "\t\t\t  |    Lecture Tittle    |" << endl;
			cout << "\t\t\t  =======================" << endl;

			cout << "\nStatic data memebers and constant \n" << endl;

			cout << "\t\t\t  =======================" << endl;
			cout << "\t\t\t  |    Lecture file     |" << endl;
			cout << "\t\t\t  =======================" << endl;
			cout << endl;

			fstream myFile;
			myFile.open("OOP-LAB.txt", ios::in);
			if (myFile.is_open())
			{
				string line;
				while (getline(myFile, line)) {
					cout << line << endl;
				}
				myFile.close();
			}
			else
			{
				cout << "\nFailed to Open OOP_LAB.txt!!!\n";
			}
		}

		else
		{
			cout << "Wrong input";
		}


	}
};
class assignemnts :public course
{
private:
	char choice, select, back;

public:
	assignemnts()
	{
		do
		{
			show();
			cout << "\nEnter you choice: ";
			cin >> choice;
			if (choice == 'a')
			{
				system("cls");
				cout << "\t\t\t ==================================" << endl;
				cout << "\t\t\t | Object Oriented Programming   |" << endl;
				cout << "\t\t\t ==================================" << endl;
				cout << "\t-------------------------------------------------------------------------" << endl;
				cout << "\n1)Download Assignment " << endl;
				cout << "\n2)submit Assignment \n" << endl;
				cout << "Enter you choice: ";
				cin >> select;
				if (select == '1')
				{
					system("cls");
					cout << "\n\tDownloading Assignment  ." << endl;
					cout << "Loading .";
					Sleep(300);
					cout << ".";
					Sleep(300);
					cout << "."; Sleep(300);
					cout << "."; Sleep(300);
					cout << "."; Sleep(300);
					cout << "."; Sleep(300);
					cout << "."; Sleep(300);
					cout << "."; Sleep(300);
					cout << "." << endl;;
					cout << " _______\n" << endl;
					fstream myFile;
					myFile.open("OOP_ASS.txt", ios::in);
					if (myFile.is_open())
					{
						string line;
						while (getline(myFile, line))
						{
							cout << line << endl;
						}
						myFile.close();
					}
				}
				else if (select == '2')
				{
					system("cls");
					cout << "\n\tSubmiting Assignment  ." << endl;
					cout << "Loading .";
					Sleep(300);
					cout << ".";
					Sleep(300);
					cout << "."; Sleep(300);
					cout << "."; Sleep(300);
					cout << "."; Sleep(300);
					cout << "."; Sleep(300);
					cout << "."; Sleep(300);
					cout << "."; Sleep(300);
					cout << "." << endl;;
					cout << "Assignment has been uploaded." << endl;
				}
			}
			else if (choice == 'b')
			{
				system("cls");
				cout << "\t\t\t ==========================" << endl;
				cout << "\t\t\t | Communication Skills   |" << endl;
				cout << "\t\t\t ==========================" << endl;
				cout << "\t-------------------------------------------------------------------------" << endl;
				cout << "\n1)Download Assignment " << endl;
				cout << "\n2)submit Assignment \n" << endl;
				cout << "Enter you choice: ";
				cin >> select;
				if (select == '1')
				{
					system("cls");
					cout << "\n\tDownloading Assignment  ." << endl;
					cout << "Loading .";
					Sleep(300);
					cout << ".";
					Sleep(300);
					cout << "."; Sleep(300);
					cout << "."; Sleep(300);
					cout << "."; Sleep(300);
					cout << "."; Sleep(300);
					cout << "."; Sleep(300);
					cout << "."; Sleep(300);
					cout << "." << endl;;
					cout << " _______\n" << endl;
					fstream myFile;
					myFile.open("CS_ASS.txt", ios::in);
					if (myFile.is_open())
					{
						string line;
						while (getline(myFile, line))
						{
							cout << line << endl;
						}
						myFile.close();
					}
				}
				else if (select == '2')
				{
					system("cls");
					cout << "\n\tSubmiting Assignment  ." << endl;
					cout << "Loading .";
					Sleep(300);
					cout << ".";
					Sleep(300);
					cout << "."; Sleep(300);
					cout << "."; Sleep(300);
					cout << "."; Sleep(300);
					cout << "."; Sleep(300);
					cout << "."; Sleep(300);
					cout << "."; Sleep(300);
					cout << "." << endl;;
					cout << "Assignment has been uploaded." << endl;
				}
			}
			else if (choice == 'c')
			{
				system("cls");
				cout << "\t\t\t ====================================" << endl;
				cout << "\t\t\t | Object Oriented Programming Lab  |" << endl;
				cout << "\t\t\t ====================================" << endl;
				cout << "\t-------------------------------------------------------------------------" << endl;
				cout << "\n1)Download Assignment " << endl;
				cout << "\n2)submit Assignment \n" << endl;
				cout << "Enter you choice: ";
				cin >> select;
				if (select == '1')
				{
					system("cls");
					cout << "\n\tDownloading Assignment  ." << endl;
					cout << "Loading .";
					Sleep(300);
					cout << ".";
					Sleep(300);
					cout << "."; Sleep(300);
					cout << "."; Sleep(300);
					cout << "."; Sleep(300);
					cout << "."; Sleep(300);
					cout << "."; Sleep(300);
					cout << "."; Sleep(300);
					cout << "." << endl;;
					cout << " _______\n" << endl;
					fstream myFile;
					myFile.open("OOPLAB_ASS.txt", ios::in);
					if (myFile.is_open())
					{
						string line;
						while (getline(myFile, line))
						{
							cout << line << endl;
						}
						myFile.close();
					}
				}
				else if (select == '2')
				{
					system("cls");
					cout << "\n\tSubmiting Assignment  ." << endl;
					cout << "Loading .";
					Sleep(300);
					cout << ".";
					Sleep(300);
					cout << "."; Sleep(300);
					cout << "."; Sleep(300);
					cout << "."; Sleep(300);
					cout << "."; Sleep(300);
					cout << "."; Sleep(300);
					cout << "."; Sleep(300);
					cout << "." << endl;;
					cout << "Assignment has been uploaded." << endl;
				}
			}
			cout << "Enter B to back To Assignment Page!" << endl;
			cin >> back;
		} while (toupper(back) == 'B');

	}
};
class student : public St_User, public course
{
	char choice, back;
public:
	student() {}
	void menu()
	{
		do {
			system("cls");
			cout << "\t\t\t =====================" << endl;
			cout << "\t\t\t | Welcome Student   |" << endl;
			cout << "\t\t\t =====================" << endl;
			cout << "\nWhat do you want to see: " << endl;
			cout << "\na)Time table" << endl;
			cout << "\nb)Attendance" << endl;
			cout << "\nc)Gpa(Grade point average)" << endl;
			cout << "\nd)Lecture Notes" << endl;
			cout << "\ne)Assignments" << endl;
			cout << "\nEnter you choice: ";
			cin >> choice;
			if (choice == 'a')
			{
				system("cls");
				cout << "\t\t\t =====================" << endl;
				cout << "\t\t\t |    Time Table      |" << endl;
				cout << "\t\t\t =====================" << endl;

				cout << "\t-----------------------------------------------------------------" << endl;

				cout << " 8:30AM-9:25AM  |9:30AM-10:25AM|  10:30AM-11:25AM|   11:30AM-12:25PM| 12:30-01:25| 1:30-2:25|" << endl;
				cout << "| Monday |" << "         Communication skills   F5    |  Object oriented programming    F3 |" << endl;
				cout << "\n| Tuesday |" << "Discrete maths   F4| Communication F4|Object oriented programming Lab sL-2 |" << endl;
				cout << "\n| Wednesday |" << "D L D       F4   | OOP        F4 |             |principles of marketing F4 |" << endl;
				cout << "\n| Thursday |" << "D L D Lab     electronics lab     |                |D M   F3   |POM    B2|" << endl;
				cout << "\n| Friday |" << "|             |                |                | Jumma break          |         |" << endl;
			}
			else if (choice == 'b')
			{
				system("cls");
				cout << "\t\t\t =====================" << endl;
				cout << "\t\t\t |    Attendance      |" << endl;
				cout << "\t\t\t =====================" << endl;
				cout << "\t------------------------------------------------------------------" << endl;
				cout << "Object Oriented prog         96%";
				cout << "\nObject Oriented prog lab   100%";
				cout << "\nDigital Logic Design       88%";
				cout << "\nDigital Logic Design Lab   100%";
				cout << "\nCIVICS                     98%";
				cout << "\nExpository Writing         75%";
				cout << "\nDiscrete Structure         78%" << endl;
			}
			else if (choice == 'c')
			{
				system("cls");
				double eng, math, oop, oop_lab, dld, dld_lab, pom;
				cout << "\t\t\t =======================" << endl;
				cout << "\t\t\t |   Calculate GPA     |" << endl;
				cout << "\t\t\t =======================" << endl;
				cout << "\t------------------------------------------------------------------" << endl;
				cout << "-----------------------------" << endl;
				cout << "Enter your grade in English out of 4: ";
				cin >> eng;
				cout << "Enter your grade in maths out of 4: ";
				cin >> math;
				cout << "Enter your grade in oop out of 4: ";
				cin >> oop;
				cout << "Enter your grade in oop lab out of 4: ";
				cin >> oop_lab;
				cout << "Enter your grade in dld out of 4: ";
				cin >> dld;
				cout << "Enter your grade in dld lab out of 4: ";
				cin >> dld_lab;
				cout << "Enter your grade in principles of marketing out of 4: ";
				cin >> pom;
				cout << "Your overall grade is: " << (eng + math + oop + oop_lab + dld + dld_lab + pom) / 7 << endl;
			}
			else if (choice == 'd')
			{
				lecture_note();
			}
			else if (choice == 'e')
			{
				assignemnts();
			}
			cout << "\nPress B to go back to the Student Page!" << endl;
			cin >> back;
		} while (toupper(back) == 'B');
	}
};

class teacher :public Users, public course
{
	char choice, back;
public:
	teacher() {}
	void menu()
	{
		do {
			system("cls");
			cout << "\t\t\t  =====================" << endl;
			cout << "\t\t\t  |  Welcome Teacher  |" << endl;
			cout << "\t\t\t  =====================" << endl;
			cout << "\t-----------------------------------------------------------------" << endl;
			cout << "\na)upload Lecture Notes" << endl;
			cout << "\nb)Assign Assignments" << endl;
			cout << "\nEnter you choice: ";
			cin >> choice;
			if (choice == 'a')
			{
				lecture_note();
			}
			else if (choice == 'b')
			{
				assignemnts();
			}
			cout << "\nPress B to go back" << endl;
			cin >> back;
		} while (toupper(back) == 'B');
	}
};

class admin :public Users
{
	static int temp;
	string fname, lname;
	int sid;
	char choice, back;
public:
	admin() {}
	void menu()
	{
		do {
			system("cls");
			cout << "\t\t\t =======================" << endl;
			cout << "\t\t\t |Welcome Administrator|" << endl;
			cout << "\t\t\t =======================" << endl;
			cout << "\t-------------------------------------" << endl;
			cout << "\n\ta)Take record of student" << endl;
			cout << "\n\tb)display record of student" << endl;
			cout << "\n\t Enter you choice: ";
			cin >> choice;
			if (choice == 'a')
			{
				record();
			}
			else if (choice == 'b')
			{
				call_data();
			}
			cout << "\nPress B to go back" << endl;
			cin >> back;
		} while (toupper(back) == 'B');
	}
	void record()
	{
		system("cls");
		cout << "\n\tEntre student ID :";
		cin >> sid;
		cout << "\n\tEntre student first name :";
		cin >> fname;
		cout << "\n\tEntre student Last name : ";
		cin >> lname;
		ofstream file("StudentRecord.txt", ios::app);
		if (file.is_open())
		{
			file << "ID->" << sid << "  Name->" << fname << "-" << lname << endl;
			file.close();
			cout << "Loading .";
			Sleep(300);
			cout << ".";
			Sleep(300);
			cout << "."; Sleep(300);
			cout << "."; Sleep(300);
			cout << "."; Sleep(300);
			cout << "."; Sleep(300);
			cout << "."; Sleep(300);
			cout << "."; Sleep(300);
			cout << "." << endl;;
			cout << " _______\n" << endl;
			cout << "\n Record Save successfully." << endl;
		}
		else
		{
			cout << "\nCan't open Student File!!\n";
		}
	}
	void call_data()
	{
		system("cls");
		cout << "\nloading record ." << endl;
		cout << "Loading .";
		Sleep(300);
		cout << ".";
		Sleep(300);
		cout << "."; Sleep(300);
		cout << "."; Sleep(300);
		cout << "."; Sleep(300);
		cout << "."; Sleep(300);
		cout << "."; Sleep(300);
		cout << "."; Sleep(300);
		cout << "." << endl;;
		cout << " _______\n" << endl;
		ifstream file("StudentRecord.txt");
		if (file.is_open())
		{
			string line;
			cout << "Student Records :" << endl;
			int x = 1;
			cout << "\n----------------(Student-" << x << ")-----------------------\n";
			while (file >> line) {
				if (temp < 2)
				{
					cout << line << endl;
					temp++;
				}
				else if (temp == 2)
				{
					temp = 0;
					x++;
					cout << "\n----------------(Student-" << x << ")-----------------------\n";
					cout << line << endl;
					temp++;
				}
			}
			file.close();
		}
		else
		{
			cout << "\nCan't open Student File!!\n";
		}

	}
};
int admin::temp = 0;
int main()
{
	developers* obj;
	obj = new subdeveloper();
	obj->display();
	char ch;
	ch = _getch();
	system("cls");
	university* c = new university();
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
			admin* adminObj = new admin();
			adminObj->menu();
		}
		else if (choice == 2)
		{
			teacher* teacherObj = new teacher();
			teacherObj->menu();
		}
		else if (choice == 3)
		{
			student* studentObj = new student();
			studentObj->menu();
		}
		cout << "\nPress T to go back to First Page of Flex" << endl;
		cin >> Back;
		system("cls");
	} while (toupper(Back) == 'T');
	system("pause");
	return 0;
}
