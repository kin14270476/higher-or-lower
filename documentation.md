### I. Initiative
This project is a game where a user can guess if a number is higher or lower.

### II. Epics and User Stories

##### Epics
* Program will create 2 random number between 1 and 10
* User is able to see 1 of the random number and will be able to chose if it is higher or lower than the other number
* Program will be in a command line interface 

##### Non-Functional Requirements
* The player will have 3 lives and each time they guess wrong their life will go down by one and once all lives are gone the game will be over and it will display how many guess they got right.
* The player will be given certain amount currency in which they can wager withand they will get money back if they win and they will lose the money that they wagered if they lose.
*

##### User Stories
Written in the format: 

As a player, I would to be able to continue the game without having to refresh the page.


##### How We Addressed The Requirements

How will your planned product meet the user requirements

### III. Genre

### IV. Technical Details

##### Platform
Windows/Linix/Mac depending on where it compiled

##### Programming Language/Enviroment
C++ was used to make this program with the programming enviroment of Repl.it 
![screenshot of IDE](https://github.com/kin14270476/higher-or-lower/blob/master/IDE.png)
##### Programming Challenges
State the programing challenges you are trying to overcome
 
##### Constructing And Implementing My Code

Think of this as the method. How will you go about building your program?

##### Algorithms

Explanation of the algorithms behind your program
 
##### Coding Standards
###### Variable Naming and Location
* All variables must have capital letter for the first letter.
* Variable with mulitple words must have a capital letter for the first letter of each word.
* Each variable must be initiated at the top of document underneath modules.
* Variable should be ordered by type of variable alphabeticaly and then by when they occur in the code.
``` c++
int PA; //PA means play again?
int Lives;
int Money;
int Wins;
int UserDice;
int ComputerDice;
int Bet;
string HOL; //HOL means Higher Or Lower
string YON; //YON means Yes or No
```

###### Modules
* Modules should be imported at the top of code above the variables
* The module iostream should always be at the top of list of module.
* If string is needed to be imported it should go underneath iostream.
* All other modules should be order in alphabetical.
``` C++ 
#include <iostream>
#include <string>
#include <random>
#include <stdlib.h>
#include <time.h>
```
###### Brackets
* Curly brackets should be inline with each other
* Curly Brackets should appear below the if or while statements and it must have the same indentation as the statement. 
``` c++
while (!((HOL == "higher") || (HOL == "lower"))) //This loop forces HOL to be higher or lower and if not will ask the user to reinput the variable.
{
 cout << "You did not chose if the number was higher or lower. Please enter in if the number was higher or lower:";
 cin >> HOL;
}
```
###### Commenting
* Each comment has been written at the end of the line so that reader will know what the comment is in reference.
* Comments will be written for each IF stament, loop and variable to explain what they do.
``` C++
if (YON == "No")//If No terrminate the program
{
 PA = 0;
}
```
###### Blank spaces
* There should be a blank spaces after an end curly bracket or function.
``` c++
while (!((YON == "Yes") || (YON == "No"))) // this forces the user to enter in Yes or No
{
 cout << "You did not answer with a Yes or No for the question. Please enter answer with a Yes or No:";
 cin >> YON;
}

if (YON == "No")//If No terrminate the program
```

### V. Research

### VI. Project Management

##### Burndown Chart

![Example Burndown Chart](https://upload.wikimedia.org/wikipedia/commons/8/8e/SampleBurndownChart.svg)

Chart showing the completion of user stories over time

##### User Stories Tracking Chart (Which Stories Have Been Completed)

Table showing user stories with weighting, due date and completion state

##### Flowchart

[Click her for version 1 of the flow chart](https://github.com/kin14270476/higher-or-lower/blob/master/flowchart1.pdf)

[Click here for version 2 of the flow chart](https://github.com/kin14270476/higher-or-lower/blob/master/flowchart2.pdf)
##### Functions

Descriptions of functions given on flowchart
