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
	cout << "请输入底边半径" << endl;
	cin >> r;
	cout << "请输入高" << endl;
	cin >> h;
	double v;
	v = calculateV(r, h);
	cout << "体积为：" << v << endl;
}