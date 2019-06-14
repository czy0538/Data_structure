#include"Time.cpp"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
template<typename T> class BinarySearch
{
private:
	vector<T> num;
	int lo;
	int hi;
	int mid;
	int key;
public:
	BinarySearch()
	{
		cout << "被查找元素:";
		cin >> key;
		while (!cin.eof())
		{
			T temp;
			cin >> temp;
			num.push_back(temp);
		}
		lo = 0;
		hi = num.size() - 1;
		sort(num.begin(),num.end());
		int rank = Rank();
		if (rank==-1)
			cout << "没找到元素" << endl;
		else cout <<"元素位置为"<< rank << endl;
	}
	int Rank()
	{
		while (lo <= hi)
		{
			int mid = lo + (hi - lo) / 2;
			if (key < num[mid])
				hi = mid - 1;
			else if (key > num[mid])
				lo = mid + 1;
			else return mid;
		}
		return -1;
	}
};
int main()
{
	BinarySearch<int> bin;
	return 0;
}

