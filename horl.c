#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int correctAnswers = 0;
int total = 0;
int totalBefore = 0;
//char enter = 0;

/** GETS THE USER TO GUESS IF THE NEXT ROLL WILL BE HIGHER OR LOWER **/
char userGuess(){

	char guess;
		
	// Get the users Guess 
	scanf("%c", &guess);
	
	// If the users guess isnt valid , then re-run this function until it is
	if(guess == 'h' || guess == 'l' || guess == 's'){

		printf("You entered: %c\n",guess );

		return guess;			
	}else{
		userGuess();	
	}	

		
}

/** CHECKS IF THE TOTAL IS HIGHER THAN THE LAST TOTAL  **/
void checkIfHigher(){	

	// If the total if greater than the previos total
	if(total > totalBefore){
		printf("Correct! The total is higher than the last :)\n");
		correctAnswers++;
	}else if(total == totalBefore ){
		printf("Wrong! Both Totals are the same\n");
	}else{
		printf("Wrong! The total is lower than the last \n");
	}

}

/** CHECKS IF THE TOTAL IS HIGHER THAN THE LAST TOTAL  **/
void checkIfLower(){	

	// If the total if greater than the previos total
	if(total < totalBefore){
		printf("Correct! The total is lower than the last :)\n");
		correctAnswers++;
	}else if(total == totalBefore ){
		printf("Wrong! Both Totals are the same\n");
	}else{
		printf("Wrong! The total is higher than the last\n");
	}

}

/** CHECKS IF THE TOTAL IS HIGHER THAN THE LAST TOTAL  **/
void checkIfSame(){	
			
	// If the total if less than  than the previos total
	if(total == totalBefore){
		printf("Correct! Both Number are the same :)\n");
		correctAnswers++;	
	}else if(total < totalBefore){
		printf("Wrong! The total is lower than the last\n");
	}else if(total > totalBefore){
		printf("Wrong! The total is Higher than the last\n");
	}

}


/** CHECKS THE USERS GUESS AGAINST THE NUMBER **/
int checkGuess(char guess){

	if(guess == 'h'){
		checkIfHigher();	
	}else if(guess == 'l'){
		checkIfLower();
	}else if (guess == 's'){
		checkIfSame();	
	}
	
}
