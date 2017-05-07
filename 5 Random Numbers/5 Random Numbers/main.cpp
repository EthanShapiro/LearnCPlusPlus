#include <iostream>
#include <string>
#include <random>
#include <ctime>

int main()
{
	std::mt19937 rg(time(0));
	std::uniform_int_distribution<int> diceRoll(1, 6);
	std::uniform_real_distribution<float> chancePercent(0.0f, 1.0f);
	std::cout << "I am rolling a " << diceRoll(rg) << std::endl;
	std::cout << "My chance is " << chancePercent(rg) << std::endl;

	std::cin.get();
	return 0;
}