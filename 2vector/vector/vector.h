#pragma once
#include<iostream>
typedef unsigned Rank;
constexpr auto DEFAULT_CAPACITY = 3;
template<typename T> class Vector
{
private:
	Rank _size;//��ģ,��ӵ�е�Ԫ����Ŀ
	unsigned _capacity;//������
	T* _elem;//������
protected:
	void copyFrom(T const* A, Rank lo, Rank hi);//A[lo,hi��,hiΪβ��Ԫ��;
	void expand();//�ռ䲻��ʱ����
public:
	//create function area
	Vector( );//c,s,v
	~Vector();

	//operater function area
	T& operator[] (Rank r) const;
};

