#include"vector.h"
//对象机制
template<typename T> template <typename VST>
void Vector<T>::traverse(VST& visit)
{
	for (int i = 0; i < _size; ++i)
	{
		visit(_elem[i]);
	}
}


//指针机制
template<typename T>
void Vector<T>::traverse(void(*visit)(T&))
{
	for (int i = 0; i < _size; ++i)
		visit(_elem[i]);
}