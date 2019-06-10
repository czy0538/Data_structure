//2019年6月10日 11:19:19
//耗费大概40min才做完
//太菜了
#include<iostream>
using namespace std;
int main()
{
	int n;
	char c;
	cin >> n;
	cin >> c;
	int sum = 1;
	int temp;
	int i;
	//小于7的情况单列了出来，统一输出c
	if (n==0)
	{
		cout << "0";
		return 0;
	}
	else if (n == 1)
	{
		cout << c << endl << "0";
		return 0;
	}
	else if (n < 7)
	{
		cout << c << endl;
		cout << n - 1;
		return 0;
	}
	for (i = 1; i < n; ++i)
	{
		sum += 2 * (2 * i + 1);
		//	cout << "sum" << sum << endl;
		temp = sum + 2 * (2 * (i + 1) + 1);
		//	cout << "temp" << temp << endl;
		if (temp > n)
			break;
	}
	temp = 2 * (2 * i + 1);
	//cout << i << endl;
	//cout << "temp" <<temp<< endl;
	for (int j = i; j > 0; --j)
	{
		for (int t = 0; t < ((temp - 2 * (2 * j + 1)) / 4); ++t)
		{
			cout << " ";
		}
		for (int m = 1; m <= 2 * j + 1; ++m)
			cout <<c;
		cout << endl;

	}
	for (int k = 0; k < (temp - 2) / 4; ++k)
		cout << " " ;
	cout << c << endl;
	for (int j = 1; j <=i; ++j)
	{
		for (int t = 0; t < ((temp - 2 * (2 * j + 1)) / 4); ++t)
		{
			cout << " ";
		}
		for (int m = 1; m <= 2 * j + 1; ++m)
			cout << c;
		cout << endl;
	}
	cout << n - sum;
	return 0;
}
