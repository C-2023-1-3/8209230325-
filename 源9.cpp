#include<iostream>
using namespace std;
int main()
{
	int a, b, res;
	char c;
	cout << "�������һ������" << endl;
	cin >> a;
	cout << "�����������" << endl;
	cin >> c;
	cout << "������Ķ�������" << endl;
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
		cout << "������Ƿ�" << endl;
	cout << "���Ϊ" << res << endl;
}
