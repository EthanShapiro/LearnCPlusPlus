#include <iostream>
#include <string>

int main()
{
	std::string playerName;
	int age;

	std::cout << "What is your name?\n";
	std::cin >> playerName;

	std::cout << "Hello " << playerName << "\n";
	std::cout << "Enter your age: ";
	std::cin >> age;

	if (age >= 100)
	{
		std::cout << "Wow you are really old, I don't think you'll be able to play\n";
	}
	else
	{
		std::cout << "You can play!\n";
	}

	std::cin.get();
	return 0;
}