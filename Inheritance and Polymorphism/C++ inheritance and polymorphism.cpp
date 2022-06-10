/*C++ Inheritance
>>Inheritance is nothing but when one class access the property of another class
>>In C++, it is possible to inherit attributes and methods from one class to another. We group the "inheritance concept" into two categories:
  1.derived class (child) - the class that inherits from another class
  2.base class (parent) - the class being inherited from
>>It is useful for code reusability: reuse attributes and methods of an existing class when you create a new class.
>>Types : 
  1.Multilevel  
  2.Multiple
  3.Hierarchical */
  
  
#include <iostream>
#include <string>
using namespace std;
class Vehicle {    //base class
  public: 
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};
class Car: public Vehicle {    // Derived class
  public: 
    string model = "Mustang";
};
int main() {
  Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model;
  return 0;
}
  
  
  
  
/*Multilevel Inheritance
A class can also be derived from one class, which is already derived from another class.*/

#include <iostream>
using namespace std;
class MyClass {   // Parent class
  public: 
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};
class MyChild: public MyClass {    // Child class
};
class MyGrandChild: public MyChild {  // Grandchild class 
};

int main() {
  MyGrandChild myObj;
  myObj.myFunction();
  return 0;
}



/*Multiple Inheritance
A class can also be derived from more than one base class, using a comma-separated list*/

#include <iostream>
using namespace std;
class MyClass {   //base class
  public:
    void myFunction() {
      cout << "Parent class.\n" ;
    }
};
class MyOtherClass {   //another base class
  public:
    void myOtherFunction() {
      cout << "Another parent class.\n" ;
    }
};
class MyChildClass: public MyClass, public MyOtherClass {   // derived class
};

int main() {
  MyChildClass myObj;
  myObj.myFunction();
  myObj.myOtherFunction();
  return 0;
}




//access specifier in inheritance
//ie.protected: is similar to private, but it can also be accessed in the inherited class

#include <iostream>
using namespace std;
class Employee  {   //base class
  protected:      //protected access specifier
    int salary;
};
class Programmer: public Employee {   //derived class
  public:
    int bonus;
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};

int main() {
  Programmer myObj;
  myObj.setSalary(50000);
  myObj.bonus = 15000;
  cout << "Salary: " << myObj.getSalary() << "\n";
  cout << "Bonus: " << myObj.bonus << "\n";
  return 0;
}





/*C++Polymorphism
>>Polymorphism means "many forms", and it occurs when we have many classes that are related to each other by inheritance.
>>Inheritance inherit attributes and methods from another class. 
>>Polymorphism uses those methods to perform different tasks. This allows us to perform a single action in different ways.
>>Types :
  1.Compile time(function overloading)
  2.Runtime(function overriding)*/

#include<iostream>
using namespace std;  

class Animal {   //base class
  public:
    void animalSound() {
    cout << "The animal makes a sound \n" ;
  }
};

class Pig : public Animal {    //derived class
  public:
    void animalSound() {
    cout << "The pig says: wee wee \n" ;
  }
};

class Dog : public Animal {   //derived class
  public:
    void animalSound() {
    cout << "The dog says: bow wow \n" ;
  }
};
int main() {
  Animal myAnimal;
  Pig myPig;
  Dog myDog;

  myAnimal.animalSound();
  myPig.animalSound();
  myDog.animalSound();
  return 0;
}

