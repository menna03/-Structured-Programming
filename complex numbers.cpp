
#include <iostream>
using namespace std;
struct complex{
    double real1;
    double real2;
    double imaginary1 ;
    double imaginary2 ;
    char operation ;
};
int add(complex& c )
{
    float realsum,imaginarysum;
    realsum=c.real1+c.real2;
    imaginarysum=c.imaginary1+c.imaginary2;
    cout<<realsum<<"+"<<imaginarysum<<'i';
}
int subtract(complex& c)
{
    float realsub,imaginarysub;
    realsub=c.real1-c.real2;
    imaginarysub=c.imaginary1-c.imaginary2;
    cout<<realsub<<"+"<<imaginarysub<<'i';
}
int multiply(complex& c)
{    float realmul,imaginarymul;
        realmul=(c.real1*c.real2)+((c.imaginary1*c.imaginary2)*(-1));

    imaginarymul=+(c.real1 * c.imaginary2)+(c.real2*c.imaginary1);
    cout<<realmul<<"+"<<imaginarymul<<'i';
}
int main()
{
    complex c ;
    char i;
    cout<<" pleas enter first complex numbers in the form x + y i with your desired operations :\n" ;
    cin>> c.real1>>c.imaginary1>>i;
    cout<<"operation";
    cin>>c.operation;
    cout<<" pleas enter second complex numbers in the form x + y i with your desired operations :\n" ;
    cin>>c.real2>>c.imaginary2>>i;
if(c.operation=='+')
{
    add( c );
}
else if ( c.operation=='-')
{
    subtract(c);
}
else if (c.operation=='x')
{
    multiply(c);
}
else
{
    cout<<"no existing operation \n ";
}
}
