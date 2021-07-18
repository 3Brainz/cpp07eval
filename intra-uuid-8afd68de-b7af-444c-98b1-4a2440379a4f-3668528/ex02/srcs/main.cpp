#include <Array.hpp>

int main()
{
	size_t count = 10;
	Array<int> banana(count);
	std::cout << banana.size() << std::endl;
	for (size_t i = 0; i < count; i++)
	{
		std::cout << banana[i] << std::endl;
		banana[i] = i;
	}
	for (size_t i = 0; i < count; i++)
	{
		std::cout << banana[i] << std::endl;
	}
	try
	{
		std::cout << banana[count + 1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}