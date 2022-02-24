#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int userInput;
  int number;
  int i = 0;
  // random number
  srand(time(0));
  number = 1 + (rand() % 99);

  printf("Guessing Game!\n");
  printf("Guess a number between 1-99: ");

  // number of guesses
  while (i != 10) {
    ++i;
    if (i > 1) // after 2 iteration, print
      printf("\nTry another guess: ");
    scanf("%d", &userInput); // user input
    // checks to see if user input was valid
    if (userInput < 100 && userInput > 0) {
      if (userInput == number) { // checks to see if userinput was random number
        printf("That it! the number was %d", number);
        return 0;
      } else {
        // checks if user input was lower or higher than random number
        if (userInput > number)
          printf("Nope, number is lower");
        else
          printf("Nope, number is higher");
      }
    } else {
      printf("Not valid answer");
      --i; // decr. # of guesses if not valid
    }
  }
  printf("\nSorry, out of guesses\nThe number was %d", number);
}
