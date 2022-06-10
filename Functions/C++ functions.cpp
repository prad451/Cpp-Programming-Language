/*C++ Functions
A function is a block of code which only runs when it is called.
We can pass data,known as parameters,into a function.
Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.
Types : 1.Pre-defined[main()fuction]
        2.User-defined
Syntax :
void myFunction()
{
  //code to be executed
}

Function Declaration and Definition
A C++ function consist of two parts:
Declaration: the return type, the name of the function, and parameters (if any)
Definition: the body of the function 
*/


#include<iostream>
using namespace std;
void myFunction()  //creating function 
{
	cout<<"Code is executed";
}
int main()
{
	myFunction();  //calling function 
	return 0;
}

/*Note : function can be called many times
If a user-defined function, such as myFunction() is declared after the main() function, an error will occur*/



#include<iostream>
void myFunction()
{
	std::cout<<"Code is executed"<<"\n";
}
int main()
{
	myFunction();
	myFunction();
	myFunction();
	myFunction();
	myFunction();
	return 0;
}




/*C++ Function Parameters
Information can be passed to functions as a parameter. Parameters act as variables inside the function.
Parameters are specified after the function name, inside the parentheses.
We can add as many parameters as you want,just separate them with a comma:
Syntax :
void functionName(parameter1, parameter2, parameter3) {
  // code to be executed
}
When a parameter is passed to the function, it is called an argument.
So, from the example above: fname is a parameter, while Pradnya,Prashant,Sunny... are arguments.*/



#include<iostream>
using namespace std;
void myFunction(string fname)
{
	cout<<fname<<" "<<"Salve"<<"\n";
}
int main()
{
	myFunction("Pradnya");
	myFunction("Prashant");
	myFunction("Sunny");
	myFunction("Sunita");
	myFunction("Santosh");
	return 0;
}




/*C++ Default Parameters
We can also use a default parameter value,by using the equals sign (=).
If we call the function without an argument, it uses the default value (eg.."India")*/

#include<iostream>
using namespace std;
void myFunction( string country = "India")
{
	cout<<country<<"\n";
}
int main()
{
	myFunction();
	myFunction("Nepal");
	myFunction("China");
	myFunction("Pakistan");
	return 0;	
}

/*Note :
A parameter with a default value,is often known as an "optional parameter". 
From the example above,country is an optional parameter and "India" is the default value*/




//Multiple parameters : we can add as many parameters as we want
#include<iostream>
#include<string>
using namespace std;
void myFunction(string fname,string lname,int age,int byear)
{
	cout<<fname<<"\t\t"<<lname<<"\t\t"<<age<<"\t\t"<<byear<<"\n";
}
int main()
{
	cout<<"First Name"<<"\t"<<"Last Name"<<"\t"<<"Age"<<"\t"<<"Birthday-Year"<<"\n";
	myFunction("Pradnya","Salve",22,2000);
	myFunction("Poonam","Wagh",20,2002);
	myFunction("Rohini","More",21,2001);
	myFunction("Prajkta","Patare",22,2000);
	myFunction("Sakshi","Naik",21,2001);
	myFunction("Sanchu","Naik",20,2002);
	myFunction("Pragati","Bhosale",24,1998);
	myFunction("Rutika","Tupe",23,1999);
	myFunction("Manisha","Kharat",26,1995);
	myFunction("Aarya","Tupe",14,2008);
	return 0;
}




/*C++ Return Keyword
The void keyword, used in the previous examples,indicates that the function should not return a value. 
If you want the function to return a value, you can use a data type (such as int, string, etc.) instead of void, 
and use the return keyword inside the function*/

#include<iostream>
using namespace std;
int myFun(int x,int y)
{
	return x + y;
}
int main()
{
	cout<<myFun(12,15);
	return 0;
}



#include<iostream>
using namespace std;
int myFunc(int x,int y)
{
	return x + y;
}
int main()
{
    int z = myFunc(56,6);
	cout<<z;
	return 0;	
}




/*C++ Pass by Reference
We can also pass a reference to the function*/
#include<iostream>
using namespace std;
void swapNums(int &x,int &y)
{
	int z = x;
	x = y;
	y = z;
}
int main()
{
	int firstNum = 10;
	int secondNum = 20;
	
	cout<<"Before Swap"<<"\n";
	cout<<firstNum<<" "<<secondNum<<"\n";
	swapNums(firstNum,secondNum);
	cout<<"After Swap"<<"\n";
	cout<<firstNum<<" "<<secondNum;
	return 0;
}




//Pass array to a function
#include<iostream>
using namespace std;
void myFunction(int myArr[5])
{
	for(int i=0;i<5;i++)
	{
		cout<<myArr[i]<<" ";
	}
}
int main()
{
	int myArr[5] = {10,20,30,40,50};
	myFunction(myArr);
	return 0;
}




/*C++ Function Overloading
With function overloading,multiple functions can have same name with different parameters*/

#include<iostream>
using namespace std;
int myFun1(int x,int y)
{
	return x + y;
}
double myFun1(double x,double y)
{
	return x + y;
}
int main()
{
	int addNum1 = myFun1(9,8);
	double addNum2 = myFun1(0.9,0.8);
	cout<<addNum1<<"\n";
	cout<<addNum2;
	return 0;
}




/*C++ Recursion
Recursion is the technique of making a function call itself.This technique provides a way to break complicated problems down into simple 
problems which are easier to solve.
Recursion Example : Adding two numbers together is easy to do,but adding a range of numbers is more complicated. 
In the following example,recursion is used to add a range of numbers together by breaking it down into the simple task of adding two numbers*/

#include<iostream>
using namespace std;
int sum(int k)
{
	if(k>0)
	{
		return k+sum(k-1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	int result = sum(10);
	cout<<result<<"\n";
	return 0;
}




#include<iostream>
using namespace std;
int sum(int k)
{
	if(k>0)
	{
		return k + sum(k-1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	int result = sum(5);
	cout<<result;
	return 0;
}

