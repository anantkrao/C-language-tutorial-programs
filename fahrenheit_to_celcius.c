/**************************************************************************************
 *Name : Fahrenheit to celcius temperature converter program.                         *
 *Topic : constant, defining macro and computation, input reading, typecasting.       *   
 *Author : Anant kagdelwar.                                                           *
 *Level : For Beginner.                                                               *
 **************************************************************************************/
#include<stdio.h> /*preprocessor.*/
#define FREEZING_POINT 32.0f /*macros defining and initializing.*/
#define SCALE_FACTOR (5.0f/9.0f) /*typecasting (float)(5.0f).. and generating value of 5/9.*/

int main(void){
    float fahrenheit,celcius; /*variable declaration.*/
    printf("enter degree of temperature in fahrenheit : ");
    scanf("%f",&fahrenheit); /*input reading.*/
    printf("converting.......");
    celcius = (fahrenheit-FREEZING_POINT)*SCALE_FACTOR; /*conversion.*/
    printf("degree of temperature in celcius : %.2f",celcius); /*result.*/
    return 0; /*generating signal to operating system that program is ended.*/
}