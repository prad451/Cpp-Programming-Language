/* Strings
Strings are used for storing text.
A string variable contains a collection of characters surrounded by double quotes
To use strings, you must include an additional header file in the source code, the <string> library:*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a = "C++ Programming Language";
	cout<<a;
	return 0;
}


//string concatenation
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string firstName = "Pradnya";
	string lastName = " Salve";
	string fullName = firstName + lastName; //we can also add space with quotes(" ",' '):firstName+" "+lastName;
	cout<< fullName;
	return 0;
}


//append operation
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string firstName = "Pradnya";
	string lastName = " Salve";
	string fullName = firstName + lastName; //we can also add space with quotes(" ",' '):firstName+" "+lastName;
	cout<< firstName.append(lastName);
	return 0;
}


//adding numbers as a string
#include<iostream>
using namespace std;
#include<string>
int main()
{
	string x = "10";
	string y = "20";
	string z = x + y;
	cout<<z;
	return 0;
}


//string length : can also use size() function
#include<iostream>
using namespace std;
int main()
{
	string str = "CPP is the programming language";
	cout<<str.length();
	return 0;
}


//access strings
#include<iostream>
using namespace std;
int main()
{
	string str = "Hello";
	cout<<str[1];
	return 0;
}


//change string characters
#include <iostream>
#include <string>
using namespace std;
int main() 
{
   string myString = "Hello";
   myString[0] = 'J';
   cout << myString;
   return 0;
}


//user input string
#include<iostream>
#include<tsring>
using namespace std;
int main()
{
	string name;
	cout<<"Type your name : ";
	cin>>name; //cin considers a space(whitespace,tabs)as a terminating character, which means that it can only display a single word (even if you type many words)
	cout<<"Your name is : "<<name;
	return 0;
}


//we can also use the getline() function to read a line of text.
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name;
	cout<<"Enter your name : ";
	getline(cin,name);
	cout<<"Your name is : "<<name;
	return 0;
}


#include<iostream>
#include<string>
int main()
{
	std::string name;
	std::cout<<"Enter your name : ";
	getline(std::cin,name);
	std::cout<<"Your name is : "<<name;
	return 0;
}



/*C++ Math
C++ has many functions that allows you to perform mathematical tasks on numbers.
The max(x,y) function can be used to find the highest value of x and y
The min(x,y) function can be used to find the lowest value of x and y
Other functions, such as sqrt (square root), round (rounds a number) and log (natural logarithm), can be found in the <cmath> header file
*/

#include<iostream>
using namespace std;
#include<cmath>
int main()
{
	int x=5,y=10;
	cout<<max(x,y)<<endl;
	cout<<min(x,y)<<endl;
	cout<<sqrt(81)<<endl;
	cout<<round(10.54)<<endl;
	cout<<log(2);
	return 0;
}


/*
Other Math Functions
A list of other popular Math functions (from the <cmath> library) :
Function	             Description
abs(x)              Returns the absolute value of x
acos(x)	            Returns the arccosine of x
asin(x)	            Returns the arcsine of x
atan(x)	            Returns the arctangent of x
cbrt(x)	            Returns the cube root of x
ceil(x)	            Returns the value of x rounded up to its nearest integer
cos(x)	            Returns the cosine of x
cosh(x)	            Returns the hyperbolic cosine of x
exp(x)	            Returns the value of Ex
expm1(x)	    Returns ex -1
fabs(x)	            Returns the absolute value of a floating x
fdim(x, y)	    Returns the positive difference between x and y
floor(x)	    Returns the value of x rounded down to its nearest integer
hypot(x, y)	    Returns sqrt(x2 +y2) without intermediate overflow or underflow
fma(x, y, z)	    Returns x*y+z without losing precision
fmax(x, y)          Returns the highest value of a floating x and y
fmin(x, y)	    Returns the lowest value of a floating x and y
fmod(x, y)          Returns the floating point remainder of x/y
pow(x, y)           Returns the value of x to the power of y
sin(x)	            Returns the sine of x (x is in radians)
sinh(x)             Returns the hyperbolic sine of a double value
tan(x)              Returns the tangent of an angle
tanh(x)             Returns the hyperbolic tangent of a double value


