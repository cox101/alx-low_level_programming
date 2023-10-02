#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

int countWords(char *str) {
    int count = 0;
    int isWord = 0;

    while (*str) {
        if (*str == ' ') {
            isWord = 0;
        } else if (!isWord) {
            isWord = 1;
            count++;
        }
        str++;
    }

    return count;
}
char **strtow(char *str) {
    if (str == NULL || *str == '\0') {
        return NULL;
    }

    int numWords = countWords(str);
    char **wordArray = (char **)malloc((numWords + 1) * sizeof(char *));
    if (wordArray == NULL) {
        return NULL; 
    }

    int i = 0;
    char *token = strtok(str, " ");

    while (token != NULL) {
        wordArray[i] = strdup(token);
        if (wordArray[i] == NULL) {
          /*Memory allocation failed, free previously allocated memory and return NULL*/
            for (int j = 0; j < i; j++) {
                free(wordArray[j]);
            }
            free(wordArray);
            return NULL;
        }
        i++;
        token = strtok(NULL, " ");
    }

    wordArray[i] = NULL; 
    return wordArray;
}
void freeWords(char **wordArray) {
    if (wordArray == NULL) {
        return;
    }

    for (int i = 0; wordArray[i] != NULL; i++) {
        free(wordArray[i]);
    }

    free(wordArray);
}

int main() {
    char *input = "This is a test";
    char **words = strtow(input);

    if (words != NULL) {
        for (int i = 0; words[i] != NULL; i++) {
            printf("%s\n", words[i]);
        }
        freeWords(words);
    } else {
        printf("Failed to split the string.\n");
    }

    return 0;
}
