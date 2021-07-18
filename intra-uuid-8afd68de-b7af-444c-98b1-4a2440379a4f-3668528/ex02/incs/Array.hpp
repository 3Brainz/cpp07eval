#pragma once
#include <iostream>
#include <exception>

template<class T>
class Array
{
public:
	/*Construction*/
	Array();
	Array(unsigned int n);
	Array(Array const &toCopy);
	~Array();
	/*overloads*/
	Array &	operator = (const Array & toCopy);
	T&	operator[](unsigned int i);
	/*getters*/
	unsigned int size(void);
	/*exceptions*/
	class	ArrayExceptions : public std::exception{const char * what() const throw();};
protected:

private:
	T				*_arr;
	unsigned int	_len;
};

#include <Array.ipp>