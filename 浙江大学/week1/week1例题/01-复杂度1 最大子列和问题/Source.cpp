#include<iostream>
#include<vector>
#include"Time.cpp"
using namespace std;
//2019年6月13日 11:22:43
Time t;
//最高效的算法，O(n)
int main()
{
	int k;
	cin >> k;
	vector<int> num;
	for (int i = 0; i < k; ++i)
	{
		int temp;
		cin >> temp;
		num.push_back(temp);
	}
	int max = 0;
	int now = 0;
	t.start();
	for (int i = 0; i < k; ++i)
	{
		now = now + num[i];
		if (now < 0)
			now = 0;
		else if(now>max)
			max = now;
	}
	t.stop();
	cout << max << endl;
	return 0;
}