/*C++ Constructors
C++ Constructor is a special method which automatically called when object of a class is created
To create a constructor we should use same name as a class name followed by paranthesis().
Syntax : class A{
             A(){}
	    }
Types : 1.Default  2.Parameterized  3.Copy*/

#include<iostream>
using namespace std;
class MyClass{
	public:
		MyClass()
		{
			cout<<"Hello World!!";
		}
};
int main()
 {
 	MyClass MyObj;
 	return 0;
 }
 
//Note: The constructor has the same name as the class, it is always public, and it does not have any return value.


//Constructor Parameters
#include<iostream>
using namespace std;
class Car{
	public:
	string brand;
	string model;
	int year;
	Car(string x,string y,int z)
	{
		brand = x;
		model = y;
		year = z;
	}
}; 
int main()
{
	Car carObj1("BMW","X5",1999);
	Car carObj2("Ford","Mustang",1969);
	cout<<carObj1.brand<<" "<<carObj1.model<<" "<<carObj1.year<<"\n";
	cout<<carObj2.brand<<" "<<carObj2.model<<" "<<carObj2.year;
	return 0;
}




/*Constructor parameters
just like functions we can also define constructor outside the class.
declare the constructor inside the class,define it outside of class by specifying name of class followed by ::(scope resolution operator),
followed by name constructor with its parameters also if it have*/
#include<iostream>
using namespace std;
class Student{
	public:
		string fname;
		string lname;
		int age;
		Student(string x,string y,int z);
};
Student::Student(string x,string y,int z)
{
	fname = x;
	lname = y;
	age = z;
}
int main()
{
	Student stud1("Pradnya","Salve",21);
	Student stud2("Poonam","Wagh",20);
	Student stud3("Komal","Borkar",21);
	cout<<stud1.fname<<" "<<stud1.lname<<" "<<stud1.age<<endl;
	cout<<stud2.fname<<" "<<stud2.lname<<" "<<stud2.age<<endl;
	cout<<stud3.fname<<" "<<stud3.lname<<" "<<stud3.age;
	return 0;
}




/*C++ Access Specifiers
>>Access specifiers defines how the members(attributes and methods)of a classs can be accessed.
>>In C++,there are three  access specifiers
  1.public - members are accessible from outside the class
  2.private - members cannot be accessed (or viewed) from outside the class
  3.protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.*/

//example of public and private access specifiers
#include<iostream>
using namespace std;
class num{
	public:
		int x;
	private:
		int y;
};
int main()
{
	num obj1;
	cout<<obj1.x<<endl;
	cout<<obj1.y;   //it is showing error because we cannot access private members
	return 0;
}

//Note : by default all the members of a class are private,if we don't specify access specifier
 /*C++ Destructor :
>>A special type of member function that is used to deallocate the memory,allocated by the constructor.
>>Syntax : 
class A{
   public:
   A()
   {
   }
   ~A()
   {
   }
};
>>When is destructor called? 
A destructor function is called automatically when the object goes out of scope: 
(1) the function ends 
(2) the program ends 
(3) a block containing local variables ends 
(4) a delete operator is called  
How are destructors different from a normal member function? 
Destructors have same name as the class preceded by a tilde (~) 
Destructors don’t take any argument and don’t return anything*/

class String {
private:
    char* s;
    int size;
 
public:
    String(char*); // constructor
    ~String(); // destructor
};
 
String::String(char* c)
{
    size = strlen(c);
    s = new char[size + 1];
    strcpy(s, c);
}
String::~String() 
{ 
    delete[] s;
}

