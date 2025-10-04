#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

// //problem 1
// float product (float x, float y) {
//     return x * y;
// }
// int main() {
//     float x,y;
//     cout << "Please enter the first number: ";
//     cin >> x;
//     cout << "Please enter the second number: ";
//     cin >> y;
//     cout << product (x,y) << endl;
//     cout << "rounded: " << round(product (x,y)) << endl;
// }

// //problem 2
// void linearaccelaration(double v1, double v2, double t) {
//     if (t == 0) {
//         cout << "Error: Time is not zero!" << endl;
//     } else {
//          cout << "Acceleration: " << (v1-v2)/t << endl;
//      }
// }
// int main() {
//     double v1, v2, t;
//     cin >> v1 >> v2 >> t;
//     linearaccelaration(v1, v2, t);
//     return 0;
// }

// //problem 3
// void fun() {
//     double radius;
//     cout << "Enter the radius of the circle: ";
//     cin >> radius;
//     double circumference = 2 * M_PI * radius;
//     double area = M_PI * radius * radius;
//     cout << "The area of the circle is: " << area << endl;
//     cout << "The circumference is: " << circumference << endl;
// }
// int main() {
//  cout << "Circle calculations: "<< endl;
//  fun();
//     return 0;
// }

////problem 4
//void fun() {
//double a;
//double b;
//cout << "Enter the first parameter: ";
//cin >> a;
//cout << "Enter the second parameter: ";
//cin >> b;
//double perimeter = (a+b)*2;
//cout << "The perimeter is " << perimeter << endl;
//double area = (a+b)*(a+b)*2;
//cout << "The area is " << area << endl;
//}
//int main() {
//cout << "Rectangle calculations: " << endl;
//fun();
//return 0;
//}

////problem 5
//void swapIntegers(int& a, int& b) {
    //a = a ^ b;
    //b = a ^ b;
    //a = a ^ b;
//}
//int main() {
    //int x, y;
    //cout << "Enter the first number: ";
    //cin >> x;
    //cout << "Enter the second number: ";
    //cin >> y;
//cout << "Before swap: x = " << x << ", y = " << y << endl;
    //swapIntegers(x, y);
//cout << "After swap: x = " << x << ", y = " << y << endl;
//return 0;
//}

//problem 6
/*long long Factorial(int n = 1) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
int main() {
    int num;
    cin >> num;
    cout << Factorial(num);

    return 0;
}

//problem 7
int gcd(int num1, int num2) {
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}
int main() {
    int a, b;
    cin >> a >> b;

    cout << "GCD: " << gcd(a, b) << endl;
    return 0;
}

//problem 8
int min(int a, int b, int c) {
    if (a < b and a < c) {
        return a;
    }
    else if (b < c and b < a) {
        return b;
    }
    else {
        return c;
    }
}

int max(int a, int b, int c) {
    if (a > b and a > c) {
        return a;
    } else if (b > c and b > a) {
        return b;
    }
    else {
        return c;
    }
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << "Min is: " << min(a, b, c) << endl;
    cout << "Max is: " << max(a, b, c) << endl;
}

//problem 9
int sum(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int product(int a, int b) {
    return a * b;
}
double division(int a, int b) {
    if (b == 0) {
        cout << " Error: Division by zero! " << endl;
        return 0;
    }
    return (double)a / b;
}
int main() {
    int num1, num2;
    char op;
    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Enter Second Number: ";
    cin >> num2;
    cout << "Enter Operator: ";
    cin >> op;
    switch (op) {
        case '+':
            cout << sum(num1, num2) << endl;
            break;
        case '-':
            cout << subtract(num1, num2) << endl;
           break;
        case '*':
            cout << product(num1, num2) << endl;
            break;
        case '/':
            cout << division(num1, num2) << endl;
            break;
    }
    return 0;
} */

//problem 10
int getTriangularNumber(int n) {
    return n * (n + 1) / 2;
}
int main() {
    for (int i = 1; i <= 75; i++) {

    }
    return 0;
}