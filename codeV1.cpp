#include <iostream>
#include <string>
#include <random>
#include <stdlib.h>
#include <time.h>
using namespace std;
int PA; //PA means play again?
int Lives;
int Wins;
int UserDice;
int ComputerDice;
string HOL; //HOL means Higher Or Lower
string YON; // YON means Yes or No
int main() 
{
  cout << "In this game you will roll a dice and you must guess if you rolled higher or lower than the computer dice. The games ends when you guess wrong 3 times." << endl;
  PA = 1;
  while(PA==1)
  {
    lives = 3;
    wins = 0;
    while(lives>0)
    {
      cout << endl;
      srand(time(NULL));
      UserDice=rand() %10 + 1;
      cout << "You rolled a " << UserDice << "." << endl;
      ComputerDice=rand() %10 + 1;
      cout << "Do you think you rolled higher or lower:" ; 
      cin >> HOL;
      while(!((HOL == "higher") || (HOL == "lower")))
      {
        cout << "You did not chose if the number was higher or lower. Please enter in if the number was higher or lower:";
        cin >> HOL;
      }
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
