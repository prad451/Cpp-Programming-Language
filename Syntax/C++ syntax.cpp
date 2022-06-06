/*C++ Syntax
#include<iostream>
using namespace std;

int main()
{
   cout<<"Hello world";
   return 0;
}

-->Explaination:
#include<iostream> : is a header file liabrary that works with input and output objects such as cout.It adds functionality to programs.
using namespace std : means that we can use names for objects and variables from the standard liabrary.
int main() : this is the function,the code inside the main function (ie.inside the curly {} bracket) will be executed first.
cout : is an object used together with the insertion operator(<<)to print the output/text.
return 0 : it ends the main function.

-->Note :
>>Actually,C++ ignores the white spaces but we can use it to make it more readable.
>>every C++ statements ends with semicolon(;).
>>Omitting namespace : we can run C++ programs without standard liabrary.
>>The 'using namespace std' can be omitted and replaced with the std keyword,followed by the :: operator for some objects.
>>Foe ex,
#include<iostream>
int main()
{
  std::cout<<"Hello world";
  return 0;
}
>>new lines : to insert a new line,we can use the \n character(it is called escape sequence).
>>two \n characters after each other will create a blank line.
>>we can also insert a new line with the endl manipulator.
>>For ex,
1.#include<iostream>
  using namespace std;
  int main()
  {
    cout<<"Hello world \n";
    cout<<"I am learning C++;
    return 0;
  }

2.#include<iostream>
  int main()
  {
    std::cout<<"Hello world \n\n";
    std::cout<<"Iam learning C++";
    return 0;
  }
  
3.#include<iostream>
  using namespave std;
  int main()
  {
    cout<<"Hello world"<<endl;
    cout<<"LearnC ++";
    return 0;
  }
    
>>Escape Sequence	Description
>>  \t            	Creates a horizontal tab	
>>  \\	            Inserts a backslash character (\)	
>>  \"	            Inserts a double quote character












