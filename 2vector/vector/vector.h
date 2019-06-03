#pragma once
#include<iostream>
typedef unsigned Rank;
#define DEFAULT_CAPACITY 3
template<typename T> class Vector
{
private:
	Rand _size;//规模,所拥有的元素数目
	unsigned _capacity;//总容量
	T* _elem;//数据区
protected:
	void copyFrom(T const* A, Rand lo, Rand hi);//A[lo,hi）,hi为尾后元素;
	void expand();//空间不足时扩容
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

