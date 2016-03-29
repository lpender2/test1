#include <iostream>
#include <string>
using namespace std;

int GetUserInput(int minimum, int maximum)
{
	int choice = 0;
	cin >> choice;
	while (choice > maximum || choice < minimum)
	{
		cout << "Please enter a number within the limits" << endl;
		cin >> choice;
	}
	return choice;
}

void DisplayMainMenu()
{
	cout << "----------------------------------------" << endl;
	cout << "1. Add Class" << endl;
	cout << "2. Remove Last Class" << endl;
	cout << "3. Update Class" << endl;
	cout << "4. View All Classes" << endl;
	cout << "5. Exit" << endl << endl;
}

void AddClass(string classTitles[10], int classStudentCount[10], int& classCount)
{
	if (classCount > 9)
	{
		cout << "Error Cannot add any more classes!" << endl;
	}
	else
	{
		cout << "----------------------------------------" << endl;
		cout << "Please enter the Name of the Class" << endl;;
		cin >> classTitles[classCount];
		cout << "Please enter the Student Count of the Class" << endl;
		cin >> classStudentCount[classCount];
		classCount = classCount + 1;
	}
}

void ViewAllClasses(string classTitles[10], int classStudentCount[10], int& classCount)
{
	for (int i = 0; i < classCount; i++)
	{
		cout << " Title: " << classTitles[i];
		cout << " Count: " << classStudentCount[i] << endl;
	}
}

void RemoveLastClass(string classTitles[10], int classStudentCount[10], int& classCount)
{
	classTitles[classCount-1] = "";
	classStudentCount[classCount - 1] = 0;
	if (classCount = 0)
	{
		cout << "THE CLASS LIST ALREADY EMPTY";
	}
}

void UpdateClass(string classTitles[10], int classStudentCount[10], int& classCount)
{
	int input = 0;
	for (int i = 0; i < classCount; i++)
	{
		cout << " Title: " << classTitles[i];
		cout << " Count: " << classStudentCount[i] << endl;
	}
	GetUserInput(0 , classCount -1);

}


int main()
{
	string classTitles[10];
	int classStudentCount[10];
	int classCount = 0;
	bool done = false;

	while (!done)
	{
		DisplayMainMenu();
		int choice = GetUserInput( 1, 5);

		if (choice == 5)
		{
			done = true;
		}
		else if (choice == 1)
		{
			AddClass(classTitles, classStudentCount, classCount);
		}
		else if (choice == 3)
		{
			UpdateClass(classTitles, classStudentCount, classCount);
		}
		else if (choice == 2)
		{
			RemoveLastClass(classTitles, classStudentCount, classCount);
		}
		else if (choice == 4)
		{
			ViewAllClasses(classTitles, classStudentCount, classCount);
		}

	}




	return 0;
}
