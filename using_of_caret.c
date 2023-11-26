/**************************************************************************************
 *Name : Using of Caret (^).                                                          *
 *Topic : use of caret ^, string format, input/output.                                *
 *Author : Anant kagdelwar.                                                           *
 *Level : For Beginner.                                                               *
 **************************************************************************************/

/*
caret ^ is used to invert or negate character set.
% : format specifier.
[] : scanset uses with scanf it allows to define a set of characters that scanf will accept.
syntax : scanf("%[^a]",string);
*/
#include<stdio.h>

int main(void){
    char enter_string[100];
    scanf("%[^abc]",enter_string);
    printf("uses of caret ^");
    return 0;
}