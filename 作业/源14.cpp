#include<iostream>
using namespace std;
int main()
{
	int day_num=1;
	int apple_num = 2;
	int sum = 0;
	for (;1;day_num++)
	{
		sum = sum + apple_num;
		apple_num = apple_num * 2;
		if (apple_num > 100)
		{
			break;
		}
	}
	cout << "平均每天花费" << sum / day_num << "元" << endl;

}