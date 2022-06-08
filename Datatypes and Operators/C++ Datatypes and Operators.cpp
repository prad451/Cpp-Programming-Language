//C++ Data types
/* Data types defines type of value means which type of value you will store.
C++ has three types of data types :
1.Basic datatype :
int      4 bytes     -32768 to +32767(Stores whole numbers, without decimals)
char     1 byte      -128 to +127(Stores a single character/letter/number, or ASCII values.The character must be surrounded by single quotes, like 'A' or 'c')
float    4 bytes     -3.4E**e**-38 to 3.4E**38(Stores fractional numbers, containing one or more decimals. Sufficient for storing 7 decimal digits)
double   8 bytes      (Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits)
bool     1 byte       true to false(true=1,false=0)
void     No Size

2.Derived datatype :
Array
Function
Pointer 
Refernce

3.User-defined datatype :
Structure
Union
Class
Enumeration
*/


#include<iostream>
using namespace std;
int main()
{
	int num1 = 50;
	float num2 = 1.25;
	double num3 = 9.1038459;
	string str = "I am learning C++";
	char character = 'P';
	bool boolean = true;
	cout<<num1<<endl;
	cout<<num2<<endl;
	cout<<num3<<endl;
	cout<<str<<endl;
	cout<<character<<endl;
	cout<<boolean;
	return 0;
}



/*float vs. double
The precision of a floating point value indicates how many digits the value can have after the decimal point. The precision 
of float is only six or seven decimal digits,while double variables have a precision of about 15 digits. 
A floating point number can also be a scientific number with an "e" to indicate the power of 10*/


#include<iostream>
using namespace std;
int main()
{
	float f1 = 35e3;
    double d1 = 12E4;
    cout << f1<<endl;
    cout << d1;
    return 0;
}


#include<iostream>
using namespace std;
int main()
{
	char a = 65,b = 66,c = 67;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c;
	return 0;
}




/*C++ Operators
Operators is a symbol that is used to perform mathematical and logical task.
used to perform operations on variables and values.
>>Unary Operator : ++,--
>>Binary Operator
1.Arithmetic Operator(+,-,*,%,/)
2.Comparison/Relational Operator(>,<,>=,<=,==,!=)
3.Logical Operators(&&,||,!)
4.Assignment Operator(=,+=,-=,*=,!=,%=,&=,<<=,>>=,|=,^=) 
5.Biwise Operator(<< >>,^,|,~)
>>Ternary Operator(?:)*/
*/


//Arithmetic Operator
#include<iostream>
using namespace std;
int main()
{
	int x,y,z;
	cout<<"Enter two numbers : "<<endl;
	cin>>x>>y;
	z = x + y;    //addition
	cout<<"Addition : "<<z<<endl;
	z = x - y;    //substraction
	cout<<"Substraction : "<<z<<endl;
	z = x / y;    //division
	cout<<"Division : "<<z<<endl;
	z = x * y;    //multiplication
	cout<<"Multiplication : "<<z<<endl;
	z = x % y;   //modulus
	cout<<"Modulus : "<<z<<endl;
	++x;    //increment
	cout<<x<<endl;
	--y;  //decrement
	cout<<y;
	return 0;
}




//Comparison Operator
#include<iostream>
using namespace std;
int main()
{
	int a = 20, b = 9;
	cout<<(a==b)<<endl;
	cout<<(a>b)<<endl;
	cout<<(a<b)<<endl;
	cout<<(a<=b)<<endl;
	cout<<(a>=b)<<endl;
	cout<<(a!=b);
	return 0;
}




//Logical Operator
#include<iostream>
using namespace std;
int main()
{
	int x = 55, y = 45;
	cout<<(x>y && x<y)<<endl;  //logical and : returns true if both statements are true
	cout<<(x>y || x!=y)<<endl;  //logical or : returns true if one of the statement is true
	cout<<!(x>y && x<y);  //reverse result,returns false if result is true
}




//Assignment Operator
#include<iostream>
int main()
{
	int x = 10, y =18,z = 20,s = 45,p = 5,q = 10;
	x+=12;
	std::cout<<"Add : "<<x;
	y-=15;
	std::cout<<"\nSubstract : "<<y;
	z*=12;
	std::cout<<"\nMultiply : "<<z;
	s/=45;
	std::cout<<"\nDivide : "<<s;
	p<<=3; //left shift(x<<y = x*2^y)
	std::cout<<"\nP-left : "<<p;
	q>>=3;  //right shift(x>>y = x/2^y)
	std::cout<<"\nP-right : "<<q;
	return 0;
}




//Bitwise Operator
/*The & (bitwise AND) in C or C++ takes two numbers as operands and does AND on every bit of two numbers. The result of AND is 1 only if both bits are 1.  
The | (bitwise OR) in C or C++ takes two numbers as operands and does OR on every bit of two numbers. The result of OR is 1 if any of the two bits is 1. 
The ^ (bitwise XOR) in C or C++ takes two numbers as operands and does XOR on every bit of two numbers. The result of XOR is 1 if the two bits are different. 
The << (left shift) in C or C++ takes two numbers, left shifts the bits of the first operand, the second operand decides the number of places to shift. 
The >> (right shift) in C or C++ takes two numbers, right shifts the bits of the first operand, the second operand decides the number of places to shift. 
The ~ (bitwise NOT) in C or C++ takes one number and inverts all bits of it. 
Should not be used for negative numbers*/

#include<iostream>
using namespace std;
int main()
{
	int a=5,b=9;
	cout<<(a&b)<<endl;
	cout<<(a|b)<<endl;
	cout<<(a^b)<<endl;
	cout<<(b<<1)<<endl;
	cout<<(b>>1)<<endl;
	cout<<(~a);
	return 0;
}




//Ternary Operator
/*
A ternary operator evaluates the test condition and executes a block of code based on the result of the condition.
Syntax : condition ? expression1 : expression2;
The ternary operator takes 3 operands (condition, expression1 and expression2). Hence, the name is ternary operator.*/

#include <iostream>
using namespace std;
 
int main() {
 
    int x = 10 ;
    (x & 1) ? cout<<"Odd" : cout<< "Even" ;
       
    return 0;
}
 


