#include<iostream>
using namespace std;
int main()
{
	char c;
	cout << "������һ���ַ�" << endl;
	cin >> c;
	int as = (int)c;
	if (as <= 122 && 97 <= as)
	{
		cout << "ת��Ϊ��дΪ:" << char(as - 32);
		
	}
	else if(as==90)
	{

		cout << "Zû����һ����ĸ" << endl;
		
	}
	else
	{
		cout << "��һ���ַ���ASCֵΪ" << c + 1 << endl;
	}


}