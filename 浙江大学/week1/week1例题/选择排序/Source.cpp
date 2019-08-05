#include<iostream>
#define MAX 10
using namespace std;
template<typename T>
class SelectionSort
{
private:
	T num[MAX];
public:
	SelectionSort()
	{
		for (int i = 0; i < MAX; ++i)
		{
			cin >> num[i];
		}
	}
	void Swap(T *a, T *b)
	{
		T c = *a;
		*a = *b;
		*b = c;
	}
	void Sort()
	{
		for (int i = 0; i < MAX-1; ++i)
		{
			int t = i;
			for (int j = i + 1; j < MAX; ++j)
			{
				if (num[j] < num[t])
				{
					t = j;
				}
			}
			Swap(&num[t], &num[i]);
		}
	}
	void print()
	{
		for (auto  i:num)
		{
			cout << i << endl;
		}
	}
	

};


int main()
{
	SelectionSort<int> s;
	s.Sort();
	s.print();
}
