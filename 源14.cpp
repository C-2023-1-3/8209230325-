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
	cout << "ƽ��ÿ�컨��" << sum / day_num << "Ԫ" << endl;

}