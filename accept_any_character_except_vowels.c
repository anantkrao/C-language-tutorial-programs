/**************************************************************************************
 *Name : Accept any character except vowels.                                          *
 *Topic : scanset [] conversion specification,input/output.                           *
 *Author : Anant kagdelwar.                                                           *
 *Level : For Beginner.                                                               *
 **************************************************************************************/
/*[] scanset : it allows you to specifies set character or digits that scanf will accept.*/
#include<stdio.h>

int main(void){
    printf("enter only 5 consonant on each line : \n");
    char vowels[10];
    scanf("%[^aeiouAEIOU]",vowels);
    printf("oops!! you have entered any vowel so exited.");
    return 0;
}