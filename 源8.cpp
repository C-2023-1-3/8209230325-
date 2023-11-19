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
		cout << "该三角形为等腰三角形" << endl;
	else
		cout << "该三角形不为等腰" << endl;
}

int main()
{
	int a, b ,c;
	while(1)
	{
		cout << "请输入三条边长" << endl;
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
			cout << "请重新输入" << endl;
		}
	}
	judge2(a, b, c);
	cout << "周长为" << a + b + c << endl;

}