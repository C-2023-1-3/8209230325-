#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	cout << "请输入两个正整数" << endl;
	cin >> a;
	cin >> b;
	int gys = 0;
	int gbs = 0;
	for (int i = 1;i <=(a < b ? a : b);i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			gys = i;
		}
	}
	cout << "最大公约数为" <<gys<< endl;
	for (int i = (a > b ? a : b);1;i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			gbs = i;
			break;

		}
	}
	cout << "最小公倍数为" << gbs << endl;

}