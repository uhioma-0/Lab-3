#include<iostream>
using namespace std;
float average_salary(int nEmployee,int salaryArr[])
{
	int sum = 0;
	for (int i = 0;i < nEmployee;i++)
	{
		sum = sum + salaryArr[i];
	}
	return sum / nEmployee;
}

/*int main()
{
	float averageSalay;
	int nEmployees;
	cout << "please inter the total noúmber of employe" << endl;
	cin >> nEmployees;
	int* salaryArr = new int[nEmployees];
	for (int i = 0;i < nEmployees;i++)
	{
		cout << "Please enter Employee no " << i + 1 << ": salary" << endl;
		cin >> salaryArr[i];
	}
	averageSalay = average_salary(nEmployees, salaryArr);
	delete[] salaryArr;
	cout << "the average salary is:" << averageSalay << endl;
}*/