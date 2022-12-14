// FUNDAMENTALS MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS

// define macro BUFFER_SIZE = 80
#define BUFFER_SIZE 80

// define macro NUM_INPUT_SIZE = 10
#define NUM_INPUT_SIZE 10

// Including function prototype
#include "fundamentals.h"

void fundamentals()
{
    // V1
    printf("*** Start of Indexing Strings Demo ***\n");

    // declaring cstring variable with length of BUFFER_SIZE
    char buffer1[BUFFER_SIZE];

    // declaring cstring variable with length of NUM_INPUT_SIZE
    char numInput[NUM_INPUT_SIZE];

    // declaring unsigned int variable
    size_t position;
    do {
        printf("Type not empty string (q - to quit):\n");

        // Read string from stdin, stops when BUFFER_SIZE - 1 characters are read or \n is reached and stores to buffer1
        fgets(buffer1, BUFFER_SIZE, stdin);

        // Setting the last character in cstring to null delimiter byte
        buffer1[strlen(buffer1) - 1] = '\0';

        // if (buffer1 != "q")
        if (strcmp(buffer1, "q") != 0) {
            printf("Type the character position within the string:\n");

            // Read string from stdin, stops when BUFFER_SIZE - 1 characters are read or \n is reached and stores to numInput
            fgets(numInput, NUM_INPUT_SIZE, stdin);

            // Setting the last character in cstring to null delimiter byte
            numInput[strlen(numInput) - 1] = '\0';

            // string to int convertation
            position = atoi(numInput);
            if (position >= strlen(buffer1)) {
                // position = length of buffer1 string - 1
                position = strlen(buffer1) - 1;
                printf("Too big... Position reduced to max. available\n");
            }

            // display int position (casting from size_t to int), character (at postion index)
            printf("The character found at %d position is \'%c\'\n", (int)position,
                   buffer1[position]);
        }
        // while (buffer1 != "q")
    } while (strcmp(buffer1, "q") != 0);
    printf("*** End of Indexing Strings Demo ***\n\n");

    // V2
    printf("*** Start of Measuring Strings Demo ***\n");

    // declaring cstring variable with length of BUFFER_SIZE
    char buffer2[BUFFER_SIZE];
    do {
        printf("Type a string (q - to quit):\n");

        // Read string from stdin, stops when BUFFER_SIZE - 1 characters are read or \n is reached and stores to buffer2
        fgets(buffer2, BUFFER_SIZE, stdin);

        // Setting the last character in cstring to null delimiter byte
        buffer2[strlen(buffer2) - 1] = '\0';

        // if (buffer2 != "q")
        if (strcmp(buffer2, "q") != 0) {
            // display cstring and it length casted to int
            printf("The length of \'%s\' is %d characters\n", buffer2, (int)strlen(buffer2));
        }
        // while (buffer2 != "q")
    } while (strcmp(buffer2, "q") != 0);
    printf("*** End of Measuring Strings Demo ***\n\n");

    // V3
    printf("*** Start of Copying Strings Demo ***\n");

    // declaring cstring variable with length of BUFFER_SIZE
    char destination[BUFFER_SIZE];

    // declaring cstring variable with length of BUFFER_SIZE
    char source[BUFFER_SIZE];
    do {
        // Setting the first character in cstring to null delimiter byte
        destination[0] = '\0';

        printf("Destination string is reset to empty\n");
        printf("Type the source string (q - to quit):\n");

        // Read string from stdin, stops when BUFFER_SIZE - 1 characters are read or \n is reached and stores to source
        fgets(source, BUFFER_SIZE, stdin);

        // Setting the last character in cstring to null delimiter byte
        source[strlen(source) - 1] = '\0';

        // if (buffer1 != "q")
        if (strcmp(source, "q") != 0) {
            // Copying source cstring content to destination
            strcpy(destination, source);

            // Display destination
            printf("New destination string is \'%s\'\n", destination);
        }
        // while (source != "q")
    } while (strcmp(source, "q") != 0);
    printf("*** End of Copying Strings Demo ***\n\n");
}
