#include<iostream>
using namespace std;
bool judge1(int a, int b, int c)
{
	if (a + b > c && a + c > b && b + c > a)
		return true;
	else
		return false;
}
void judge2(int a, int b, int c)
{
	if (a == b || a == c || b == c)
		cout << "��������Ϊ����������" << endl;
	else
		cout << "�������β�Ϊ����" << endl;
}

int main()
{
	int a, b ,c;
	while(1)
	{
		cout << "�����������߳�" << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		bool res=judge1(a, b, c);
		if (res)
		{
			break;
		}
		else
		{
			cout << "����������" << endl;
		}
	}
	judge2(a, b, c);
	cout << "�ܳ�Ϊ" << a + b + c << endl;

}