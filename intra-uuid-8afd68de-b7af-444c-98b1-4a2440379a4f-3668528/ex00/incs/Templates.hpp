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
