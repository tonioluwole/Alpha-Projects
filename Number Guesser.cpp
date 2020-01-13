/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// ConsoleApplication5.cpp : Defines the entry point for the console application.
//


#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;


int main()
{
	srand(time(NULL));

	int number = (rand() % 100) + 1;

	int remain = 20;

	cout << "You have 20 guesses" << endl << endl;

	for (int i = 0; i < 20; i++) {

		int guess;

		remain--;

		cout << "Guess a number (1 to 100): " << endl;
		cin >> guess;

		if (number == guess) {
		   cout  << endl; 
			cout << "Congrats! You guessed it! You win... " << endl;
			cout << "Nothing!" << endl;
		
			return 0;
		}

		if (number < guess) {
			cout << "Your number is higher" << endl;
			cout << "You have " << remain << " guesses left" << endl << endl;
		}

		else if (number > guess) {
			cout << "Your number is lower" << endl;
			cout << "You have " << remain << " guesses left" << endl << endl;
		}


		if (remain == 0)
			cout << "you have 0 guesses left" << endl;
	}

	return 0;
}

