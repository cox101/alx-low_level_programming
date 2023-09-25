#include <stdio.h>
#include <stdlib.h>

void set_string(char **s, char *to) {
    if (s == NULL) {
        return;  // Return early if the input pointer to char pointer is NULL.
    }

    // Allocate memory for a new string of the same length as 'to' plus one for the null terminator.
    *s = (char *)malloc(strlen(to) + 1);

    if (*s != NULL) {
        strcpy(*s, to);  // Copy the contents of 'to' into the newly allocated memory.
    }
}

int main() {
    char *str = NULL;  // Declare a char pointer and initialize it to NULL.
    char newStr[] = "Hello, World!";

    set_string(&str, newStr);  // Call set_string to set the value of 'str' to 'newStr'.

    if (str != NULL) {
        printf("String: %s\n", str);  // Print the string if it's not NULL.
        free(str);  // Free the dynamically allocated memory when done.
    }

    return 0;
}

