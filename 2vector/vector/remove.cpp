#include"vector.h"
template<typename T>
//��Χɾ��
unsigned Vector<T>::remove(Rank lo, Rank hi)
{
	if(lo==hi)
	return 0;
	while (hi < _size)
	{
		_elem[lo++] = _elem[hi++];
		_size = lo;
		//shrink();
		return hi - lo;
	}
}

//ɾ����Ԫ��
template<typename T>
T Vector<T>::remove(Rank r)
{
	T e = _elem[r];
	remove(r, r + 1);
	return e;
	return e;
}

//ȥ��
template<typename T>
int Vector<T>::deduplicate()
{
	int oldSize = _size;
	Rank i = 1;
	while (i < _size)
	{
		if (find(_elem[i], 0, 1) < 0)
			++i;
		else
			remove(i);	
	}
	return oldSize - _size;

}
