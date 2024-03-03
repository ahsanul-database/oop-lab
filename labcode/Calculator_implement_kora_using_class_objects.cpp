#include <bits/stdc++.h>
using namespace std;

class Calculator
{
public:
    double add(double a, double b)
    {
        return a + b;
    }

    double subtract(double a, double b)
    {
        return a - b;
    }

    double multiply(double a, double b)
    {
        return a * b;
    }

    double divide(double a, double b)
    {
        if (b == 0)
        {
            cout << "Error: Division by zero" << endl;
            return 0;
        }
        return a / b;
    }
};
int main()
{
    double x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Choose operation: \n1. Add \n2. Subtract \n3. Multiply \n4. Divide\n5. Exit" << endl;
    int op;
    cin >> op;
    Calculator c;
    while (op != 5)
    {
        switch (op)
        {
        case 1:
            cout << c.add(x, y) << endl;
            break;
        case 2:
            cout << c.subtract(x, y) << endl;
            break;
        case 3:
            cout << c.multiply(x, y) << endl;
            break;
        case 4:
            cout << c.divide(x, y) << endl;
            break;
        default:
            cout << "Invalid operation" << endl;
        }
        cout << "Choose operation: \n1. Add \n2. Subtract \n3. Multiply \n4. Divide\n5. Exit" << endl;
        cin >> op;
    }

    return 0;
}