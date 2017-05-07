#include <iostream>
#include <random>
#include <ctime>

int main()
{
	// Swordsmen vars
	short numSwordsmen = 0;
	short swordsmenHealth = 30;
	short swordsmenAttack = 10;
	float swordsmenAttackChance = 0.5f;
	int totalNumSwordsmen = 0;
	short currentSwordsmenHealth = swordsmenHealth;

	// Archer vars
	short numArchers = 0;
	short archerHealth = 20;
	short archerAttack = 20;
	float archerAttackChance = 0.6f;
	int totalNumArchers = 0;
	short currentArcherHealth = archerHealth;

	// Random 
	std::mt19937 rg(time(NULL));
	std::uniform_real_distribution<float> attackChanceRoll(0.0f, 1.0f);

	// General vars
	char turn = 's';

	std::cout << "********************************\n";
	std::cout << "Welcome to Swordsmen vs. Archers\n";
	std::cout << "********************************\n";

	std::cout << "\nPlease add swordsmen to the army: ";
	std::cin >> totalNumSwordsmen;

	std::cout << "\nPlease add archers to the army: ";
	std::cin >> totalNumArchers;

	while (numArchers > 0 && numSwordsmen > 0)
	{
		float attackRoll = attackChanceRoll(rg);
		if (turn == 's' && swordsmenAttackChance <= attackRoll)
		{
			currentArcherHealth -= swordsmenAttack;
			if (currentArcherHealth <= 0) 
			{
				totalNumArchers--;
				currentArcherHealth = archerHealth;
			}
		}
		else if (turn == 'a' && archerAttackChance <= attackRoll)
		{
			currentSwordsmenHealth -= archerAttack;
			if (currentSwordsmenHealth <= 0)
			{
				totalNumSwordsmen--;
				currentSwordsmenHealth = swordsmenHealth;
			}
			turn = 's';
		}
	}
	if (totalNumArchers <= 0) 
	{
		std::cout << "Arcers won with " << totalNumArchers << std::endl;
	}
	else
	{
		std::cout << "Swordsmen won with " << totalNumSwordsmen << std::endl;
	}

	std::cin.get();
	std::cin.get();
	return 0;
}