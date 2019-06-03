#pragma once
#include<iostream>
typedef unsigned Rank;
#define DEFAULT_CAPACITY 3
template<typename T> class Vector
{
private:
	Rand _size;//��ģ,��ӵ�е�Ԫ����Ŀ
	unsigned _capacity;//������
	T* _elem;//������
protected:
	void copyFrom(T const* A, Rand lo, Rand hi);//A[lo,hi��,hiΪβ��Ԫ��;
	void expand();//�ռ䲻��ʱ����
public:
	Vector(int c = DEFAULT_CAPACITY, int s = 0; T v = 0)//c,s,v
	{
		_elem = new T{ _capacity = c };
		for (_size = 0; _size < s; _size++)
		{
			_elem[_size] = v;
		}
	}
	~Vector()
	{
		delete[] _elem;
	}
};

