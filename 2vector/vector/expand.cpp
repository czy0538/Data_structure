#include"vector.h"
template <typename T> void Vector<T>::expand()
{
	if (_size < _capacity)
		return;
	//else//可省略的else，因为return会自动结束函数。
	if (_capacity < DEFAULT_CAPACITY)
		_capacity = DEFAULT_CAPACITY;//不低于最小容量
	T* oldElem = _elem;
	_elem = new T[_capacity <<= 1];//相当于_capacity*=2;但这样效率高;
	for (int i = 0; i < _size; ++i)
	{
		_elem[i] = oldElem[i];//=被重载过,或T为基本类型
	}
	delete[]oldElem;
}