#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a;
	double b,c;

	cout << "������a��ֵ" << endl;
	cin >> a;
	b = a;
	for (;1;)
	{
		c = (b + a / b) / 2;
		if (c - b < 1e-5 &&-(1e-5) < c - b)
		{
			cout << "�ɵ�������õ�ƽ����Ϊ" << c << endl;
			break;
		}
		b = c;
	}

}
