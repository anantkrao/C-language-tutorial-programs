/**************************************************************************************
 *Name : Accept lower case character from a - z.                                      *
 *Topic : caret ^, scanset [], format specifier.                                      *
 *Author : Anant kagdelwar.                                                           *
 *Level : For Beginner.                                                               *
 **************************************************************************************/
/*
scanset : it will allow you to specify set of character that scanf will accept.
caret : it negate or invert the scanf whenever specified condition is met.
*/
#include<stdio.h>

int main(void){
    char lower_case[100];
    scanf("%[^A-Z]",lower_case);
    printf("oops!! you have entered any capital letter.");
    return 0;
}