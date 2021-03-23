#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char name[10];
	char copy[30] = "Name is ";

	cout << "Enter your name : ";
	cin >> name;

	int length = 0;
	length = strlen(name);
	cout << "length : " << length << endl;

	cout << strcat(copy, name) << endl;

	cout << copy << endl;

	cout << strcpy(copy, name) << endl;

	cout << copy << endl;

	cout << strcmp(copy, name) << endl;

	return 0;
}