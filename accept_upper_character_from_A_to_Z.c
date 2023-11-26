/**************************************************************************************
 *Name : Accept only upper character.                                                 *
 *Topic : Scanset [ ], caret ^,format specifier %.                                    *
 *Author : Anant kagdelwar.                                                           *
 *Level : For Beginner.                                                               *
 **************************************************************************************/
#include<stdio.h>
int main(void){
    char upper_case[100];
    scanf("%[^a-z]",upper_case);
    printf("oops!! you have entered any lower case character.");
    return 0;
}