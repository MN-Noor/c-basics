#include<iostream>
#include<string>

using namespace std;
struct student
{
	string name;
	int regno;
	string subjects[2];
	int sem;


};
student userinput(void);
void displaymenu(void);
void pfstudents(student p[2]);
void semester2(student s[2]);
void searchreg(student r[2]);
int main()
{
	student s[2];
	student p[2];
	student r[2];
	char choice;
	int i,j;
	int sregno;
	for (i = 0; i < 2; i++)
	{
		s[i]=userinput();
	}

	do {
		displaymenu();
		cin >> choice;
		if (choice == 'T')
		{
			semester2(s);
		}
		else if (choice == 'P')
		{
			pfstudents(p);
		}
		else if (choice == 'S')
		{
			searchreg(r);
		}
		else if (choice == 'E')
		{
			cout << "Program Terminating" << endl;
		}
	} while (choice != 'E');


	return 0;
}
student userinput(void)
{
	int j;
	student s;
	
		cout << "Enter your Name" << endl;
		getline(cin, s.name);
		cin.ignore(-1);
		cout << "Enter your reg no" << endl;
		cin >> s.regno;
		cin.ignore();
		for (j = 0; j < 2; j++)
		{
			cout << "Enter your subjects" << j + 1 << endl;
			cin >> s.subjects[j];
		}
		cout << "Enter your semester no" << endl;
		cin >> s.sem;
		cin.ignore();

	
	return s;

}
void pfstudents(student p[2])
{
	int i, j, checkif= 0;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			if (p[i].subjects[j] == "PF")
			{
				cout << "Name" << p[i].name << "\nReg no" << p[i].regno << "Semester" << p[i].sem << endl;
				checkif = checkif + 1;
			}
			
		}
	}
	if (checkif == 0)
	{
		cout << "No student found studying this subject" << endl;
	}
}
void semester2(student s[2])
{
	int i, checkif = 0;
	for (i = 0; i < 2; i++)
	{
		if (s[i].sem == 2)
		{
			cout << "Name" << s[i].name << "\nReg no" << s[i].regno << "Semester" << s[i].sem << endl;
			checkif = checkif + 1;
		}
		
	}
	if (checkif == 0)
	{
		cout << "No student found in 2nd semester" << endl;
	}
}
void searchreg(student r[2])
{
	int i, sregno,checkif = 0;
	cout << "Enter the reg no of student whom you want to see data" << endl;
	cin >> sregno;
	for (i = 0; i < 2; i++)
	{
		if (r[i].regno == sregno)
		{
			cout << "Name" << r[i].name << "\nReg no" << r[i].regno << "Semester" << r[i].sem << endl;
			checkif = checkif + 1;
		}
		
	}
	if (checkif == 0)
	{
		cout << "No student found with this regno" << endl;
	}
}

void displaymenu(void)
{
	cout << "enter respective numbers to perform functions\nT to print data of all students studying in semester 2 \nPress P to print data of all students studying Programming Fundamentals\nPress S to search for a student when user enters his reg No.\nPress E to exit" << endl;

}