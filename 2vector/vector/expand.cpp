#include"vector.h"
template <typename T> void Vector<T>::expand()
{
	if (_size < _capacity)
		return;
	//else//��ʡ�Ե�else����Ϊreturn���Զ�����������
	if (_capacity < DEFAULT_CAPACITY)
		_capacity = DEFAULT_CAPACITY;//��������С����
	T* oldElem = _elem;
	_elem = new T[_capacity <<= 1];//�൱��_capacity*=2;������Ч�ʸ�;
	for (int i = 0; i < _size; ++i)
	{
		_elem[i] = oldElem[i];//=�����ع�,��TΪ��������
	}
	delete[]oldElem;
}