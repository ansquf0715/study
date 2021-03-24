#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;

class Printer
{
private:
	char words[100];
public:
	void SetString(const char* input)
	{
		strcpy(words, input);
	}
	void ShowString()
	{
		cout << words << endl;
	}

};

int main()
{
	Printer pnt;

	pnt.SetString("Hello world!");
	pnt.ShowString();

	pnt.SetString("I love C++");
	pnt.ShowString();

	return 0;
}