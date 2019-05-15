//Hailstone(n)
#include<iostream>
using namespace std;
using LL=long long;
void hailstone(LL n)
{
	int length = 1;
	while (1 < n)
	{
		if (n % 2 == 0)
			n /= 2;
		else
			n = 3 * n + 1;
		++length;
		cout << n << endl;
	}
	cout <<"ÔËËã´ÎÊý"<< length << endl;
}
//int main()
//{
//	LL n;
//	cin >> n;
//	hailstone(n);
//	return 0;
//}