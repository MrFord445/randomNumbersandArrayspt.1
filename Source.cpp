/*
James Ford
07/25/21
Create a Professor list using arrays and have the user guess a number 1-10 and see if the guess matches a number chosen by a random number generator */

//establish the liabraies
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>


//claim standard namespace
using namespace std;


//establish the variable type being used
int main() {

	//set maxium for how many items can in the array
	const int maxMaybeVillians = 10;
	string maybeVillians[maxMaybeVillians];

	//declare the user input variable
	int guess;
	//set maxium for how many items can be in the array
	int numVillians = 0;

	//set intial number for tries/guesses/attempts
	int tries = 0;
	
	//label the different items in the array
	maybeVillians[numVillians++] = "1) Magneto";
	maybeVillians[numVillians++] = "2) Venom";
	maybeVillians[numVillians++] = "3) Maleficent";
	maybeVillians[numVillians++] = "4) Thanos";
	maybeVillians[numVillians++] = "5) Galactus";
	maybeVillians[numVillians++] = "6) The Incredible Hulk";
	maybeVillians[numVillians++] = "7) Deadpool ;)";
	maybeVillians[numVillians++] = "8) Wolverine";
	maybeVillians[numVillians++] = "9) Evil Queen";
	maybeVillians[numVillians++] = "10) Pablo Escobar";

	//tell the user of the possible answers
		cout <<"Hello There! Welcome to the ThunderDome \n";
		cout << "You will be choosing a random number that corresponds with your champion \n";
		cout << "The trick is I have already picked your champion, and you have to guess who it is in the least amount of tries \n";
		cout << "Here is the list of those champions \n";

		//create a for loop so that everything can be displayed in order
		for (int i = 0; i < numVillians; ++i)
		{
			cout << maybeVillians[i] << endl;
		}

		//seed random number generator
		srand(time(NULL));

		//declare variable start number
		int someNum = 0; someNum = numVillians;

		//establish a range for possible numbers guessed between 1 and  10
		someNum = rand() % 10 + 1;

		//Do-while loop for tries and guesses of the user
		do
		{
			//try increments
			++ tries;
			cout << "----------------------------------------------------------------------------------\n";
			cout << "Attempt NUmber: " << tries << "\n";
			cout << "Enter your guess: \n";
			cin >> guess;

			//set parameters for if the guess is less than the random number generated
			if (guess < someNum)
			{
				cout << "Stop Low balling! The number is higher than that \n ";
				cout << " Hurry up, and try again \n";
			}

			//set paramenters for if the guess is more than the random number generated
			else if (guess > someNum)
			{
				cout << "Simmer Down there tiger! Not quite that high of a number!";
				cout << "Hurry up, and try again \n ";
			}
			//set correct guess parameters
			else if (guess == someNum)
			{
				cout << "Congrats! About time you guess who your champion is! \n";
				cout << "I was starting to worry about you \n";
				cout << " Good Luck in your battle! \n";
				cout << "oh yeah, dont hit the hulk in his baby factory......he broke the planet last time. \n";
			}
		}
		//set the loop condition
		while (guess != someNum);

		return 0;
}