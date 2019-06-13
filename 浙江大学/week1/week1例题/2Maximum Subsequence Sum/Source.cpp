#include<iostream>
#include<vector>
using namespace std;
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
	int a, b,c;
	c=a = num[0];
	b = num[k - 1];
	int max = 0;
	int now = 0;
	for (int i = 0; i < k; ++i)
	{
		now = now + num[i];
		if (now < 0)
		{
			now = 0;
			if (i < k - 1)
				c = i + 1;
		}
		else if (now > max)
		{
			max = now;
			a = c;
			b = i;//end
		}
			
	}
	
	cout << max <<" "<<a<<" "<<b<< endl;
	return 0;
}