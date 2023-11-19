#include<iostream>

using namespace std;
int main()
{
	char str[50];
	cin.getline(str, 50);
	int len = strlen(str);
	int num1 =0;
	int num2 = 0;
	int num3 = 0;
	cout << len << endl;
	for (int i = 0;i < len;i++)
	{
		if (int(str[i]) == 32)
		{
			num1++;
		}
		if (int(str[i])<=122&&97<=int(str[i])||65<=int(str[i])&&int(str[i])<=90)
		{
			num2++;
		}
		if (str[i]-'0'<10&&0<=str[i]-'0')
		{
			num3++;
		}


	}
	cout << num1 << " " << num2 << " " << num3 << endl;
}