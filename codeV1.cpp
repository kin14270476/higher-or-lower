#include <iostream>
#include <string>
#include <random>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() 
{
  cout << "In this game you will roll a dice and you must guess if you rolled higher or lower than the computer dice. You will wager on these dice throw and will get 50% of your wager back if you win but if you lose you will lose all the money you wagered. When you first start you will chose how much money you start with. When all your money is gone you lose the game. You can also cash out your money to end the game." << endl;
  int PA; //PA means play again?
  PA = 1;
  while(PA==1)
  {
    int lives;
    lives = 3;
	  
    int wins;
    wins = 0;
    while(lives>0)
    {
      cout << endl;
      srand(time(NULL));
      
      int UserDice;
      UserDice=rand() %10 + 1;
      cout << "You rolled a " << UserDice << "." << endl;

      int ComputerDice;
      ComputerDice=rand() %10 + 1;
      cout << "The computer rolled a " << ComputerDice << " only for debugging." << endl;
      
      string HOL; //HOL means Higher Or Lower
      cout << "Do you think you rolled higher or lower:" ; 
      cin >> HOL;
      while(!((HOL == "higher") || (HOL == "lower")))
      {
        cout << "You did not chose if the number was higher or lower. Please enter in if the number was higher or lower:";
        cin >> HOL;
      }
      cout << "User guessed " << HOL << " only for debugging." << endl;

      int Bet;
      cout << "How much do you want to bet that your answer is correct?";
      while(!(cin >> Bet)) //This loop force the input to be a integer for money
      {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "You did not enter in a number for the amount of money you want to bet. Please enter in a  number: ";
      }
      cout << "The user bet " << Bet;

      if (UserDice < ComputerDice) //This figures out if the dice is lower and if it is then it will use the users input to decide if they won or not.
      {
        if (HOL == "higher")
        {
          wins = wins + 1;
          cout << "You guessed right." << endl << "You have won " << wins << " times and you have " << lives << " lives left." << endl;
        }
        else 
        {
          lives = lives - 1 ;
          cout << "You guessed wrong." << endl << "You have " << lives << " lives left." << endl;
        }
      }
      else if (UserDice > ComputerDice) //This figures out if the dice is higher and if it is then it will use the users input to decide if they won or not.
      {
        if (HOL == "lower")
        {
          wins = wins + 1;
          cout << "You guess right." << endl << "You have won " << wins << " times and you have " << lives << " lives left." << endl;
        }
        else 
        {
          lives = lives - 1 ;
          cout << "You guessed wrong." << endl << "you have " << lives << " lives left." << endl;
        }
      }
      else //If the dice is not higher or lower it must be equal so the player draws
      {
        cout << "Your dice and the computer dice was the same so it is a draw." << endl;
      }
    }
    cout << endl << "Game Over." << endl << "you won " << wins << " times" << endl << "play again?(Yes/No):";
    string YON; // YON means Yes or No
    cin >> YON;
    while(!((YON == "Yes") || (YON == "No")))
      {
        cout << "You did not chose if the number was higher or lower. Please enter in if the number was higher or lower:";
        cin >> YON;
      }
    if (YON == "No")
    {
      PA = 0;
    }
  }
}
