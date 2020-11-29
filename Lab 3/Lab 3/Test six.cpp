#include <iostream> 
#include<istream>
#include <vector> 
#include <cstring>
#include <fstream>
using namespace std;

void initialise(vector<string>* name)
{
	int sure;
	cout << "“are you sure ? if yes enter 1" << endl;
	cin >> sure;
	if (sure == 1)
	{
		if (!(name == NULL))
			(*name).clear();
	}
}


void insert(vector<string>* name)
{
	string intered;
	{
		char q = 'q';
		while ((intered[0]) != q || (intered[1]) != '\0')
		{
			if (!(name == NULL))
				(*name).push_back(intered);
				cout << "Please enter names to be inserted. press q to stop" << endl;;
				cin >> intered;
		}
	}
}
void search(vector<string>* name)
{
	string keyphrase;
	cout << "“enter a keyphrase to search" << endl;;
	cin >> keyphrase;
	if (!(name == NULL))
	{
		for (int i = 0; i < ((*name).size() - 1); i++)
			{
				string single_name = (*name)[i];
				if (single_name.find(keyphrase) != string::npos)cout << (*name)[i] << ",";
			}
	}
	
}
void delet(vector<string>* name)
{
	string deleteName;
	cout << "“enter a name to delete" << endl;
	cin >> deleteName;
	if (!(name == NULL))
	{
		for (int i = 0; i < ((*name).size() - 1); i++)
			{
				if ((*name)[i] == deleteName)
					(*name).erase((*name).begin() + i
					);
			}
	}
	

}
void print(vector<string>* name)
{
	for (int i = 0; i < ((*name).size() - 1); i++)
		cout << (*name)[i] << "," << endl;
}

void save(vector<string>* name)
{
	string fileLocation;
	ofstream myfile;
	cout << "enter the file location" << endl;
	cin >> fileLocation;
	myfile.open(fileLocation, ios::trunc);
	if (myfile.is_open())
	{
		for (int i = 0; i < ((*name).size() - 1); i++)
			myfile << (*name)[i] << endl;
		myfile.close();
	}
	else
		cout<<"connot open file for writing" << endl;

}
void load(vector<string>* name)
{
	string fileLocation;
	ifstream myfile;
	cout << "enter the file location" << endl;
	cin >> fileLocation;
	myfile.open(fileLocation);
	int index = 0;
	string line;
	while (myfile)
	{
		istream& getline(istream & myfile , string & line);
		(*name)[index]==line;
		myfile.close();
		index += 1;
	}
}

int main()
{
	vector<string> name;
	vector<string>* database = &name;
	while (true)
	{
		string choice;
		cout << "MENU : \n" << "initialise database \n" << "insert\n" << "search \n" << "delete\n" << "print\n"<< "save\n" << "load\n " << "quit\n" << "Make your choice :" << endl;
		cin >> choice;
		if (choice == "initialise")
			initialise(database);
		if (choice == "insert")
		{
			cout << endl;
			insert(database);
		}
		if (choice == "search") {
			cout << endl;
			search(database);
		}
		if (choice == "delete") {
			cout << endl;
			delet(database);
		}
		if (choice == "print") {
			cout << endl;
			print(database);
		}
		if (choice == "save") {
			cout << endl;
			save(database);
		}
		if (choice == "load") {
			cout << endl;
			load(database);
		}
		if (choice == "quit") {
			cout << "HAVE A GOOD DAY" << endl;
			break;
		}
	}
	
}
