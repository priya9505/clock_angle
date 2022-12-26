#include<iostream>
using namespace std;
int main()
{
	int min, hour;
	cout << "Enter hours and minutes: ";
	cin >> hour >> min;
	float angle;
	float h = ((hour%12) + (float)min/60)*30;
	float m = min * 6;
	//angle = (30*hour) + (0.5*min);
	angle = h-m;
	if(angle < 0)
	{
		angle = -(angle);
	}
	cout << angle << endl;

}
