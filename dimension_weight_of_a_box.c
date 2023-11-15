/**************************************************************************************
 *Name : Dimension weight of a box.                                                   *
 *Topic : variable declaration & initialization,computation,printf to display values. *   
 *Author : Anant kagdelwar.                                                           *
 *Level : For Beginner.                                                               *
 **************************************************************************************/
#include<stdio.h> //preprocessor.

int main(void){

    //variable declaration and initialization.
    float height=8,width=10,length=12;
    //computation between variables.
    float volume = height*length*width;
    float weight = (volume+165)/166;
    //printing values with printf function.
    printf("dimension : %.2f x %.2f x %.2f\n",height,length,width);
    printf("volume : %.2f\n",volume);
    printf("dimension weight : %.2f pounds\n",weight);
    //return status of program to operating system of termination.
    return 0;

}