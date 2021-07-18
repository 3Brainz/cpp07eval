template<class T>
Array<T>::Array() :_len(0)
{
	_arr = new T[0];
}

template<class T>
Array<T>::Array(unsigned int len) : _len(len)
{
	_arr = new T[_len];
	for (size_t i = 0; i < _len; i++)
		_arr[i] = 0;
}

template<class T>
Array<T>::~Array()
{
	delete (_arr);
}

template<class T>
Array<T>::Array(Array const &toCopy)
{
	if (this != &toCopy)
	{
		if (_arr)
			delete (_arr);
		_len = toCopy._len;
		_arr = new T [_len];
		for (size_t i = 0; i < _len; i++)
			_arr[i]	= toCopy._arr[i];
	}
	return (*this);
}

template<class T>
Array<T> & Array<T>::operator = (const Array & toCopy)
{
	
	if (this != &toCopy)
	{
		if (_arr)
			delete (_arr);
		_len = toCopy._len;
		_arr = new T [_len];
		for (size_t i = 0; i < _len; i++)
			_arr[i]	= toCopy._arr[i];
	}
	return (*this);
}

template<class T>
T& Array<T>::operator[](unsigned int i)
{
	if (i >= _len)
		throw(ArrayExceptions());
	return (_arr[i]);
}

template<class T>
unsigned int Array<T>::size(void)
{
	return (_len);
}

template<class T>
const char *	Array<T>::ArrayExceptions::what() const throw()
{
	return ("out of the limits");
}