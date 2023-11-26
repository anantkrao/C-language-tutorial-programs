/**************************************************************************************
 *Name : Print only specified digits.                                      *
 *Topic : scanset[], caret^, format sepicifier %.                                     *
 *Author : Anant kagdelwar.                                                           *
 *Level : For Beginner.                                                               *
 **************************************************************************************/
#include <stdio.h>

int main() {
    char digits[20]; // Assuming a maximum of 20 digits

    // Using the scanset to read only digits
    // The set [0-9] means any digit from 0 to 9
    scanf("%19[0-4]", digits);

    // Printing the digits
    printf("Digits: %s\n", digits);

    return 0;
}
