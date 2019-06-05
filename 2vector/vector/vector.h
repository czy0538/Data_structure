#pragma once
#include<iostream>
typedef unsigned Rank;
constexpr auto DEFAULT_CAPACITY = 3;
template<typename T> class Vector
{
private:
	Rank _size;//规模,所拥有的元素数目
	unsigned _capacity;//总容量
	T* _elem;//数据区
protected:
	void copyFrom(T const* A, Rank lo, Rank hi);//A[lo,hi）,hi为尾后元素;
	void expand();//空间不足时扩容
public:
	//create function area
	Vector( );//c,s,v
	~Vector();

	//operater function area
	T& operator[] (Rank r) const;
};

