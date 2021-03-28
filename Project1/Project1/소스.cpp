#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

class Point
{
private:
	int xpos, ypos;

public:
	void Init(int x, int y)
	{
		xpos = x;
		ypos = y;
	}

	void ShowPointInfo() const
	{
		cout << "[" << xpos << " , " << ypos << "]" << endl;
	}
};

class Circle
{
private:
	Point circle_info;
	int radius;
public:
	bool init(int x,int y, int radius_input)
	{
		circle_info.Init(x, y);
		if (radius_input > 0)
			radius = radius_input;
		else
			return false;
	}

	void ShowRadiusInfo() const
	{
		cout << "radius : " << radius << endl;
		circle_info.ShowPointInfo();
	}

	int inform_radius()
	{
		return radius;
	}
};

class Ring
{
private:
	Circle inner_circle;
	Circle outer_circle;
public:
	void Init(int inX, int inY, int inR, int outX, int outY, int outR)
	{
		if (inR < outR)
		{
			inner_circle.init(inX, inY, inR);
			outer_circle.init(outX, outY, outR);
		}

		if (inR > outR)
		{
			inner_circle.init(outX, outY, outR);
			outer_circle.init(inX, inY, inR);
		}

		if (inR == outR)
		{
			inner_circle.init(inX, inY, inR);
			outer_circle.init(outX, outY, outR);
		}
	}

	void ShowRingInfo() const
	{
		cout << "Inner Circle Info..." << endl;
		inner_circle.ShowRadiusInfo();

		cout << "Outer Circle Info..." << endl;
		outer_circle.ShowRadiusInfo();
	}
};

int main()
{
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);

	ring.ShowRingInfo();

	return 0;
}