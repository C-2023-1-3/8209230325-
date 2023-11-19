#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a;
	double b,c;

	cout << "请输入a的值" << endl;
	cin >> a;
	b = a;
	for (;1;)
	{
		c = (b + a / b) / 2;
		if (c - b < 1e-5 &&-(1e-5) < c - b)
		{
			cout << "由迭代法求得的平方根为" << c << endl;
			break;
		}
		b = c;
	}

}
