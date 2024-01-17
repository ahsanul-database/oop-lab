
<b>Input Operator: </b>
- Syntax:    ` cin >> variable `
- ` >> `  &nbsp; is known as extractor(get from operator).

<b>Output Operator </b>
- Syntax: `cout << variable/string` ;
- ` << `   &nbsp; is known as insertion operator. It inserts the value of "variable" into the output stream, which can be a console or file etc.

<b> Cascading : </b>
- The multiple use of ` << ` or ` >> ` in one statement is called cascading.
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


