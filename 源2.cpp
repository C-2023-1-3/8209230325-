#include<iostream>
using namespace std;
#define pai 3.14
double calculateV(double&r,double&h)
{
	double v;
	v = pai * r * r * h / 3;
	return v;
}
int main()
{
	double r;
	double h;
	cout << "������ױ߰뾶" << endl;
	cin >> r;
	cout << "�������" << endl;
	cin >> h;
	double v;
	v = calculateV(r, h);
	cout << "���Ϊ��" << v << endl;
}