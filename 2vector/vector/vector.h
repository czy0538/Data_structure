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

	//Tool function ares

	Rank insert(Rank r, T const& e);
	unsigned remove(Rank lo, Rank hi);
	T remove(Rank r);
	Rank find(T const& e, Rank lo, Rank hi) const;//��������
	int deduplicate();//ȥ��
	void traverse(void(*visit)(T&));
	template <typename VST> void traverse(VST& visit);


};

