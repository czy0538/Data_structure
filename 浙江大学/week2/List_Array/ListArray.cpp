#include<iostream>
constexpr long long MAXSIZE = 10;
template<typename T>
class List
{
private:
	T Data[MAXSIZE];
	long long Last;
public:
	List()
	{
		Last = -1;
	}
	long long Find(T x)
	{
		long long i = 0;
		while (i <= Last && Data[i] != x)
			++i;
		if (i > Last)
			return -1;
		else return i;
	}
	long long Insert(T x,long long i)
	{
		
		if (Last == MAXSIZE - 1)
		{
			cout << "���Ա��Ѿ�����" << endl;
			return -1;
		}
		if (i < 1 || i < Last + 2)
		{
			cout << "�Ƿ�λ��" << endl;
			return -1'
		}
		for (int j = Last; j >= i - 1; j--)
		{
			Data[j + 1] = Data[j];
		}
		Data[i - 1] = x;
		++Last;
		return i - 1;
	}
	long long Delete(long long i)
	{
		if(i<1||)
	}
};