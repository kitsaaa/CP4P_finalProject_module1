#define _CRT_SECURE_NO_WARNINGS

#include "fundamentals.h"

void fundamentals() {
	printf("*** Start of Indexing Strings Demo ***\n");
	char buffer1[80];
	int num_input[10];			// declaration of variables
	int position;

	while (TRUE) {
		printf("Type a string (q - to quit):\n");
		gets(buffer1);
		if (strcmp(buffer1, "q") == 0)		// If user entered 'q', program should move to Measuring strings demo
			break;
		while (TRUE) {
			printf("Type the character position within the string:\n");
			gets(num_input);
			position = atoi(num_input);					// Changes type of the variable from char [] to int and assign it to position
			if (position >= strlen(buffer1)) {			// If user entered position bigger than characters in string:
				printf("Wrong position... type again, please\n");									// <--- this will be displayed
				continue;
			}
			printf("The character found at %d position is \'%c\'\n", position, buffer1[position]);
			break;
		}
	}
	printf("*** End of Indexing Strings Demo***\n");

	printf("*** Start of Measuring Strings Demo***\n");
	char buffer2[80];
	while (TRUE) {
		printf("Type a string (q - to quit):\n");
		gets(buffer2);										// Gets string input from user
		if (strcmp(buffer2, "q") == 0) 
			break;
		printf("The lenght is %lu\n", strlen(buffer2));		// Very easy part, main logic is being produced by only one function
	}
	printf("*** End of Measuring Strings Demo ***\n\n");

	printf("*** Start of Copying Strings Demo ***\n");
	char destination[80];
	char source[80];
	while (TRUE) {
		destination[0] = '\0';								// element 0 in string set to '\0', so string is set to empty
		printf("Destination string is reset to empty\n");
		printf("Type a source string (q - to quit):\n");
		gets(source);
		if (strcmp(source, "q") == 0) 
			break;
		strcpy(destination, source);						// copying string with function strcpy()
		printf("New destination string is \'%s\':\n", destination);		// Displaying output
	}
	printf("*** End of Copying Strings Demo ***\n\n");

}

int main() {
	fundamentals();						// Calling fundamentals() function
	return 0;
}
