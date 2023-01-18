#include <iostream>
#include <math.h>
using namespace std;
int fact(int a)
{
    if (a == 1 || a == 0)
    {
        return 1;
    }
    return a * fact(a - 1);
}
int main()
{
    cout<<"\n\n-------------------------     WELCOME TO OUR CALCULATOR PROGRAM     ----------------------------\n\n";

    cout << "\n****************** Enter 0 for Quit the Program ****************\n\n";

    cout << "Enter 1 for Addition\n";
    cout << "Enter 2 for Substraction\n";
    cout << "Enter 3 for Multiplication\n";
    cout << "Enter 4 for Division\n";
    cout << "Enter 5 for Power\n";
    cout << "Enter 6 for Factorial\n";
    cout << "Enter 7 for Square\n";
    cout << "Enter 8 for Cube\n";
    cout << "Enter 9 for SquareRoot\n\n";

    while (1)
    {
        cout << "Enter the operation you want to do : ";
        int k;
        cin >> k;

        switch (k)
        {

        case 0:
            exit(0);
            break;
        case 1:
            cout << "Enter any 2 numbers for Addition : ";
            int a, b;
            cin >> a >> b;
            cout << "\nThe Sum of " << a << " and " << b << " is " << a + b << endl;
            break;
        case 2:
            cout << "Enter any 2 numbers for Subtraction : ";
            int a1, b1;
            cin >> a1 >> b1;
            cout << "\nThe Subtraction of " << a1 << " and " << b1 << " is " << a1 - b1 << endl;
            break;
        case 3:
            cout << "Enter any 2 numbers for Multiplication : ";
            int a2, b2;
            cin >> a2 >> b2;
            cout << "\nThe Multiplication of " << a2 << " and " << b2 << " is " << a2 * b2 << endl;
            break;
        case 4:
            cout << "Enter any 2 numbers for Division : ";
            int a3, b3;
            cin >> a3 >> b3;
            cout << "\nThe Division of " << a3 << " and " << b3 << " is " << a3 / b3 << endl;
            break;
        case 5:
            cout << "Enter any 2 numbers for taking Power : ";
            int a4, b4;
            cin >> a4 >> b4;
            cout << "\nThe Power of " << a4 << " of " << b4 << " is " << pow(a4, b4) << endl;
            break;
        case 6:
            cout << "Enter a numbers for taking  Factorial: ";
            int a5;
            cin >> a5;
            cout << "\nThe Factorial of " << a5 << " is " << fact(a5) << endl;
            break;
        case 7:
            cout << "Enter a numbers for taking square : ";
            int h;
            cin >> h;
            cout << "\nThe square of " << h << " is " << (a * a) << endl;
            break;
        case 8:
            cout << "Enter a numbers for taking cube : ";
            int j;
            cin >> j;
            cout << "\nThe cube of " << j << " is " << (j * j * j) << endl;
            break;
        case 9:
            cout << "Enter a numbers for taking SquareRoot : ";
            int c;
            cin >> c;
            cout << "\nThe SquareRoot of " << a << " is " << sqrt(c) << endl;
            break;
        default:
            cout << "\n******************      You have entered wrong operation !!!         *******************\n";
            break;
        }
    }

    return 0;
}