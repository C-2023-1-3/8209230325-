#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "请输入您想要打印的行数" << endl;
	cin >> num;
	for (int i =1 ;i <= num;i++)
	{
		for (int j = 1;j <= i;j++)
		{
			cout << "*";
		
		}
		cout << endl;
		cout << endl;
		cout << endl;
	}
	

}