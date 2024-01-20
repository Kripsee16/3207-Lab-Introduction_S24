#include <stdlib.h>
#include <time.h>
char randchar(void);
char randchar() {
    // Generate a random number between 0 and 25 (representing 'A' to 'Z' in ASCII)
    int random_num = rand() % 26;

    // Convert the random number to a character and return it
    char random_char = 'A' + random_num;
    return random_char;
}