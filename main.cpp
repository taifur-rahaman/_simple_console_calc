#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

//functions
void addition(){
    int a{0}, b{0};
    cout << "Enter two number to Add: ";
    cin >> a >> b;

    cout << a << " + " << b << " = " << a+b << endl;
}

void subtract(){
    int a{0}, b{0};
    cout << "Enter two number to Subtract: ";
    cin >> a >> b;

    cout << a << " - " << b << " = " << a-b << endl;
}

void multiply(){
    int a{0}, b{0};
    cout << "Enter two number to Multiply: ";
    cin >> a >> b;

    cout << a << " * " << b << " = " << a*b << endl;
}

void division(){
    int a{0}, b{0};
    cout << "Enter two number to Divide: ";
    cin >> a >> b;

    cout << a << " / " << b << " = " << a/b << endl;
}

void power(){
    int base{0}, exp{0};
    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent: ";
    cin >> exp;

    cout << base << "^" << exp << " = " << pow(base, exp) << endl;
}

void circle_area(){
    double pi = 3.14159;
    double radius{0};
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area_circle =  pi * pow(radius, 2);
    cout << "The area of the circle is " << area_circle << endl;
}

void square_area(){
    double side{0};
    cout << "Enter the side of the square: ";
    cin >> side;

    double area_square =  pow(side, 2);
    cout << "The area of the square is " << area_square << endl;
}

void rectangle_area(){
    double width{0}, length{0};
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;

    double area_rectangle =  width * length;
    cout << "The area of the rectangle is " << area_rectangle << endl;
}


void area(){
    int choice{0};

    cout << "\n\n1. Circle\n2. Square\n3. Rectangle\n" << endl;
    cout << "Enter your choice : ";
    cin >> choice;
    while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5){
        cout << "Invalid Input\n" << endl;
        cout << "\n\n1. Circle\n2. Square\n3. Rectangle\n" << endl;
        cout << "Enter your choice : ";
        cin >> choice;
    }

        switch (choice) {
            case 1:
                circle_area();
                break;
            case 2:
                square_area();
                break;
            case 3:
                rectangle_area();
                break;
            default:
                cout << "Invalid Input" << endl;
                break;
        }
}

int main(){

    int choice{0};
    cout << "Simple Console Calculator" << endl;

    cout << "\n\n1. Addition\n2. Subtract\n3. Multiply\n4. Divide\n5. Power\n6. Area\n0. Quit\n" << endl;
    cout << "Enter your choice : ";
    cin >> choice;
    while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6 && choice != 0 ){
        cout << "Invalid Input\n" << endl;
        cout << "1. Addition\n2. Subtract\n3. Multiply\n4. Divide\n5. Power\n6. Area\n0. Quit\n" << endl;
        cout << "Enter your choice : ";
        cin >> choice;
    }

    int flag{1};

    while(flag != 0) {

        switch (choice) {
            case 1:
                addition();
                break;
            case 2:
                subtract();
                break;
            case 3:
                multiply();
                break;
            case 4:
                division();
                break;
            case 5:
                power();
                break;
            case 6:
                area();
                break;
            case 0:
                cout << "Thank you for using the calculator\nGoodbye!!!" << endl;
                exit(0);
            default:
                cout << "Invalid Input" << endl;
                break;
        }
        cout << "Do you want to continue?\n1. Yes\n0. No\nEnter Your choice: ";
        cin >> flag;
        if (flag == 1){
            cout << "\n\n1. Addition\n2. Subtract\n3. Multiply\n4. Divide\n5. Power\n6. Area\n0. Quit\n" << endl;
            cout << "Enter your choice : ";
            cin >> choice;
        }
        else if (flag == 0){
            cout << "Thank you for using the calculator\nGoodbye!!!" << endl;
        }
    }

}