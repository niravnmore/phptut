#include <stdio.h>

char strReverse(char *str) {
	int i, j, len = 0; // len is the length of the string
	char strrev[100]; // reversed string

	// Find the length of the string
	for (i = 0; str[i] != '\0'; i++) {
		len++;
	}

	// Reverse the string
	for (i = 0, j = len - 1; i < j; i++, j--) {
		strrev[i] = str[j];
		strrev[j] = str[i];
	}

	return *strrev;
}

int main() {
	
	// Write a C program that takes a string as input and reverses it using a function. 
	// Challenge: Write the program without using built-in string handling functions.

	char str[100], strreved[100];

	printf("Enter a string: ");
	scanf("%s", str);

	// Reverse the string
	strreved = strReverse(str);

	// Print the reversed string
	printf("Reversed string: %s\n", str);

	return 0;
}