<h1 align="center"> Chapter-2 : Beginning with CPP </h1>

## 2.2 Applications of C++

- **System Programming**: Writing system programs like operating systems, compilers, and interpreters.
- **Game Development**: Creating games using libraries such as SDL or OpenGL.
- **Web Development**: Using languages like PHP to create dynamic web pages.
- **Embedded Systems Programming**: Designing hardware for specialized applications (e.g., automotive control units)
- **Artificial Intelligence/Machine Learning**: Implementing AI algorithms in software.

## 2.3 A Simple C++ program

```
#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << "cout object is used to display the result or any other information on the screen, it takes * parameters which can be passed into it for displaying purpose." << endl;
    return 0;
}
```

This is a simple C++ program that includes the necessary header file `<bits/stdc++.h>` which includes all standard library headers. The `main()` function serves as the entry point for the program. It returns an integer value (usually `0`) indicating successful execution.</s>

<b>Namespace: </b> In C++, the "namespace" keyword is used to declare a scope for identifiers (variables).

> The `std` namespace contains standard library components provided by the C++ Standard Library. The `::std::cout << "Hello World!" <<s endl;` statement uses this namespace to access the object cout which represents the standard output stream.It's generally good practice to use the `std` prefix when referring to standard library objects and functions. This helps avoid naming conflicts with your own code.</s>

## 2.4 More C++ Statement

```
#include <bits/stdc++.h>
using namespace std;

int main()
{

    float n, m,avg;
    cout << "Enter two Numbers: ";
    cin >> n >> m;
    avg = (n + m) / 2;
    cout << "Average : " << avg << endl;

    return 0;
}

```

<b>Input Operator: </b>

- Syntax: `cin >> variable`
- `>>` &nbsp; is known as extractor(get from operator).

<b>Output Operator </b>

- Syntax: `cout << variable/string` ;
- `<<` &nbsp; is known as insertion operator. It inserts the value of "variable" into the output stream, which can be a console or file etc.

<b> Cascading : </b>

- The multiple use of `<<` or `>>` in one statement is called cascading.
<details>
<summary> An example of Cascading </summary>

```

cout << "Average : " << avg << endl;

```

</details>

## 2.5 An Example with Class

- A class is a user defined data structure which consists of variables and functions that can be used to group related pieces of code together. It allows us to create objects (a specific instance) of the class, giving each object its own set of member variables.

An example of using Input / Output operators with a class.Let's consider a class named 'Student'.

```

#include <bits/stdc++.h>
using namespace std;

class Student
{
    string name;
    int roll;

public:
    void input();
    void display();
};

void Student ::input()
{ // accessing member using scope resolution operator. must be added return type before class name.
    cout << "\nEnter the Name : ";
    getline(cin, name);
    cout << "Enter the Roll No. : ";
    cin >> roll;
}

void Student ::display()
{
    // you can do this way
    // cout << "\nName = "<< name ;
    // cout << "\nRoll No. = "<< roll ;

    // You can do print using cascading
    cout << "\nName = " << name << "\nRoll: " << roll << endl;
}

int main()
{
    Student s1, s2; // object creation
    cout << "\n\tStudent Details";
    cout << "\n------------------------------";
    cout << "\nEnter details of first student : ";
    s1.input(); // function call to take inputs from user for first student
    cout << "\n\nEnter details of second student : ";
    getchar(); // to avoid enter new line
    s2.input(); // function call to take inputs from user for second student
    cout << "\n\nDetails of First Student are as follows : \n";
    s1.display(); // function call to display the details of first student
    cout << "\n\nDetails of Second Student are as follows : \n";
    s2.display(); // function call to display the details of second student

    return 0;
}

```

