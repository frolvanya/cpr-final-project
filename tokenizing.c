// TOKENIZING SOURCE
#define _CRT_SECURE_NO_WARNINGS

// define macro BUFFER_SIZE = 300
#define BUFFER_SIZE 300

// Including function prototype
#include "tokenizing.h"

void tokenizing(void)
{
    // V1
    printf("*** Start of Tokenizing Words Demo ***\n");

    // declaring cstring variable with length of BUFFER_SIZE
    char words[BUFFER_SIZE];

    // declaring pointer to cstring and setting to safe state
    char* nextWord = NULL;

    // declaring int variable
    int wordsCounter;
    do {
        printf("Type a few words separated by space (q - to quit): \n");

        // Read string from stdin, stops when BUFFER_SIZE - 1 characters are read or \n is reached and stores to words
        fgets(words, BUFFER_SIZE, stdin);

        // Setting the last character in cstring to null delimiter byte
        words[strlen(words) - 1] = '\0';

        // if (words != "q")
        if (strcmp(words, "q") != 0) {
            // Get first token (split words by <space> and get first element)
            nextWord = strtok(words, " ");
            wordsCounter = 1;

            // while (nextWord != NULL)
            while (nextWord) {
                // postfix increment, print wordsCounter and nextWord and then increment wordsCounter
                printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord);

                // NULL as first argument means to continue tokenizing the string passed before
                nextWord = strtok(NULL, " ");
            }
        }
        // while (words != "q")
    } while (strcmp(words, "q") != 0);
    printf("*** End of Tokenizing Words Demo ***\n\n");

    // V2
    printf("*** Start of Tokenizing Phrases Demo ***\n");

    // declaring cstring variable with length of BUFFER_SIZE
    char phrases[BUFFER_SIZE];

    // declaring pointer to cstring and setting to safe state
    char* nextPhrase = NULL;

    // declaring int variable
    int phrasesCounter;
    do {
        printf("Type a few phrases separated by comma (q - to quit):\n");

        // Read string from stdin, stops when BUFFER_SIZE - 1 characters are read or \n is reached and stores to phrases
        fgets(phrases, BUFFER_SIZE, stdin);

        // Setting the last character in cstring to null delimiter byte
        phrases[strlen(phrases) - 1] = '\0';

        // if (phrases != "q")
        if (strcmp(phrases, "q") != 0) {
            // Get first token (split words by commas and get first element)
            nextPhrase = strtok(phrases, ",");
            phrasesCounter = 1;

            // while (nextPhrase != NULL)
            while (nextPhrase) {
                // postfix increment, print wordsCounter and nextPhrase and then increment wordsCounter
                printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase);

                // NULL as first argument means to continue tokenizing the string passed before
                nextPhrase = strtok(NULL, ",");
            }
        }
        // while (phrases != "q")
    } while (strcmp(phrases, "q") != 0);
    printf("*** End of Tokenizing Phrases Demo ***\n\n");

    // V3
    printf("*** Start of Tokenizing Sentences Demo ***\n");

    // declaring cstring variable with length of BUFFER_SIZE
    char sentences[BUFFER_SIZE];

    // setting pointer occurrence to NULL (safe state)
    char* nextSentence = NULL;

    // declaring int variable
    int sentencesCounter;
    do {
        printf("Type a few sentences separated by dot (q - to quit):\n");

        // Read string from stdin, stops when BUFFER_SIZE - 1 characters are read or \n is reached and stores to sentences
        fgets(sentences, BUFFER_SIZE, stdin);

        // Setting the last character in cstring to null delimiter byte
        sentences[strlen(sentences) - 1] = '\0';

        // if (words != "q")
        if (strcmp(sentences, "q") != 0) {
            // Get first token (split words by dot and get first element)
            nextSentence = strtok(sentences, ".");
            sentencesCounter = 1;

            // while (nextWord != NULL)
            while (nextSentence) {
                // postfix increment, print sentencesCounter and nextSentence and then increment sentencesCounter
                printf("Senetnce #%d is \'%s\'\n", sentencesCounter++, nextSentence);

                // NULL as first argument means to continue tokenizing the string passed before
                nextSentence = strtok(NULL, ".");
            }
        }
        // while (sentences != "q")
    } while (strcmp(sentences, "q") != 0);
    printf("*** End of Tokenizing Sentences Demo ***\n\n");
}
