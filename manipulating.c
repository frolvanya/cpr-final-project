// MANIPULATING SOURCE
#define _CRT_SECURE_NO_WARNINGS

// define macro BUFFER_SIZE = 80
#define BUFFER_SIZE 80

// Including function prototype
#include "manipulating.h"

void manipulating(void)
{
    // V1
    printf("*** Start of Concatenating strings Demo ***\n");

    // declaring cstring variable with length of BUFFER_SIZE
    char string1[BUFFER_SIZE];

    // declaring cstring variable with length of BUFFER_SIZE
    char string2[BUFFER_SIZE];
    do {
        printf("Type the 1st string (q - to quit): \n");

        // Read string from stdin, stops when BUFFER_SIZE - 1 characters are read or \n is reached and stores to string1
        fgets(string1, BUFFER_SIZE, stdin);

        // Setting the last character in cstring to null delimiter byte
        string1[strlen(string1) - 1] = '\0';

        // if (string1 != "q")
        if (strcmp(string1, "q") != 0) {
            printf("Type the 2nd string:\n");

            // Read string from stdin, stops when BUFFER_SIZE - 1 characters are read or \n is reached and stores to string2
            fgets(string2, BUFFER_SIZE, stdin);

            // Setting the last character in cstring to null delimiter byte
            string2[strlen(string2) - 1] = '\0';

            // appends string2 to string1
            strcat(string1, string2);
            printf("Concatenated string is \'%s\'\n", string1);
        }
        // while (strinq1 != "q")
    } while (strcmp(string1, "q") != 0);
    printf("*** End of Concatenating Strings Demo ***\n\n");

    // V2
    printf("*** Start of Comparing strings Demo ***\n");

    // declaring cstring variable with length of BUFFER_SIZE
    char compare1[BUFFER_SIZE];

    // declaring cstring variable with length of BUFFER_SIZE
    char compare2[BUFFER_SIZE];

    // declaring int variable
    int result;
    do {
        printf("Type the 1st string to compare (q - to quit):\n");

        // Read string from stdin, stops when BUFFER_SIZE - 1 characters are read or \n is reached and stores to compare1
        fgets(compare1, BUFFER_SIZE, stdin);

        // Setting the last character in cstring to null delimiter byte
        compare1[strlen(compare1) - 1] = '\0';

        // if (compare1 != "q")
        if (strcmp(compare1, "q") != 0) {
            printf("Type the 2nd string to compare: \n");

            // Read string from stdin, stops when BUFFER_SIZE - 1 characters are read or \n is reached and stores to string2
            fgets(compare2, BUFFER_SIZE, stdin);

            // Setting the last character in cstring to null delimiter byte
            compare2[strlen(compare2) - 1] = '\0';

            // Comparing two cstrings
            result = strcmp(compare1, compare2);
            if (result < 0)  // first not matching character in compare1
                printf("\'%s\' string is less than \'%s\'\n", compare1, compare2);
            else if (result == 0)  // cstrings are equal
                printf("\'%s\' string is equal to \'%s\'\n", compare1, compare2);
            else  // first not matching character in compare2
                printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2);
        }
        // while (compare1 != "q")
    } while (strcmp(compare1, "q") != 0);
    printf("*** End of Comparing Strings Demo ***\n\n");
}
