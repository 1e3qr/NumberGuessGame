#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	Start:
	int diff;
	std::cout << "\nWelcome to the Number Guessing Game!\nI'm thinking of a number between 1 and 100.\n" << std::endl;
	std::cout << "Please select a difficulty:\n1. Easy (10 chances)\n2. Medium (5 chances)\n3. Hard (3 chances)\n" << std::endl;
diffselect:

	std::cout << "Enter your choice: ";
	std::cin >> diff;
	if (diff == 1)
	{
		std::cout << "\nGreat! You have selected the Easy difficulty level.\nLet's start the game!\n";
	}
	else if (diff == 2)
	{
		std::cout << "\nGreat! You have selected the Medium difficulty level.\nLet's start the game!\n";
	}
	else if (diff == 3)
	{
		std::cout << "\nGreat! You have selected the Hard difficulty level.\nLet's start the game!\n";
	}
	else
	{
		std::cout << "\nInvalid Choice, please enter a valid difficulty\n";
		goto diffselect;
	}
	srand(time(0));
	int randomNum = rand() % 101;
	int guess = -1;
	//std::cout << randomNum;

	if (diff == 1)
	{
		std::cout << "\nYou have 10 chances.\n";
		for (int i = 1; i < 11; i++)
		{
			std::cout << "\nEnter your guess: ";
			std::cin >> guess;
			if (guess < randomNum)
			{
				std::cout << "Incorrect! The number is greater than " << guess << ".\n" << std::endl;
			}
			else if (guess > randomNum)
			{
				std::cout << "Incorrect! The number is less than " << guess << ".\n" << std::endl;;
			}
			else if (guess == randomNum)
			{
				std::cout << "Congratulations! You guessed the correct number in " << i << " attempts." << std::endl;
				goto Win;
			}
		}
	}
	if (diff == 2)
	{
		std::cout << "\nYou have 5 chances.\n";
		for (int i = 1; i < 6; i++)
		{
			std::cout << "\nEnter your guess: ";
			std::cin >> guess;
			if (guess < randomNum)
			{
				std::cout << "Incorrect! The number is greater than " << guess << ".\n" << std::endl;
			}
			else if (guess > randomNum)
			{
				std::cout << "Incorrect! The number is less than " << guess << ".\n" << std::endl;;
			}
			else if (guess == randomNum)
			{
				std::cout << "Congratulations! You guessed the correct number in " << i << " attempts." << std::endl;
				goto Win;
			}
		}
	}
	if (diff == 3)
	{
		std::cout << "\nYou have 3 chances.\n";
		for (int i = 1; i < 4; i++)
		{
			std::cout << "\nEnter your guess: ";
			std::cin >> guess;
			if (guess < randomNum)
			{
				std::cout << "Incorrect! The number is greater than " << guess << ".\n" << std::endl;
			}
			else if (guess > randomNum)
			{
				std::cout << "Incorrect! The number is less than " << guess << ".\n" << std::endl;;
			}
			else if (guess == randomNum)
			{
				std::cout << "Congratulations! You guessed the correct number in " << i << " attempts." << std::endl;
				goto Win;
			}
		}
	}

	char replay;
	std::cout << "You lose.\n";
	std::cout << "Do you want to play again?(Y/N)\n";
	std::cin >> replay;
	if (replay == 'Y')
	{
		goto Start;
	}
	else if (replay == 'N')
	{
		std::cout << "Adios!" << std::endl;
		std::cin.get();
	}
	else
	{
		std::cout << "I guess not? Adios!" << std::endl;
		std::cin.get();
	}
	Win:
	std::cin.get();
}