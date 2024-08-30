
//数字当てゲーム

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void playGame(void)
{
	int target;
	int guess;
	int attempts;
	char buffer[10];

	target = 0;
	guess = 0;
	attempts = 0;

	srand(time(0));
	//乱数を毎回変えるために秒単位でシード値を設定する。  
	target = rand() % 100 + 1;

	printf("Welcome!\n");
	printf("Guess the number from 1 to 100.\n");

	do
	{
		printf("What is your prediction?");
		fgets(buffer, sizeof(buffer), stdin);
		//fgetsは入力を読み取る関数。stdinは標準入力を指す。
		sscanf(buffer, "%d", &guess);
		//bufferに含まれる文字列を整数値%dとして解析し、guessに格納される。

		attempts++;

		if(guess > target)
			printf("It's too big. Choose a smaller one.\n");
		else if(guess < target)
			printf("It's too small. Choose a bigger one.\n");
		else
			printf("Correct! The number of time you predicted is %d.\n", attempts);
	} while (guess != target);
}

int main(void)
{
	char playAgain;

	do{
		playGame();

		printf("Play again? (y/n): ");
		playAgain = getchar();
		//getcharはユーザーの入力から1文字読み取る関数。
		getchar();
		//入力された1文字の後の改行を読み飛ばすためにやってる。
	} while(playAgain == 'y' || playAgain == 'Y');

	printf("See you!\n");

	return(0);
}

