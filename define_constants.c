/**************************************************************************************
 *Name : Dimension weight of a box part 2.                                            *
 *Topic : Reading Input via scanf function, Constants, Defining macros                *   
 *Author : Anant kagdelwar.                                                           *
 *Level : For Beginner.                                                               *
 **************************************************************************************/
#include<stdio.h> //preprocessor

/*we can define constant in two ways 1st with 'const' keyword and 2nd by defining 'macros'*/

#define INCHES_PER_POUND 166 /*macro : when the program is compiled the preprocessor replaces each,
 macro by value it represent*/
/*macro starts with #(directive) and 'define' keyword and it doesn't need semicolon)*/

int main(void){
    float height,width,length,volume,weight; //declaration
    printf("enter height : ");
    scanf("%f",&height);    /*we uses scanf function to read input from user in c language*/
    printf("enter width : ");
    scanf("%f",&width);    
    printf("enter length : ");
    scanf("%f",&length);    
    volume = height*width*length;
    weight =  (volume + (INCHES_PER_POUND-1))/INCHES_PER_POUND;
    printf("dimension : %.2fx%.2fx%.2f\n",height,width,length);
    printf("volume : %.2f\n",volume);
    printf("dimension weight : %.2f\n",weight); 
    return 0;
}