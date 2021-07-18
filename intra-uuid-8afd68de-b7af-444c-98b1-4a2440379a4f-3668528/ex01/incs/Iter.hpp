#pragma once
#include <iostream>

using std::cout;
using std::cin;

template <class T>
void swap(T & first, T & second)
{
	T temp;

	temp = second;
	second = first;
	first = temp;
	return ;
}

template <class T>
T min(T first, T second)
{
	return (second <= first ? second : first);
}

template <class T>
T max(T first, T second)
{
	return (second >= first ? second : first);
}

template <class T>
void ft_print(T toPrint)
{
	cout << toPrint << std::endl;
}

template <class T>
void iter(T *addr, int len, void (*func)(const T & t))
{
	for(int i = 0; i < len; i += 1)
	{
		func(addr[i]);
	}
	return ;
}