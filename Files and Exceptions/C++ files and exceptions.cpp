/*C++ Files
>>Files are used to store data in a storage device permanently. 
>>C++ uses fstream library which is allows to work with files
>>There are three classes included in the fstream library, which are used to create, write or read files:
Class       	Description
ofstream	Creates and writes to files
ifstream	Reads from files
fstream	    A combination of ofstream and ifstream: creates, reads, and writes to files
>>why do we close the file? : It is considered good practice, and it can clean up unnecessary memory space.*/


//Create and Write To a File
#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
    ofstream MyFile("filename.txt");  //create and open a text file
    MyFile << "Files can be tricky, but it is fun enough!";  //write to the file
    MyFile.close();    //close the file
}



//Read a File
#include<iostream>
#include <fstream>
#include <string>
using namespace std;
int main () 
{
  ofstream MyWriteFile("filename.txt");  //create a text file
  MyWriteFile << "Files can be tricky, but it is fun enough!";  //write to the file
  MyWriteFile.close();   //close the file
  string myText;    //create a text string, which is used to output the text file
  ifstream MyReadFile("filename.txt");   //read from the text file
  while (getline (MyReadFile, myText))     //use a while loop together with the getline() function to read the file line by line
   {
	  cout << myText;
   }
   MyReadFile.close();    //close the file
}




/*C++ Exceptions
>>When executing C++ code,different errors can occur: coding errors made by the programmer,errors due to wrong input, 
or other unforeseeable things.
>>When an error occurs,C++ will normally stop and generate an error message. 
>>The technical term for this is: C++ will throw an exception (throw an error).
>>C++ try and catch
  Exception handling in C++ consist of three keywords: try, throw and catch:
  The try statement allows you to define a block of code to be tested for errors while it is being executed.
  The throw keyword throws an exception when a problem is detected, which lets us create a custom error.
  The catch statement allows you to define a block of code to be executed, if an error occurs in the try block.
>>Syntax :
try {
  // Block of code to try
  throw exception; // Throw an exception when a problem arise
}
catch () {
  // Block of code to handle errors
}*/


#include<iostream>
using namespace std;
int main()
{
	try 
	{
      int age = 15;
      if (age >= 18) 
	  {
         cout << "Access granted - you are old enough.";
      } else 
	  {
         throw (age);
      }
    }
    catch (int myNum) 
    {
       cout << "Access denied - You must be at least 18 years old.\n";
       cout << "Age is: " << myNum;
    }
}



//we can also use the throw keyword to output a reference number or error number
#include <iostream>
using namespace std;
int main() {
  try {
    int age = 15;
    if (age >= 18) {
      cout << "Access granted - you are old enough.";
    } else {
      throw 505;
    }
  }
  catch (int myNum) {
    cout << "Access denied - You must be at least 18 years old.\n";
    cout << "Error number: " << myNum;  
  }
  return 0;
}



//handle any type of exceptions(...)
/*If we do not know the throw type used in the try block,we can use the "three dots" syntax (...) 
inside the catch block, which will handle any type of exception*/
#include <iostream>
using namespace std;

int main() {
  try {
    int age = 20;
    if (age >= 18) {
      cout << "Access granted - you are old enough.";
    } else {
      throw 505;
    }
  }
  catch (...) {
    cout << "Access denied - You must be at least 18 years old.\n";
  }
  return 0;
}

