#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	//Random Seed: Функцията за време в C, когато подаде указател NULL като аргумент, връща текущото календарно време като обект time_t (тип, представящ времето в секунди). Той ефективно ви дава timestamp за текущото време.
	srand(time(NULL));
	int magicNumber = rand() % 17;
	int maxTries = 10;

	printf("Welcome to the Guess the Magic Number (0 - 16) game!\n");
	printf("Hint: Use Mental Binary Search :) \n");
	for (int tryCount = 1; tryCount <= maxTries; tryCount++)
	{
		int guess;
		printf("Guess: ");
		scanf_s("%d", &guess);
		if (guess == magicNumber) {
			printf("Guessed!\n");
			break;
		}
		else {

			if (guess < magicNumber) {
				printf("Too low. ");
			}
			else {
				printf("Too high. ");
			}
			int remainingAttempts = maxTries - tryCount;
			printf("Try again! %d attempts remaining.\n", remainingAttempts);
		}
	}

	printf("Game over. The magic number was %d.\n", magicNumber);

	return 0;
}
