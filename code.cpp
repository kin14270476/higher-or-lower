#include <iostream>
#include <string>
#include <random>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() 
{
  int PA; //PA means play again?
  PA = 1;
  while(PA==1)
  {
    srand(time(NULL));

    int UserDice;
    UserDice=rand() %10 + 1;
    cout << UserDice << endl;

    int ComputerDice;
    ComputerDice=rand() %10 + 1;
    cout << ComputerDice << endl;
    
    string HOL; //HOL means Higher Or Lower
    cout << "higher or lower:" ; 
    cin >> HOL;
    cout << HOL<< endl;

    if (UserDice < ComputerDice)
    {
      if (HOL == "higher")
      {
        cout << "you win";
      }
      else 
      {
        cout << "you lose";
      }
    }
    else if (UserDice > ComputerDice)
    {
      if (HOL == "lower")
      {
        cout << "you win" << endl;
      }
      else 
      {
        cout << "you lose" << endl;
      }
    }
    else
    {
      cout << "draw" << endl;
    }
    cout << "play again?(Yes/No):";
    string YON; // YON means Yes or No
    cin >> YON;
    if (YON == "No")
    {
      PA = 0;
    }
  }
}
