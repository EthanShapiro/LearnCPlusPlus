#include <iostream>
#include <string>

int main()
{
	int counter = 0;
	while (counter < 5)
	{
		std::cout << counter << std::endl;
		counter++;
	}

	for (int i = 0; i < 5; i++) 
	{
		std::cout << i << std::endl;
	}

	int x = 0;
	do
	{
		x++;
		std::cout << "This will only run once" << std::endl;
	} while (x < 1);

	std::cin.get();
	return 0;
}