/*C++ Comments
>>can be used to explain c++ code and make it more readable.
>>can also be used to prevent execution while testing alternative code.
>>comments can be single-lined and multi-lined.

1.Single-line Comment:
>>starts with two forward slashes(//) 
>>use for short comments*/

//This is a comment
#include<iostream>
int main()
{
	cout<<"Hello world";
}


/*2.Multi-line Comment: 
>>use for longer comments
>>starts with /* and ends with */



/*C++ Variables
>>name of memory location where we store value
>>variables are case sensitive
>>are containers for storing data values.
>>In C++, there are different types of variables (defined with different keywords), for example:
  int - stores integers (whole numbers), without decimals, such as 123 or -123
  double - stores floating point numbers, with decimals, such as 19.99 or -19.99
  char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
  string - stores text, such as "Hello World". String values are surrounded by double quotes
  bool - stores values with two states: true or false
<<General rules for naming variables are:
  Names can contain letters, digits and underscores
  Names must begin with a letter or an underscore (_)
  Names are case sensitive (myVar and myvar are different variables)
  Names cannot contain whitespaces or special characters like !, #, %, etc.
  Reserved words (like C++ keywords, such as int) cannot be used as names

>>Declaring (Creating) Variables
>>To create a variable, specify the type and assign it a value:
>>Syntax
data_type variable_name = value;*/

#include<iostream>
using namespace std;
int main()
{
	int num = 9;
    cout<<num;
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
	string mystr;
	mystr = "Pradnya";
	cout<<mystr;
	return 0;
}

#include<iostream>
int main()
{
	int num = 20;
	num = 15;
	std::cout<<num;
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int num = 1700;
	string mystr = "Priti";
	double dble = 50.50;
	cout<<"I had "<<num<<" rupees."<<"I gave "<<dble<<" rupees to "<<mystr;
	return 0;
	
}
//declaring multiple variables : To declare more than one variable of the same type, use a comma-separated list:
#include<iostream>
int main()
{
	int x = 15,y = 10,z = 30;
	std::cout<<x+y+z;
	return 0;
}

//assigning one value to multiple variables : You can also assign the same value to multiple variables in one line: 
#include<iostream>
using namespace std;
int main()
{
   int a,b,c;
   a = b = c = 55;
   cout<<a + b + c;
   return 0;
}*/

/*C++ Identifiers
>>identifiers refers a name used to identify a variable,function,class,module or any other user-defined item.
>>keyword cannot used as a identifier name.
>>All C++ variables must be identified with unique names.
>>These unique names are called identifiers.
>>Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume)
>>eg,int minuterPerHour = 60;

C++ Constants
>>means fixed value which does not change in run time.
>>constant means unchangeable and read only.
>>const keyword is used to declare a constant.
>>constant can be of any data type.
>>constants are also called literals.
>>we can change value of constant using pointer.*/

#include<iostream>
int main()
{
	const int mynum = 80;
	mynum = 70;
	std::cout<<mynum;
	return 0;
}    //will give error because constant value caanot be change.

#include<iostream>
using namespace std;
int main()
{
	const int a = 90;
	const float b = 1.4;
	const string c = "Salve";
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c;
	return 0;
}

/*User input
>>cin is a predefined variable that reads data from the keyboard with the extraction operator (>>).*/
#include<iostream>
using namespace std;
int main()
{
	int x,y,z;
	cout<<"Enter first number : "<<endl;
	cin>>x;
	cout<<"Enter second number : "<<endl;
	cin>>y;
	z = x + y;
	cout<<"The result is : "<<z;
	return 0;
	
}










