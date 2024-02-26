# 12th Batch

---

[](https://github.com/ahsanul-database/oop-lab/blob/main/README.md)

Chapter-wise Problems

---

## Question-1

- **A. What is object oriented programming? What is the only difference between a structure and a class in C++.**
  Object-Oriented Programming is an approach that provides a way modularizing programs by creating partitioned memory area for both data and functions that can be used as templates for creating copies of such modules on demand.
  The basic difference of structure and class in access specifies perspective ,structures all member are public by default whereas class’s member are private. Apart from this, there have no basic difference basically!
- **B. Define the following terms as used in Object Oriented Programming:
  (i) Object
  (ii) Class and
  (iii) Polymorphism**
  **Object**: An instance of a class encapsulating data and behavior.

      **Class**: A blueprint for creating objects that defines their properties and behaviors.

      **Polymorphism**: The ability for different objects to respond to the same message or method invocation in different ways.

- **C. With the aid of a diagram, explain the concept of hierarchical inheritance.**

  Hierarchical inheritance is a type of inheritance in object-oriented programming where a single base class (parent class) is inherited by multiple derived classes (child classes). This creates a hierarchical structure resembling a tree, where the base class sits at the top and the derived classes branch out below it.

  ![Untitled](https://file.notion.so/f/f/4a753f4a-6387-4787-a840-04ab7c7c0c5d/a3ee7b2f-e3a9-4600-b9ae-a7ddbe5777b6/Untitled.png?id=1d5e05e5-ace8-44a7-ac4a-65bf93303692&table=block&spaceId=4a753f4a-6387-4787-a840-04ab7c7c0c5d&expirationTimestamp=1709035200000&signature=3OgqBPnd2gwsMA0QE1DjYkXZYPhYTIH7w56FnzvDohY&downloadName=Untitled.png)

  In this diagram have 2 part.

  - Base Class(common properties and functionalities)
  - Derived Class(Inherits and can add new member and methods)

  By considering Parent as base class, we can inherit data into all child and grand child. They inherit all the members (attributes and methods) of the base class and can also add their own specific members.

  [Excalidraw — Collaborative whiteboarding made easy](https://excalidraw.com/#json=imBoneJa9HV_98oIYCg0q,ev7FbhGIJqjjzQSuyANWiw)

- **D. Write a program to print the following outputs using for loop.**

  ```jsx
    	1
     2 2
    3 3 3
   4 4 4 4
  5 5 5 5 5
  ```

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main()
  {
      int n = 5;
      for (int i = 1; i <= n; i++)
      {
          for (int j = 1; j <= (n - i); j++)
          {
              cout << " ";
          }
          for (int k = 1; k <= i; k++)
              cout << i << " ";

          cout << endl;
      }

      return 0;
  }
  ```

---

## Question -2

- **A. What is a constructor? Is it mandatory to use constructors in a class?**
  A constructor is a special member function with the same name as the class. It is called automatically whenever an object of that class is created using the `new` keyword or during object initialization.
  No. It’s not mandatory to use constructors in a class.
- **B. Explain the difference between the default constructor and other constructors.**
  | Feature | Default Constructor | Other Constructors (User-defined) |
  | --------------------------- | ------------------------------------------------- | --------------------------------------------------- |
  | Existence | Provided by compiler (if no constructors defined) | Defined explicitly by programmer |
  | Purpose | Basic object creation without initialization | Custom object creation with initialization |
  | Behavior | Empty body, no initialization | Explicit initialization using arguments or defaults |
  | Parameters | None | Can have parameters for initialization |
  | Control over initialization | Limited | Full control over initialization |
- **C. What is the purpose of a copy constructor? Explain the difference in operation between these two statements. person p1(p0) and person p1 =p0;**
  A copy constructor is a special member function in C++ that is used to create a new object of the same class as an existing object, copying the values of its member variables into the new object.
  **Difference between `person p1(p0)` and `person p1 = p0;`:**
  | Feature | person p1(p0); | person p1 = p0; |
  | -------------- | --------------------------------------------------------------------- | ------------------------------------------ |
  | Statement Type | Explicit call to copy constructor | Copy assignment operator (=) |
  | Implicit Call | No | Yes, implicitly calls the copy constructor |
  | Readability | Can be clearer for complex classes or emphasizing new object creation | More concise |
  | Functionality | Creates a new object p1 as a copy of p0 | Creates a new object p1 as a copy of p0 |
- **D. Write and a program that uses a do...while loop to compute and prints the sum of a given number of squares.**

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main()
  {
      int n;
      cin >> n;
      int sum = 0;
      do
      {
          sum += (n * n);
          n--;
      } while (n > 0);
      cout << sum << endl;
      return 0;
  }
  ```

---

## Question -3

- **A. Consider the following statement: int \*num;**

  - **Write the C++ statement that dynamically creates an array of 10 components of type int and num contains the base address of the array.**
    **Dynamically allocating an array**: The ** `new`** operator used to allocate memory dynamically. When we use **`new` ,**memory is allocated in the **heap**(static and local variable are allocated in stack) and the address of the allocated memory is returned.
    ```cpp
    int* num = new int[10];
    ```
  - **Write a C++ code that inputs data into the array num from the standard input device.**
    **Inputting data into the array**: We can do it using any looping. here we go with for loop.

    ```cpp

    for (int i = 0; i < 10; ++i) {
    cin >> num[i];
    }
    ```

  - **Write a C++ statement that deallocates the memory space of array to which num points**
    **Deallocating the dynamically allocated memory**: The **`delete[]`** operator is used to free the memory allocated by **`new[]`**.
    ```cpp
    delete[] num;
    ```
    [new and delete Operators in C++ For Dynamic Memory - GeeksforGeeks](https://www.geeksforgeeks.org/new-and-delete-operators-in-cpp-for-dynamic-memory/)
    For details about this topic

- **B. What is the difference between the following two statements:**
  ```cpp
  **i.  if (n > 2) { if(n < 6) cout<<"OK"; } else cout << "NG";
  ii. if (n > 2) { if (n < 6) cout << "OK"; else cout << "NG"; }**
  ```
  - For the first statement:
    - If **`n`** is less than or equal to 2, "NG" is printed.
    - If **`n`** is greater than 2 and less than 6, "OK" is printed.
    - If **`n`** is greater than or equal to 6, "NG" is printed.
  - For the second statement:
    - If **`n`** is less than or equal to 2, "NG" is printed.
    - If **`n`** is greater than 2 and less than 6, "OK" is printed.
    - If **`n`** is greater than or equal to 6, "NG" is printed.
- **C. What is the difference between a function's declaration and its definition?**
  | Aspect | Function Declaration | Function Definition |
  | --------- | ------------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------- |
  | Purpose | Tells the compiler about the existence of a function | Provides the actual implementation of the function |
  | Location | Typically found in header files (.h) or at the beginning of source files (.cpp) | Found in source files (.cpp) |
  | Syntax | Contains the function's name, return type, and parameter types, followed by a semicolon (;) | Contains the function's name, return type, parameter list, and body of the function |
  | Ends with | Ends with a semicolon (;) | Does not end with a semicolon (;) |
  | Example | int add(int a, int b); | int add(int a, int b) { return a + b; } |
- **D. A book shop maintains the inventory of books that are being sold at the shop. The list includes details such author, title, price, and stock position. Whenever a customer wants a book, the sales person inputs the title and author and the system searches the list and displays whether it is available or not. If it is not, an appropriate message is displayed. If it is, then the system displays the book details and requests for the number of copies required. If the requested number copies are available, the total cost of the requested copies is displayed; otherwise the message "Required copies not in stock" is displayed. Design a system using a class called books with constructors and suitable member functions. Use new operator in constructors to allocate memory space required.**

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;
  class BookInfo
  {
  public:
      string authorName, bookName;
      int price, stock;

      BookInfo() {}

      BookInfo(string authorName, string bookName, int price, int stock)
      {
          this->authorName = authorName;
          this->bookName = bookName;
          this->price = price;
          this->stock = stock;
      }
  };
  bool available(string bookName, string authorName, BookInfo BookCollection[], int n)
  {
      for (int i = 0; i < n; i++)
      {
          if (BookCollection[i].bookName == bookName && BookCollection[i].authorName == authorName && BookCollection[i].stock > 0)
          {
              return true;
          }
      }
      return false;
  }
  void printBookInfo(string name, string title, BookInfo BookCollection[], int n)
  {
      for (int i = 0; i < n; i++)
      {
          if (BookCollection[i].bookName == title && BookCollection[i].authorName == name)
          {

              cout << "Author Name: " << BookCollection[i].authorName << endl;
              cout << "Book Name: " << BookCollection[i].bookName << endl;
              cout << "Price: " << BookCollection[i].price << endl;
              cout << "Stock: " << BookCollection[i].stock << endl;
          }
      }
  }
  int main()
  {
      int n = 5;
      BookInfo *BookCollection = new BookInfo[n];
      BookCollection[0] = BookInfo("Ahsanul", "Debug Your Dream", 240, 10);
      BookCollection[1] = BookInfo("Amanul", "Solvency  Regulation", 200, 20);
      BookCollection[2] = BookInfo("Fatin", "Being Expert", 300, 30);
      BookCollection[3] = BookInfo("Khusbul", "Crafting My Next Moves", 400, 40);
      BookCollection[4] = BookInfo("Ahmed", "Mapping the Tech Frontiers", 500, 50);
      cout << "Enter details of person who wants to buy a book: " << endl;
      string title, name;
      cout << "Author Name: ";
      cin >> name;
      cout << "Book Title: ";
      getchar();
      // cin >> title;
      getline(cin, title);
      if (available(title, name, BookCollection, n))
      {
          cout << "\nBook is available" << endl;
          cout << "Details of the book are as follows: " << endl;
          printBookInfo(name, title, BookCollection, n);
          cout << "\nWant to buy the book? (yes/no): ";
          string choice;
          cin >> choice;
          if (choice == "yes")
          {
              int required;
              cout << "Enter the number of books you want to buy: ";
              cin >> required;
              for (int i = 0; i < n; i++)
              {

                  if (BookCollection[i].bookName == title && BookCollection[i].authorName == name)
                  {
                      if (BookCollection[i].stock < required)
                      {
                          cout << "Required number of books are not available" << endl;
                          return 0;
                      }
                      else
                      {

                          BookCollection[i].stock--;
                          cout << "Book is bought successfully" << endl;
                          cout << "Details of the book are as follows: " << endl;
                          printBookInfo(name, title, BookCollection, n);
                          break;
                      }
                  }
              }
          }
          else
          {
              return 0;
          }
      }
      else
      {
          cout << "Book is not available" << endl;
      }

      return 0;
  }
  ```

---

## Question - 4

- **A. How do the default constructors and destructors behave in an inheritance hierarchy?**
  **Constructor Calls:**
  - **Base Class Constructors:** When creating an object of a derived class, the constructors of all base classes are called first, starting from the most base class (top of the hierarchy) and working their way up to the derived class (bottom of the hierarchy). This ensures that the base class objects are properly initialized before the derived class object is constructed.
  - **Derived Class Constructor:** Finally, the constructor of the derived class is called.
    **Destructor Calls:**
  - **Reverse Order:** Destructors are called in the reverse order of constructors, starting from the derived class and working their way down to the most base class. This ensures that the derived class object's resources are cleaned up before the base class objects are destroyed.
- **B. Explain the difference between the private and protected members of a class.**
  | Aspect | Private Members | Protected Members |
  | --------------------------- | -------------------------------------------------------- | ------------------------------------------------------------------------------ |
  | Accessibility | Accessible only within the class where they are declared | Accessible within the class where they are declared and in its derived classes |
  | Access from Outside | Cannot be accessed by objects of the class from outside | Cannot be accessed by objects of the class from outside |
  | Access from Derived Classes | Cannot be accessed by derived classes | Can be accessed by derived classes |
  | Encapsulation | Used to encapsulate internal implementation details | Used when inheritance and polymorphism require access to certain members |
  | Example | class MyClass { private: int privateVar; }; | class Base { protected: int protectedVar; }; |
- **C. An educational institution wishes to maintain a database of its employees. The database is divided into a number of classes whose hierarchical relationships are as follows: there is a super class (base class) called staff which has attributes code and name. Teacher is another class which has attributes subject, publication and officer is also a class which has an attribute grade. Typist is a class that has attribute speed. Teacher, officer and typist are the subclasses of staff. Regular and casual which has overline an attribute daily wages are the subclass of typist. Specify all the classes and define functions to create the database and retrieve individual information as and when required.**

---

## Question - 5

- **A. When do we make a virtual function "pure"? What are the implications of making a function a pure virtual function?**
  We make a virtual function "pure" when we want to define an interface in a base class that must be implemented by derived classes, but the base class itself cannot provide a meaningful implementation for that function. Pure virtual functions are essential for defining abstract classes and enabling polymorphism in object-oriented programming.
  **The implications of making a function a pure virtual function are -**
  - Pure virtual functions enforce mandatory implementation in derived classes.
  - They enable polymorphism and promote code reusability through abstract interfaces.
  - Objects cannot be directly created from abstract base classes with pure virtual functions.
- **B. What is an inline function? When will you make a function inline?**
  An inline function is a function that is declared with the `inline` keyword. Its used for those small function which are called frequently.
  We use inline function considering this-
  - Smaller function size
  - Functions those are called frequently.
  - Function with simple logic and few dependencies so that it easier the compiler to optimize and efficient.
- **C. Write a class named GradesCount, to read a list of grades from the keyboard (integer numbers in the range 0 to 100). Prompt the user with "Please enter a grade between 0 to 100 or -1 to quit:" each time before reading the next integer. Store each grade in a A, B, C, D or F Vector as follows: 90 to 100 = A, 80 to 89 = B, 70 to 79 = C, 60 to 69 = D, and 0 to 59 = F. (Hint: You cannot store int as Vector elements, but you can store Integers.) Output the total number of grades entered, the number of A, B, C, D and F, and a list of the A's.**

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  class GradeCount
  {
  public:
      vector<int> grades;
      void readGrade()
      {
          int grade;
          cout << "Please enter a grade between 0 to 100 or -1 to quit: ";
          cin >> grade;

          while (grade != -1)
          {
              if (grade >= 0 && grade <= 100)
              {
                  grades.push_back(grade);
                  cout << "Grade entered successfully." << endl;
              }
              else
              {
                  cout << "Invalid grade. Please enter a grade between 0 to 100." << endl;
              }
              cout << "Please enter a grade between 0 to 100 or -1 to quit: ";
              cin >> grade;
          }
      }

      void calculateGrade()
      {
          int totalGrades = grades.size();
          int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;

          for (int grade : grades)
          {
              if (grade >= 90 && grade <= 100)
              {
                  countA++;
              }
              else if (grade >= 80 && grade <= 89)
              {
                  countB++;
              }
              else if (grade >= 70 && grade <= 79)
              {
                  countC++;
              }
              else if (grade >= 60 && grade <= 69)
              {
                  countD++;
              }
              else
              {
                  countF++;
              }
          }
          cout << "Total number of grades entered: " << totalGrades << endl;
          cout << "Number of A grades: " << countA << endl;
          cout << "Number of B grades: " << countB << endl;
          cout << "Number of C grades: " << countC << endl;
          cout << "Number of D grades: " << countD << endl;
          cout << "Number of F grades: " << countF << endl;
      }
      void displayGrade()
      {
          cout << "List of A grades:" << endl;
          for (int grade : grades)
          {
              if (grade >= 90 && grade <= 100)
              {
                  cout << grade << endl;
              }
          }
      }
  };
  int main()
  {
      GradeCount gc;
      gc.readGrade();
      gc.calculateGrade();
      gc.displayGrade();
      return 0;
  }
  ```

---

## Question - 6

- **A. How do we achieve function overloading? On what basis, the compiler distinguishes between a set of overloaded functions having the same name.**
  Function overloading allows you to define multiple functions with the same name but with different characteristics in the same scope. The compiler then chooses the appropriate function to call based on the types and number of arguments provided during the function call.
  The compiler distinguish functions based on function signature. Following elements -
  - **Function name**
  - **Number of arguments**
  - **Order of arguments**
  - **Types of arguments**
    When a function is called, the compiler analyzes the arguments provided in the call. It then compares the arguments with the signatures of all overloaded functions with the same name in the current scope. Then the compiler selects the function whose signature has the **closest match** to the arguments provided in the call.
- **B. Explain the difference between the following two uses of the indirection operator *: int *q=p; n=**p;\*\*
  - The first usage **`int *q = p;`** involves declaration and assignment of a pointer variable.
  - The second usage **`n = *p;`** involves dereferencing a pointer to access the value it points to.
    | Aspect | int \*q = p; | n = \*p; |
    | ------------------------------- | -------------------------------------------------------------- | ------------------------------------------------------------------------- |
    | Purpose | Declaration and assignment of a pointer variable | Dereferencing a pointer to access its value |
    | Indirection Operator (\*) Usage | Used in declaration statement to declare a pointer variable q | Used as a dereferencing operator to access the value pointed to by p |
    | int \*q | Declares q as a pointer to an integer | N/A |
    | Initialization | = p initializes q with the value of another pointer variable p | N/A |
    | Result | q holds the same memory address as p | The value stored at the memory address pointed to by p is assigned to n |
    | Explanation | Typical pointer declaration and assignment statement | Typical usage of dereferencing a pointer to access the value it points to |
- **C. What is a friend function? What is the difference between a friend function of a class and a member function of a class?**
  A friend function is a function that is **granted special access** to the private and protected members of a class, even though it is not formally a member of the class itself. It can access and manipulate data of that class.
  | features | Friend Function | Member Function |
  | ------------------------- | -------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------- |
  | Declaration | Defined outside the class, but declared with the friend keyword inside the class | Defined inside the class |
  | Access to Private Members | Has access to all private and protected members of the class | Has access to all members of the class, including private and protected members |
  | Invocation | Can be invoked like a normal function, passing objects of the class as arguments | Accessed using object of the class and the member access operator (. or ->) |
  | Implicit this Pointer | Does not have an implicit this pointer, as it is not a member of the class | Has an implicit this pointer, which points to the object invoking the member function |
  | Overloading | Can be overloaded like regular functions | Can be overloaded like regular member functions |
  | Inheritance | Not inherited by derived classes | Inherited by derived classes |
  | Access Control | Not subject to access control of the class | Subject to access control of the class |
- **D. Create two classes DM and DB which store the value of distances. DM stores distance in meters and centimeters and DB in feet and inches. Write a program that can read values for the class objects and add one object of DM with another object of DB. Use a friend function to carry out the addition operation. The object that stores the results may be a DM or DB object, depending on the units in which the result are required. The display should be in the format of feet and inches or meters and centimeters depending on the object on display.**

---

## Question - 7

- **A. What is a virtual function? Why do we need virtual function? Explain with example.**
  A virtual function is a member function of a class that is declared with the **`virtual`** keyword and is intended to be overridden in derived classes.
  We use virtual function for -
  - **Polymorphism**: Virtual functions allow the appropriate derived class implementation to be invoked dynamically at runtime, based on the actual type of the object being pointed to or referenced.
  - **Function Overriding**: Function overriding allows for the implementation of specific functionality tailored to the requirements of individual derived classes. It facilitates the creation of a hierarchy of classes with varying behavior while still maintaining a common interface through the base class.
- **B. Class D is derived from class B. The class D doesn't not contain any data members of its own. Does the class D require constructors? If yes, why?**
  **Yes,** even though class D doesn't have any data members of its own, it still requires constructors. This is because class D inherits from class B, and the constructor of the derived class (D) is responsible for initializing the base class (B) object that it implicitly contains.
  When a derived class is instantiated, constructors of both the derived class and its base class are called to ensure that all parts of the object are properly initialized. If the base class has constructors that require arguments, the derived class must provide its own constructors to ensure proper initialization.
- **C. What does this pointer point to? What are the applications of this pointer?**
  The **`this`** pointer in C++ is a special pointer that points to the object for which the member function is invoked. It is an implicit parameter to all member functions and is used to access the object's members within the member function.
  The applications of **`this`** are -
  - Accessing Object Members
  - Disambiguating Shadowed Names
  - Returning Reference to Calling Object
  - Passing Object as Argument
- **D. What is the property of static variable and static function? Briefly explain with example.**
  **Static Variables**: They are declared using `static` keyword inside a function or at the global scope. They retain their value between function calls and initialized only once at the start of the program execution. They can be accessed only within the scope in which they are declared.
  **Static Function:** Static member functions are declared using the **`static`** keyword inside a class. They can be called without an object of the class, using the class name followed by the scope resolution operator (**`::`**). They cannot access non-static data members or call non-static member functions directly, as they do not have a **`this`** pointer. They can access only static data members and call other static member functions of the class.

---

## Question - 8

- **A. What is generic programming? How it is implemented in C++?**
- **B. What is an exception? Why we need to use exception handling? What is the difference between error and exception?**
- **C. A palindrome is a word or phrase that reads the same forward or backwards. Write a recursive method that returns a boolean value indicating if its only String argument is a palindrome or not. The method must be recursive and have the following signature: `public static boolean isPalindrome(string arg)` In testing for palindrome you should ignore upper/lower case as well as whitespace. That is, the following phrases should be legal palindromes.**
