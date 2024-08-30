#include <unistd.h>

int main(void)
{
	char buffer[1000];
	ssize_t bytesRead;

	write(1, "Please write a word you want to practice.\n", 43);
	write(1, "-> ", 4);
	bytesRead = read(0, buffer, sizeof(buffer) - 1);
	
	return 0;
}

