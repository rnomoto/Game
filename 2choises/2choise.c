#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//運命の二択アプリ作ってみよう

int choice(void)
{
	int luck;

	srand(time(0));
	luck = rand() % 2;

	return luck;
}

int main(void)
{
	char buffer[1000];
	char str1[1000], str2[1000];
	int result = 0;

	printf("何と何で迷ってる？");
	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%s %s",str1, str2);

	result = choice();
	//ココ、1度別の変数に代入した方がわかりやすいし、if文ごとにchoice関数を使ってしまうと、2回数字を呼び出してしまう。

	if (result == 0)
		printf("あなたは%sを選ぶといい\n", str1);
	else
		printf("あなたは%sを選ぶといい\n", str2);
	
	return 0;
}




