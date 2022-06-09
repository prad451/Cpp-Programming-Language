/*C++ conditions
C++ has the following conditional statements:
if : to specify a block of code to be executed, if a specified condition is true
else : to specify a block of code to be executed, if the same condition is false
else if : to specify a new condition to test, if the first condition is false
switch : to specify many alternative blocks of code to be executed
nested-if : if-else block inside another if-else block

1.if statement
Syntax :
if (condition)
{
  //block of code to be executed if condition is true
}

2.else
Syntax :
if (condition)
{
  //block of code to be executed if condition is true
}
else
{
  //block of code to be executed if condition is false
}

3.else if ladder
Syntax :
if (condition1)
{
  //block of code to be executed if condition is true
}
else if (condition2)
{
  //block of code to be excuted if codition(1) is false
}
else
{
  //block of code to be executed if condition(2) is faslse
}

4.Short hand if-else(ternary operator)
Syntax :
variable = (condition) ? expressionTrue : expressionFalse;

5.Switch statement
Syntax :
switch(variable)
{
  //cases
}

6.nested-if
Syntax :
if (condition1)
{
  if condition(2)
  {
     "statement1";
  }
  else
  {
     "statement 2";
  }
}
else
{
   if (condition3)
   {
     "statement 3";
   }
   else
   {
     "statemenr 4";
   }
}
*/

#include<iostream>
using namespace std;
int main()
{
	int x = 10,y = 10;
	if (x>y)
	{
		cout<<"X is greater than Y"<<endl;
	}
	else if (x<y)
	{
		cout<<"X is less than Y"<<endl;
	}
	else
	{
		cout<<"Both  X and Y are equal";
	}
	return 0;
}




#include<iostream>
using namespace std;
int main()
{
	int time = 20;
	string result = (time>18) ? "Good Day" : "Good Evening";
	cout<<result;
	return 0;
}



#include<iostream>
using namespace std;
int main()
{
	int day = 6;
	switch(day)
	{
		case 1 :
			cout<<"Monday";
			break;
		case 2 :
			cout<<"Tuesday";
			break;
		case 3 :
			cout<<"Wednesday";
			break;
		case 4 :
			cout<<"Thursday";
			break;
		case 5 :
			cout<<"Friday";
			break;
		case 6 :
			cout<<"Saturday";
			break;
		case 7 :
			cout<<"Sunday";
			break;  //break keyword :  breaks out of the switch block.
		default:
			cout<<"It's weekend!!";
			
	}
	return 0;
}




#include<iostream>
using namespace std;
int main()
{
	int num = 2;
	switch(num+1)
	{
		case 1 :
			cout<<"Choice is 1"<<endl;
			break;
		case 2 :
			cout<<"Choice is 2"<<endl;
			break;
		case 3 :
			cout<<"Choice is 3"<<endl;
			break;
		case 4 :
			cout<<"Choice is 4"<<endl;
			break;
		default :
			cout<<"Invalid choice!!";
	}
	return 0;
}




#include<iostream>
using namespace std;
int main()
{
	int num = 100;
	if (num==100)
	{
		if (num>15)
		{
			cout<<"num is greater"<<endl;
		}
		else
		{
			cout<<"num is small"<<endl;
		}
	}
	else
	{
		if(num<=100)
		{
			cout<<"num is less or equal to 100"<<endl;
		}
		else 
		{
			cout<<"num is greater or equal to 100"<<endl;
		}
	}
}
