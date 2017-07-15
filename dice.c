#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/** ADD THE DICE AND RETURN THE TOTAL **/
int addDice(int dieA , int dieB){
	
	int total = dieA + dieB;

	return total;

}

/** RETURNS A NUMBER BETWEEN 1 AND 6 **/
int rollDie(int die){

	die = rand() % 6 + 1;

	return die;
}
