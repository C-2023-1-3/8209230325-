#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	cout << "����������������" << endl;
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
	cout << "���Լ��Ϊ" <<gys<< endl;
	for (int i = (a > b ? a : b);1;i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			gbs = i;
			break;

		}
	}
	cout << "��С������Ϊ" << gbs << endl;

}