#include <iostream>

using namespace std;

typedef struct __Point
{
	int xpos;
	int ypos;
}Point;

Point& PntAdder(const Point &p1, const Point &p2)
{
	Point *ans = new Point;
	ans->xpos = p1.xpos + p2.xpos;
	ans->ypos = p1.ypos + p2.ypos;

	return *ans;
}

int main()
{
	Point *number1 = new Point;
	number1->xpos = 3;
	number1->ypos = 30;

	Point *number2 = new Point;
	number2->xpos = 70;
	number2->ypos = 7;

	Point &temp = PntAdder(*number1, *number2);
	cout << " x: " << temp.xpos << " " << "y : " << temp.ypos << endl;

	delete number1;
	delete number2;
	delete &temp;

	return 0;
}