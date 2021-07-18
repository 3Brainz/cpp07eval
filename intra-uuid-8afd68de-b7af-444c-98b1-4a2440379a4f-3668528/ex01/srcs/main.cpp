#include <Iter.hpp>

int main()
{
	int a[] = {10, 20, 32, 78, 6, 1};
	std::cout << "integers" << std::endl;
	::iter<int>(a, 6, ft_print);
	char c[] = {'a', 'i', 'u', 't', 'o'};
	std::cout << "chars" << std::endl;
	::iter<char>(c, 5, ft_print);
	std::cout << "floats" << std::endl;
	float f[] = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6};
	::iter<float>(f, 5, ft_print);
}