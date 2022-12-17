//guess right number in maximum 9 attempts otherwise you'll fail
//author : md asher

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void guess(int N)
{
	int number, guess, numberofguess = 0;

	
	number = rand() % N; //random numer generate karne ke liye function

	printf("Guess a number between"
		" 1 and %d\n",
		N);

	do {

		if (numberofguess > 9) {
			printf("\nYou Loose!\n");
			break;
		}

		scanf("%d", &guess);

		if (guess > number)

		{
			printf("Lower number "
				"please!\n");
			numberofguess++;
		}

		else if (number > guess)

		{
			printf("Higher number"
				" please!\n");
			numberofguess++;
		}

		else
			printf("You guessed the"
				" number in %d "
				"attempts!\n",
				numberofguess);

	} while (guess != number);
}

int main()
{
	int N = 50;  
	guess(N);

	return 0;
}
