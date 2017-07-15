#ifndef HORL_H_   /* Include guard */
#define HORL_H_

int correctAnswers;
int total;
int totalBefore;

char userGuess();
void checkIfHigher();
void checkIfLower();
void checkIfSame();
int checkGuess(char guess);


#endif
