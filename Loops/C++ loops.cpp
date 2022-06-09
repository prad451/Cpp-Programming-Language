/*C++ Loops
C++ Loops
Loop is nothing but iterative statement which allow a block of code to be executed repeatedly
Loops can execute a block of code as long as a specified condition is reached.
Loops are handy because they save time, reduce errors, and they make code more readable.


>>1.while loop
is also known as entry controlled loop.
the statement will be executed continously untill the given condition is no longer satisfied.
The while loop loops through a block of code as long as a specified condition is true
Syntax :
while (condition)
{
  //code block to be executed
}


>>2.do/while loop
is also known as exit controlled loop because it tests condition at the end of loop body
Syntax :
do 
{
  //code block to be executed
}
while(condition);


>>3.for loop
unlike while loop,for loop performs all operations in single line
Syntax :
for(initialization;condition;increment/decrement)
{
  //code block to be executed
}


>>4.jump statements
>>break
used to jump out of a loop
>>continue
breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.
>>goto
>>exit
>>return*/



#include<iostream>
using namespace std;
int main()
{
	int i = 0;
	while(i<5)
	{
		cout<<i<<"\n";
		i++;
	}
}




#include<iostream>
using namespace std;
int main()
{
	int i = 0;
	do
	{
		cout<<i<<"\n";
		i++;
	}
	while(i<5);
}




#include<iostream>
using namespace std;
int main()
{
	for(int i = 0;i<5;i++)
	{
		cout<<i<<"\n";
	}
	return 0;
}




//print only even values between 0 to 10
#include<iostream>
using namespace std;
int main()
{
	for(int i = 0;i<=10;i = i+2)
	{
		cout<<i<<"\n";
	}
	return 0;
}




//Example : jumps out of the loop when i is equal to 4
#include<iostream>
using namespace std;
int main()
{
	for(int i = 0;i<10;i++)
	{
		if (i==4)
		{
			break;
		}
		cout<<i<<"\n";
	}
	return 0;
}




#include<iostream>
using namespace std;
int main()
{
	for(int i = 0;i<10;i++)
	{
		if (i==4)
		{
			continue;
		}
		cout<<i<<"\n";
	}
	return 0;
}




//break and continue in while loop
#include<iostream>
using namespace std;
int main()
{
   int i = 0;
   while(i<10)
   {
    	cout<<i<<"\n";
	    i++;
    	if (i==4)
    	{
	    	break;
    	}
   }
   return 0;
}




#include<iostream>
using namespace std;
int main()
{
	int i = 0;
	while(i<10)
	{
		if(i==4)
		{
			i++;
			continue;
		}
		cout<<i<<"\n";
		i++;
	}
	return 0;
}




//break and continue in do while loop
#include<iostream>
using namespace std;
int main()
{
	int i = 0;
	do
	{
		cout<<i<<"\n";
		i++;
		if(i==4)
		{
			i++;
			continue;
		}
	}
	while(i<10);
	return 0;
}





#include<iostream>
using namespace std;
int main()
{
	int i = 0;
	do
	{
		cout<<i<<"\n";
		i++;
		if (i==4)
		{
			break;
		}
	}
	while(i<10);
	return 0;
}

