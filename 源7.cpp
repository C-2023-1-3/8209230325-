#include<iostream>
using namespace std;
int main()
{
	double x, y;
	while (1)
	{
		cout << "������x��ֵ" << endl;
		cin >> x;
		if ( x < 1&&x>0)
		{
			y = 3 - 2 * x;
			cout << y << endl;
		}
		else if (x < 5)
		{
			y = 2 / (4 * x) + 1;
			cout << y << endl;
		}
		else if (x < 10)
		{
			y = x * x;
			cout << y << endl;
		}
		else if(x<0||x>=10)
		{
			cout << "����������" << endl;
		}
		if (x == 0)
		{
			cout << "����������" << endl;
		}
	}
}