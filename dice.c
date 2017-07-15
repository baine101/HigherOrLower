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

/** OUT PUTS THE DIE'S FACE **/ 
void outputDieFace(int die){

	switch(die) {

   		case 1 :
      			printf("-----\n|   |\n| o |\n|   |\n-----");
      		break;
		
		case 2 :
			printf("-----\n|o  |\n|   |\n|  o|\n-----");
		break;
		
		case 3 :
			printf("-----\n|o  |\n| o |\n|  o|\n-----");
		break;
		
		case 4 :
			printf("-----\n|o o|\n|   |\n|o o|\n-----");
		break;
		
		case 5 :
			printf("-----\n|o o|\n| o |\n|o o|\n-----");
		break;
		
		case 6 :
			printf("-----\n|o o|\n|o o|\n|o o|\n-----");
		break;
	}

}
