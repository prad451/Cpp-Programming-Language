/*C++ Structures
Structures (also called structs) are a way to group several related variables into one place. 
Each variable in the structure is known as a member of the structure.
A structure can contain many different data types (int, string, bool, etc.).
Create a Structure :
To create a structure, use the struct keyword and declare each of its members inside curly braces.
After the declaration, specify the name of the structure variable (
struct     //structure declaration
{ 
   int myNum;     //int variable(member)
   string myString;     //string variable(member)
}myStructure;    //structure variable
*/



//accessing structure members
#include<iostream>
using namespace std;
int main()
{
	struct
	{
		int myNum;
		string myString;
	}myStructure;
	myStructure.myNum = 1;  //assigning values
	myStructure.myString = "Pradnya";
	cout<<myStructure.myNum<<endl;
	cout<<myStructure.myString;
	return 0;
}



//one structure to multiple variables
/*struct
{
	int num;
	string my_string;
	float flt;
}structure1,structure2,structure3;

Example :*/


#include<iostream>
using namespace std;
int main()
{
	struct
	{
        string brand;
	    string model;
	    int year;
	    
    }myCar1,myCar2;
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;
    
    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;
    
    cout<<myCar1.brand<<" "<<myCar1.model<<" "<<myCar1.year<<endl;
    cout<<myCar2.brand<<" "<<myCar2.model<<" "<<myCar2.year;
    return 0;
}



/*Named Structures
By giving a name to the structure,we can treat it as a data type.This means that we can create variables with this structure anywhere 
in the program at any time.To create a named structure, put the name of the structure right after the struct keyword:
struct myDataType 
{ 
  int myNum;
  string myString;
};*/



#include<iostream>
using namespace std;
struct Car
	{
		string brand;
		string model;
		int year;
	};
int main()
{
	Car myCar1;
		myCar1.brand = "BMW";
		myCar1.model = "X5";
		myCar1.year = 1999;
		
	Car myCar2;
	    myCar2.brand = "Ford";
	    myCar2.model = "Mustang";
	    myCar2.year = 1969;
	
	cout<<myCar1.brand<<" "<<myCar1.model<<" "<<myCar1.year<<"\n";
	cout<<myCar2.brand<<" "<<myCar2.model<<" "<<myCar2.year;
	return 0;
	
}





/*C++ References
A reference variable is a "reference" to an existing variable, and it is created with the & operator:
string food = "Pizza";  // food variable
string &meal = food;    // reference to food*/


#include<iostream>
using namespace std;
int main()
{
	string food = "Pizza";
	string &meal = food;
	cout<<food<<endl;
	cout<<meal;
	return 0;
	
}




/*Memory Address
& operator also used to get the memory address.It is the location of a variable where the variable is stored on a computer.*/
#include<iostream>
using namespace std;
int main()
{
	string food = "Pizza";
	cout<<&food<<"\n";
	int num = 90;
	cout<<&num;
	return 0;
}





/*C++ Pointers
A pointer however is a variable that stores the memory address as its value.
A pointer variable points to a data type (like int or string) of the same type,and is created with the * operator. 
Note : the type of the pointer has to match the type of the variable you're working with.
>>Ways to declare pointer variables :
1.string* myString; //preferred
2.string *myString;
3.string * myString;*/


#include<iostream>
using namespace std;
int main()
{
	string food = "Pizza";
	string* ptr = &food;
	cout<<food<<endl;
	cout<<&food<<endl;
	cout<<ptr;
	return 0;
}




/*C++ References
we used the pointer variable to get the memory address of a variable (used together with the & reference operator). However,we can also use 
the pointer to get the value of the variable, by using the * operator (the dereference operator)*/


#include<iostream>
using namespace std;
int main()
{
	string food = "Pizza"; //variable declaration
	string* ptr = &food;  //pointer declaration
	cout<<ptr<<"\n";  //Reference : returns memory address of food with the pointer
	cout<<*ptr<<"\n";  //Dereference : returns value of a food with thr pointer
	return 0;
}


/*Note : 
* sign can be confusing here,as it does two different things in our code:
When used in declaration (string* ptr), it creates a pointer variable.
When not used in declaration, it act as a dereference operator.*/

//C++ Modify Pointers
#include<iostream>
using namespace std;
int main()
{
   string food = "Pizza";
   string* ptr = &food;
   cout << food << "\n";
   cout << &food << "\n";
   cout << *ptr << "\n";
   *ptr = "Hamburger";
   cout << *ptr << "\n";
   cout << food << "\n";
   return 0;
}


