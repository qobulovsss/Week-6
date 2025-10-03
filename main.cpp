#include <iostream>
#include <cmath>
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
void Factorial(int n = 1) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    int num;
    char choice;
cout << "Do you want to enter a number? (y/n): ";
    cin >> choice;
if (choice == 'y') {
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial of " << num << " = " << Factorial(num) << endl;
} else {
    cout << "No parameter. Factorial of 1 " << Factorial() << endl;
}
cout << "/nAlternative demonstration: " << endl;
cout << "Factorial(5) = " << Factorial(5) << endl;
cout << "Factorial() = " << Factorial() << endl;
    return 0;
}