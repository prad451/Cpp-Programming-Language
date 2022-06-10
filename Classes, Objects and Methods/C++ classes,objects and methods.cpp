/*C++ OOP
OOP stands for object oriented programming.
Procedural programming is about writing procedures or functions that perform operations on the data, while object-oriented programming is about 
creating objects that contain both data and functions.
Object-oriented programming has several advantages over procedural programming:
  1.OOP is faster and easier to execute
  2.OOP provides a clear structure for the programs
  3.OOP helps to keep the C++ code DRY "Don't Repeat Yourself", and makes the code easier to maintain, modify and debug
  4.OOP makes it possible to create full reusable applications with less code and shorter development time

Classes and Objects :
Classes and Objects are two main aspects of oop.
Class is a template of objects and an Object is an instance of a class.
When the individual objects are created, they inherit all the variables and functions from the class.
Create a class :
A class is a user-defined datatype or a blueprint for creating objects.
class MyClass{
   public:
   int myInt; //attribute(int variable)
   string myString; //attribute(string variable)
};*/



//Create an object
#include<iostream>
using namespace std;
class MyClass{
	public:
		int myNum;
		string myString;
};
int main()
{
	MyClass myObj;
	myObj.myNum = 90;
	myObj.myString = "PRADNYA";
	
	
	cout<<myObj.myNum<<" "<<myObj.myString;
	return 0;
}



//multiple objects
#include<iostream>
using namespace std;
class Car{
	public :
	string brand;
	string model;
	int year;
};
int main()
{
	Car carObj1;
	carObj1.brand = "BMW";
	carObj1.model = "x5";
	carObj1.year = 1999;
	 
	Car carObj2;
	carObj2.brand = "Ford";
	carObj2.model = "Mustang";
	carObj2.year = 1969;
	
	cout<<"Brand"<<"\t\t"<<"Model"<<"\t\t"<<"Year"<<"\n";
	cout<<carObj1.brand<<"\t\t"<<carObj1.model<<"\t\t"<<carObj1.year<<"\n";
	cout<<carObj2.brand<<"\t\t"<<carObj2.model<<"\t\t"<<carObj2.year;
	return 0;
}





/*C++ Class Methods
Methods are functions that belongs to the class.
There are two ways to define functions that belongs to a class:
>>Inside class definition
>>Outside class definition*/


//inside class defination example
#include<iostream>
using namespace std;
class MyClass{          //class
	public:             //access specifier
	string myString;
	void myMethod()     //method defined in the class
	{
		cout<<"Hello World!!";
	}
};
int main()
{
	MyClass myObj;
	myObj.myMethod();
	return 0;
}



//outside class defination example
#include<iostream>
using namespace std;
class MyClass{
	public:
		void myMethod();
};

void MyClass::myMethod()
{
	cout<<"Hello world!!";
}
int main()
{
	MyClass myObj;
	myObj.myMethod();
	return 0;
}



//adding parameters to methods
#include<iostream>
using namespace std;
class Car{
	public:
		int speed(int maxSpeed);
};

int Car::speed(int maxSpeed)
{
	return maxSpeed;
}

int main()
{
	Car myCar;
	cout<<myCar.speed(300);
	return 0;
}




