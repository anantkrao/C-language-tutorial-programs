/**************************************************************************************
 *Name : Find the roots of a quadratic equation in c++.                               *
 *Topic : user-defined function,pre-defined function (e.g. sqrt),nested if-else.      *
 *Author : Anant kagdelwar.                                                           *
 *Level : For Beginner.                                                               *
 **************************************************************************************/

/*Quadratic equation : it is a second order polynomial equation in a single variable with general
form :
                  ax²+bx+c=0.   //(alt+0178 for exponent 2 symbol.)
                  where : 
                  x is variable.
                  a,b,c are constants with a is not equal to 0 if a = 0 than equation is linear,
                    not quadratic.
                    now cool thing is we have a formula to find the values of x.it's called 
                    the quadratic formula :
                    
                    x = (-b+-sqrt(b²-4ac))/2a.

                    *Discriminant (b²-4ac) : it's the part of the formula that helps us to understand 
                    what kind of solution we will get.
                    like : if b²-4ac > 0 : two real soln.
                    else if b²-4ac == 0 : one real soln special case.
                    else b²-4ac < 0 : two complex conjugate soln (or imaginary).

                    *plus-minus : we do compuation roots first with + and than with -.

*/
#include<iostream>
#include<cmath>

using namespace std;

//declaration and definition of user_defined function "compute_discriminant" having parameters.
//parameters : placeholder for arguements or actual values passes to funstion.
double compute_discriminant(double a,double b,double c){
    //a,b,c are parameters here.
    double result = ((b*b)-(4*a*c));
    return result;
}

int main(){

 //coefficient of quadratic equation (a,b,c).
 double a,b,c;

 //prompt user to enter coeffcient using cout and cin.
 cout<<"enter coefficient a :";
 cin>>a;
 cout<<"enter coefficient b :";
 cin>>b;
 cout<<"enter coefficient c :";
 cin>>c;
 
 double discriminant = compute_discriminant(a,b,c); //function call, here a,b,c are arguemensts.
 //arguements : they are actual values which gets pass into the function.
//nested if-else structure.
 if(discriminant>0)/*two real soln*/
 {
    double root1 = (-b + sqrt(discriminant))/(2*a);
    double root2 = (-b - sqrt(discriminant))/(2*a);
    cout<<"Root 1 : "<<root1<<endl;
    cout<<"Root 2 : "<<root2<<endl;
 }
 else if(discriminant=0)/*one real soln*/
 {
    double root = -b/2*a;
    cout<<"Root : "<<root<<endl;
 }
 else /*two complex (or imaginary) soln*/
 {
    double real_part = (-b)/(2*a);
    double imaginary_part = (sqrt(-discriminant))/(2*a);
    cout<<"Root 1 "<<real_part<<"+"<<imaginary_part<<"i"<<endl;
    cout<<"Root 2 "<<real_part<<"-"<<imaginary_part<<"i"<<endl; 
 }
 return 0;
}
