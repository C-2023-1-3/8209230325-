#include<iostream>
using namespace std;
int main()
{
	int a, b, res;
	char c;
	cout << "请输入第一个数字" << endl;
	cin >> a;
	cout << "请输入运算符" << endl;
	cin >> c;
	cout << "请输入的二个数字" << endl;
	cin >> b;
	if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
	{
		if (c == '+')
		{
			res = a + b;
		}
		if (c == '-')
		{
			res = a - b;
		}

		if (c == '*')
		{
			res = a * b;
		}
		if (c == '/')
		{
			res = a / b;
		}
		if (c == '%')
		{
			res = a % b;
		}


	}
	else
		cout << "运算符非法" << endl;
	cout << "结果为" << res << endl;
}
