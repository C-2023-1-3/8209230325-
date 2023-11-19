#include<iostream>
using namespace std;
int main()
{
	double f;
	double c;
	cout << "请输入华氏摄氏度" << endl;
	cin >> f;
	c = 5 * (f - 32) / 9;
	cout << "转化为摄氏温度为" <<c<< endl;


}