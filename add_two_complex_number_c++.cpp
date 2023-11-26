/**************************************************************************************
 *Name : C++ program that performs the addition of two complex numbers                *
         using a structure and a function.                                            *
 *Topic : Structure, Function.                                                        *
 *Author : Anant kagdelwar.                                                           *
 *Level : For Beginner.                                                               *
 **************************************************************************************/
/*
Complex-number : it contains two part 1 is real and other is imaginary.
*/
#include<iostream>

using namespace std;

struct Complex
{
    double real;
    double imag;
};

Complex addcomplex(const Complex num1,Complex num2){
    Complex result;
    result.real = num1.real+num2.real;
    result.imag = num1.imag+num2.imag;
    return result;
}
int main(){
    Complex complex1,complex2;
    cout<<"enter real and imaginary part for complex number 1"<<endl;
    cout<<"Real : ";
    cin>>complex1.real;
    cout<<"Imaginary : ";
    cin>>complex1.imag;
    
    cout<<"enter real and imaginary part for complex number 2"<<endl;
    cout<<"Real : ";
    cin>>complex2.real;
    cout<<"Imaginary : ";
    cin>>complex2.imag;
    
    
    Complex sum = addcomplex(complex1,complex2);
    cout<<"sum of complex numbers : "<<sum.real<<"+"<<sum.imag<<"i"<<endl;
    return 0;
}
