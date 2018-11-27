#include <iostream>
#include <string>
#include <random>
#include <stdlib.h>
#include <time.h>
using namespace std;
int PA; //PA means play again?
int Lives;
int Money;
int Wins;
int UserDice;
int ComputerDice;
int Bet;
string HOL; //HOL means Higher Or Lower
string YON; // YON means Yes or No
int main()
{
	cout << "In this game you will roll a dice and you must guess if you rolled higher or lower than the computer dice. You will wager on these dice throws and will get 50% of your wager back if you win but if you lose you will lose all the money you wagered. When you first start you will chose how much money you start with. When all your money is gone you lose the game. You can also cash out your money to end the game." << endl;
	PA = 1;
	while (PA == 1)
	{
		Lives = 1;
		cout << endl << "How much money would you like to start with?";
		while (!(cin >> Money)) //This loop force the input to be a integer for money
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "You did not enter in a number for the amount of money you want to have. Please enter in a  number: ";
		}
		Wins = 0;
		while (Lives>0)
		{
			cout << endl;
			srand(time(NULL));

			UserDice = rand() % 10 + 1;
			cout << "You rolled a " << UserDice << "." << endl;

			ComputerDice = rand() % 10 + 1;

			cout << "Do you think you rolled higher or lower:";
			cin >> HOL;
			while (!((HOL == "higher") || (HOL == "lower"))) //This loop forces HOL to be higher or lower and if not will ask the user to reinput the variable.
			{
				cout << "You did not chose if the number was higher or lower. Please enter in if the number was higher or lower:";
				cin >> HOL;
			}
			cout << "How much do you want to bet that your answer is correct?";
			while (!(cin >> Bet)) //This loop force the input to be a integer for money
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "You did not enter in a number for the amount of money you want to bet. Please enter in a number: ";
			}
      while (Money < Bet) //This loop stops the user from inputing more money than they own.
      {
        cout << "You bet more money than you own. please enter in a number that is within amount of money you own:";
        while (!(cin >> Bet)) //This loop force the input to be a integer for money. This loop has been repeated as if the user manages to enter in a number but with more money than they own and then processed to enter in a non-number in the reinput it will bypass the number check and break the game so i repeated this so that it can't by pass the number check. 
        {
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(), '\n');
          cout << "You did not enter in a number for the amount of money you want to bet. Please enter in a number: ";
        }
      }
			if (UserDice < ComputerDice) //This works out if the dice is lower and if it is then it will use the users input to decide if they won or not.
			{
				if (HOL == "higher") // checks if the user guess is higher than the number and if so gives the user a win and the money they had bet.
				{
					Wins = Wins + 1;
					Money = Money + Bet;
					cout << "You guessed right." << endl << "You have won " << Wins << " times and you have " <<  Money << " money left" << endl;
				}
				else // they will lose the money that they had bet
				{
					Money = Money - Bet;
					cout << "You guessed wrong." << endl << "You have " <<  Money << " money left" << endl;
				}
			}
			else if (UserDice > ComputerDice) //This works out if the dice is higher and if it is then it will use the users input to decide if they won or not.
			{
				if (HOL == "lower") // checks if the user guessed if the number was lower and if so gives the user a win and the money they had bet
				{
					Wins = Wins + 1;
					Money = Money + Bet;
					cout << "You guess right." << endl << "You have won " << Wins << " times and you have " <<  Money << " money left" << endl;
				}
				else // they will lose the money that they had bet
				{
					Money = Money - Bet;
					cout << "You guessed wrong." << endl << "you have " << Money << " money left" << endl;
				}
			}
			else //If the dice is not higher or lower it must be equal so the player draws
			{
				cout << "Your dice and the computer dice was the same so it is a draw. you were returned the money you bet" << endl;
			}
			if (Money < 1)// if the user is out of money this will end the game
			{
				Lives = 0;
			}
			else // if the user has money, offer the user to cash in the money and end the game
			{
				cout << "do you want to cash in your money?";
				cin >> YON;
				while (!((YON == "Yes") || (YON == "No")))// this forces the user to enter in Yes or No
				{
					cout << "You did not answer with a Yes or No for the question. Please enter answer with a Yes or No:";
					cin >> YON;
				}
				if (YON == "Yes") //If yes end the game and keep the users money
				{
					Lives = 0;
				}
			}
		}
		cout << endl << "Game Over." << endl << "you won " << Wins << " times and you ended with " << Money << " money" << endl << "play again?(Yes/No):";
		cin >> YON;
		while (!((YON == "Yes") || (YON == "No"))) // this forces the user to enter in Yes or No
		{
			cout << "You did not answer with a Yes or No for the question. Please enter answer with a Yes or No:";
			cin >> YON;
		}
		if (YON == "No")//If No terrminate the program
		{
			PA = 0;
		}
	}
}
