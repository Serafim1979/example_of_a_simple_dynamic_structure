#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
/////////////////////////////////
struct CandyBar
{
	string name;
	double weight;
	int amount_of_calories;
};
/////////////////////////////////
int main()
{
	int size;
	char ch;
	cout << "Specify the size of the structure: ";
	cin >> size;

	CandyBar *ptrStruct = new CandyBar[size];
	do
	{
		cout << "Enter data! " << endl;

		for (int i = 0; i < size; i++)
		{
			cout << "Enter the name: " << endl;
			cin >> ptrStruct[i].name;
			cout << "Enter the weight: " << endl;
			cin >> ptrStruct[i].weight;
			cout << "Enter the number of calories: " << endl;
			cin >> ptrStruct[i].amount_of_calories;
		}
		cout << endl;

		cout << "You have entered the following data: " << endl;
		for (int i = 0; i < size; i++)
		{
			cout << i + 1 << ": " << "Structure: " << ptrStruct[i].name << ", " << ptrStruct[i].weight << ", " << ptrStruct[i].amount_of_calories << endl;
		}

		cout << "Continue(y/n)?" << endl;
		cin >> ch;

	} while (ch != 'n');

	system("pause");
	return 0;
}