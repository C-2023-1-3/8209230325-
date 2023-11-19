#include<iostream>
using namespace std;
int main()
{
	char c;
	cout << "请输入一个字符" << endl;
	cin >> c;
	int as = (int)c;
	if (as <= 122 && 97 <= as)
	{
		cout << "转化为大写为:" << char(as - 32);
		
	}
	else if(as==90)
	{

		cout << "Z没有下一个字母" << endl;
		
	}
	else
	{
		cout << "下一个字符的ASC值为" << c + 1 << endl;
	}


}