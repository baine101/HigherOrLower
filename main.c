#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "dice.h"
#include "horl.h"


//int correctAnswers = 0;
//int total = 0;
//int totalBefore = 0;
char enter = 0;

/** WAITS FOR USER TO PRESS ENTER **/
void waitForEnter(){

	// Wait for the user to press enter 
	
	while (enter != '\r' && enter != '\n') {
  		enter = getchar(); 
	}	
}


/** PRINTS A SINGLE DIES NUMBER **/
void printInt(int num , char name){
	
	// Make string to output
	char strA[20];
	
	// Format the string for a total or a die
	if(name == '='){
		sprintf(strA, "= %d", num);	
	}else{
		sprintf(strA, "%d", num);	
	}	
	printf("%s",strA);
}


/** MAIN ENTRY **/
void main() {
	// Set Variables
	char guess = '0';
	int trys = 0;

	// Set random value to work from as time
	srand ( time(NULL) );

	printf ("can you guess the next result 3 times in a row?\n");
	printf ("Please press enter to roll the dice: \n");

	// Loop 3 times for the attemts at guessing
	while(trys <= 3){

		// Get user to roll dice 
		waitForEnter();
		// Set enter to 0 for next loop 
		enter = '0';

		// set dice variables
		double dieA = 0;
		double dieB = 0;

		// Generates a random number for each die
		dieA = rollDie(dieA);
		dieB = rollDie(dieB);

		char a = 'A';
		char b = 'B';

		// Prints both die numbers 
		outputDieFace(dieA);
		printf("\n\n + \n\n");
		outputDieFace(dieB);
		//printInt(dieB ,'B');

		// Add the dice
		total = addDice(dieA,dieB);	
		
		// Print the total 	
		char equilSymbol = '=';
		printf("\n\n");
		printInt(total , equilSymbol);
		printf("\n\n");
	
		// Dont run the check if its the first roll as theirs no number to check it too
		if(trys != 0){
			
			// Check the users guess aginst the number			
			checkGuess(guess);
		}
		
		totalBefore = total;
		
		// If its the last loop , end the game
		if(trys == 3 ){
			break;	
			
		}else{
			// Get the user to make a guess for higher or lower 
			printf ("Higher(h) , Lower(l) or the Same(s)?\n");	
			guess = userGuess();
		}

		// Increment trys
		trys++;
		
		
	}
	// Check if they have answerd correctly 3 times
	if(correctAnswers == 3){
		printf("You Win!\n");
	}else{
		printf("You Lose! With ");
		printInt(correctAnswers,' ');
		printf(" correct answers. :( \n");
	}

}

