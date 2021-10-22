#include <iostream>
#include <random>
#include <ctime>



int main()
{

	int nRolls{ 25 };

	std::mt19937 mersenne{static_cast<std::mt19937::result_type>(time(NULL))};
	std::vector<std::string> Loot{};
	Loot = { "Gold", "Pickaxe", "New Spell", "Armour", "Rotten Apple" };
	
	std::discrete_distribution<int> roll{8,12,12,65,40};

	
	while (69)
	{
		std::cin.ignore();

		int Gold{ 0 }, Pickaxe{ 0 }, New_Spell{ 0 }, Armour{ 0 }, Rotten_Apple{ 0 };

		for (int i{ 0 }; i < nRolls; i++)
		{
			int number = roll(mersenne);
			switch (number)
			{
			case 0:
				Gold++;
				break;
			case 1:
				Pickaxe++;
				break;
			case 2:
				New_Spell++;
				break;
			case 3:
				Armour++;
				break;
			case 4:
				Rotten_Apple++;
				break;
			}
		}

		std::cout << "\n\n********** YOU LOOTED IN " << nRolls << " ROLLS **********\n\n";
		std::cout << "Gold: " << Gold << "\n";
		std::cout << "Pickaxe: " << Pickaxe << "\n";
		std::cout << "New Spell: " << New_Spell << "\n";
		std::cout << "Armour: " << Armour << "\n";
		std::cout << "Rotten Apple: " << Rotten_Apple << "\n";
		
	}

	return 0;
}