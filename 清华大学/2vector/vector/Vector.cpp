#include"vector.h"
//Ĭ�Ϲ��캯��
template<typename T> Vector<T>::Vector()//c,s,v
{
	int c = DEFAULT_CAPACITY;
	int s = 0; 
	T v = 0;
	_elem = new T{ _capacity = c };
	for (_size = 0; _size < s; _size++)
	{
		_elem[_size] = v;
	}
}

template<typename T> Vector<T>::~Vector()
{
	delete[] _elem;
}


