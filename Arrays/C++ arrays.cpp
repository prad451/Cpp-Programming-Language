/*C++ Arrays
>>Arrays are used to store multiple values in a single variable with continos memory location,instead of declaring separate variables for each value.
>>is a derived datatype which is constructed by primitive datatype
>>To declare an array, define the variable type,specify the name of the array followed by square brackets and specify the 
number of elements it should store
<<Types : 1D Array and 2D Array
>>creating arrays :
string cars[4] =  {"BMW","Volvo","Swift","Ford"}
int num[5] = {100,200,300,400,500}*/


//accessing array elements
#include<iostream>
using namespace std;
int main()
{
	string cars[4] = {"BMW","Volvo","Swift","Ford"};
	int num[5] = {100,200,300,400,500};
	cout<<cars[2]<<endl;
	cout<<num[0];
	return 0;
}




//changing array elements
#include<iostream>
using namespace std;
int main()
{
   int num[7] = {87,78,66,20,9};
   num[2] = 67;
   cout<<num[2];
   return 0;	
}




//arrays and loops
#include<iostream>
using namespace std;
int main()
{
	string names[5] = {"Pradnya","Poonam","Sanchita","Ruhi","Komal"};
	for(int i=0;i<5;i++)
	{
		cout<<i<<"\t"<<names[i]<<"\n";
	}
	return 0;
}




#include<iostream>
using namespace std;
int main()
{
	string names[4];
	names[0] = "Pradnya";
	names[1] = "Poonam";
	names[2] = "Sanchita";
	names[3] = "Ruhi";
	for(int i = 0;i<3;i++)
	{
		cout<<i<<"\t"<<names[i]<<"\n";
	}
	return 0;
}




//get the size of an array
#include<iostream>
using namespace std;
int main()
{
	int num[5] = {7,9,13,16,20};
	cout<<sizeof(num);
	return 0; 
}

/*its showing result 20 because sizeof operator returns size of a type in bytes.(4 bytes*5elements=20).So,find out how many 
elements an array has, you have to divide the size of the array by the size of the data type it contains*/




#include<iostream>
using namespace std;
int main()
{
	int num[8] = {10,20,30,40,50,60,70,80};
	int arrayLength = sizeof(num)/sizeof(int);
	cout<<arrayLength;
	return 0;
}




/*Multidimensional arrays
>>A multi-dimensional array is an array of arrays.
>>To declare a multi-dimensional array : define the variable type,
 specify the name of the array followed by square brackets which specify how many elements the main array has, 
 followed by another set of square brackets which indicates how many elements the sub-arrays have
>>2D Array :
string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};
>>3D Array :
string letters[2][2][2] = {
     {
	    {"A","B},
	    {"C","D"}
     },
     {
        {"E","F"},
        {"G","H"}
     }
}*/




//accessing elements of multi-dimensional array
#include<iostream>
using namespace std;
int main()
{
	string letters[2][4]= 
	{
		{"A","B","C","D"},
		{"E","F","G","H"},
	};
	cout<<letters[1][1];
	return 0;
}




//changing elements in multi-dimensional array
#include<iostream>
using namespace std;
int main()
{
	float arr[3][3] = 
	{
		{0.2,1.2,4.5},
		{2.7,9.9,2.1},
		{4.6,6.9,1.8}
	};
	arr[1][1] = 1.9;
	cout<<arr[1][1];
	return 0;
}




//loop through a multi-dimensional array
#include<iostream>
using namespace std;
int main()
{
	int arr[2][4] =
	{
		{10,20,30,40},
		{50,60,70,80}
	};
	for(int i = 0;i < 2; i++)
	{
		for(int j = 0; j < 4; j++)
		{
		cout<<arr[i][j]<<"\t";
	    }
	} 
	return 0;
}




#include<iostream>
using namespace std;
int main()
{
	string arr[2][2][2] ={
	{
		{"a","b"},
		{"c","d"}
	},
	{
		{"e","f"},
		{"g","h"}
	}
};
	for(int i = 0;i < 2; i++)
	{
		for(int j = 0;j < 2; j++)
		{
			for(int k = 0;k < 2;k++)
			{
				cout<<arr[i][j][k]<<"\t";
			}
		}
	}
	return 0;
}





//Example to represent a small game of Battleship:
// We put "1" to indicate there is a ship.
#include<iostream>
using namespace std;
int main()
{
    bool ships[4][4] = {
      { 0, 1, 1, 0 },
      { 0, 0, 0, 0 },
      { 0, 0, 1, 0 },
      { 0, 0, 1, 0 }
};

// Keep track of how many hits the player has and how many turns they have played in these variables
int hits = 0;
int numberOfTurns = 0;

// Allow the player to keep going until they have hit all four ships
while (hits < 4) {
  int row, column;

  cout << "Selecting coordinates\n";

  // Ask the player for a row
  cout << "Choose a row number between 0 and 3: ";
  cin >> row;

  // Ask the player for a column
  cout << "Choose a column number between 0 and 3: ";
  cin >> column;

  // Check if a ship exists in those coordinates
  if (ships[row][column]) {
    // If the player hit a ship, remove it by setting the value to zero.
    ships[row][column] = 0;

    // Increase the hit counter
    hits++;

    // Tell the player that they have hit a ship and how many ships are left
    cout << "Hit! " << (4-hits) << " left.\n\n";
  } else {
    // Tell the player that they missed
    cout << "Miss\n\n";
  }

  // Count how many turns the player has taken
  numberOfTurns++;
}

cout << "Victory!\n";
cout << "You won in " << numberOfTurns << " turns";
return 0;
}

