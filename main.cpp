#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdio.h>
#include <cstdlib>
#include <ctime>
using namespace std;

 //problem 1
 float product (float x, float y) {
     return x * y;
 }
 int main() {
     float x,y;
     cout << "Please enter the first number: ";
     cin >> x;
     cout << "Please enter the second number: ";
     cin >> y;
     cout << product (x,y) << endl;
     cout << "rounded: " << round(product (x,y)) << endl;
 }

//problem 2
float linearaccelaration(float x, float y, float z) {
     return (y-x) / z;
 }
 int main() {
     float v1, v2, t;
     cin >> v1 >> v2 >> t;
    cout << linearaccelaration(v1, v2, t) << endl;
     linearaccelaration(v1, v2, t);
   return 0;
 }

//problem 3
 void fun() {
     double radius;
     cout << "Enter the radius of the circle: ";
     cin >> radius;
     double circumference = 2 * M_PI * radius;
     double area = M_PI * radius * radius;
     cout << "The area of the circle is: " << area << endl;
     cout << "The circumference is: " << circumference << endl;
 }
 int main() {
     cout << "Circle calculations: "<< endl;
 fun();
     return 0;
 }

//problem 4
void fun() {
double a;
double b;
cout << "Enter the first parameter: ";
cin >> a;
cout << "Enter the second parameter: ";
cin >> b;
double perimeter = (a+b)*2;
cout << "The perimeter is " << perimeter << endl;
double area = (a+b)*(a+b)*2;
cout << "The area is " << area << endl;
}
int main() {
cout << "Rectangle calculations: " << endl;
fun();
return 0;
}

//problem 5
void swapIntegers(int& a, int& b) {
    a = a + b;
    b = a - b;
    a = a - b;
}
int main() {
    int x, y;
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
cout << "Before swap: x = " << x << ", y = " << y << endl;
    swapIntegers(x, y);
cout << "After swap: x = " << x << ", y = " << y << endl;
return 0;
}

//problem 6
long long Factorial(int n = 1) {
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
}

//problem 10
int getTriangularNumber(int n) {
    return n * (n + 1) / 2;
}
int main() {
    for (int i = 1; i <= 75; i++) {
        cout << getTriangularNumber(i) << endl;
    if (i % 5 == 0)
        cout << endl;
    }
    return 0;
}

//problem 11
void displayEven(int number) {
    int a = 0, count = 0;
    int temp = number;
    while (temp > 0) {
        a = a * 10 + (temp % 10);
    temp = temp / 10;
        count++;
    }
    bool found = false;
    while (a > 0) {
      int digit = a % 10;
    if (digit % 2 == 0) {
        cout << digit << " ";
     found = true;
    }
      a /= 10;
    }
    if (!found) {
        cout << "No even digits!";
    }
    cout << endl;
}
int main() {
  int n;
  cin >> n;
  cout << "Even digits: ";
  displayEven(n);
  return 0;
}

//problem 12
int cubeOfDigits(int number) {
    int sum = 0;
    int temp = number;
    while (temp > 0) {
     int digit = temp % 10;
     sum += pow(digit, 3);
     temp /= 10;
    }
    return sum;
}

void isArmstrong(int sum, int number) {
    if (sum == number) {
        cout << number << " is Armstrong number" << endl;
    } else {
        cout << number << " is not Armstrong number" << endl;
    }
}
int main() {
    int num;
    cin >> num;
    int sum = cubeOfDigits(num);
    isArmstrong(sum, num);
    return 0;
}

//problem 13
int numberOfDaysInFebruary(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 29;
    } else {
        return 28;
    }
}
int main() {
  cout << "Year Days in February" << endl;
  cout << "--------------------" << endl;
    for (int year = 1985; year <= 1993; year++) {
      cout << year << " " << numberOfDaysInFebruary(year) << endl;
  }
    return 0;
}

//problem 14
double fiv(double amt, double mir, int yrs) {
    return amt * pow(1+mir, yrs * 12);
}
int main() {
double amt, air;
int yrs;
cout << "Amount: ";
cin >> amt;
cout << "Annual rate(%): ";
cin >> air;
cout << "Years: ";
cin >> yrs;
double mir = air / 1200;
double fv = fiv(amt, mir, yrs);
cout << "Future value: " << fv << endl;
return 0;
}

//problem 15
void printASCII(char ch1,char ch2, int numberPerLine) {
    int count = 0;
    for (char ch = ch1; ch <= ch2; ch++) {
        cout << setw(3) << ch << " = " << setw(3) << int(ch) << " ";
        count++;
     if (count % numberPerLine == 0) {
         cout << endl;
     }
    }
    cout << endl;
}
int main() {
cout << "ASCII values from 'a' to 'm': " << endl;
    printASCII('a','m',6);
return 0;
}

//problem 16
void printMatrix(int n) {

srand(time(0));

for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
int value = rand() % 1001;
cout << setw(5) << value;
}
cout << endl;
}
}

int main() {
int n;
cout << "Enter n: ";
cin >> n;

cout << "\nRandom " << n << "x" << n << " matrix:\n";
 printMatrix(n);
return 0;
}

//problem 17
bool isPalindrome(int num) {
    int original = num, reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int count = 0, num = 2;
    while (count < 50) {
        if (num % 2 == 0 && isPalindrome(num)) {
            cout << setw(6) << num;
            count++;
            if (count % 5 == 0) {
                cout << endl;
            }
        }
        num += 2;
    }
    return 0;
}

//problem 18
double pi = 3.1415;
double e = 2.7182;

double seriesA(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += pi * pow(2, -i);
    }
    return sum;
}

double seriesB(int n) {
    double product = 1;
    for (int i = 1; i <= n; i++) {
        product *= (pi / 2) * i;
    }
    return product;
}

double seriesC(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        double term = pow(-2, i) / (2 * pi + i);
        sum += term;
    }
    return sum;
}

double seriesD(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (2 * i * pi) / pow(e, i);
    }
    return sqrt(sum);
}

int main() {
    int n = 5;
    cout << "Series A: " << seriesA(n) << endl;
    cout << "Series B: " << seriesB(n) << endl;
    cout << "Series C: " << seriesC(n) << endl;
    cout << "Series D: " << seriesD(n) << endl;
    return 0;
}

//problem 19
void displaySortedNumber(double a, double b, double c) {
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);

    cout << a << " " << b << " " << c << endl;
}

int main() {
    double a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    displaySortedNumber(a, b, c);
    return 0;
}

//problem 20
string convertMillis(long millis) {
    long totalSeconds = millis / 1000;
    long seconds = totalSeconds % 60;
    long totalMinutes = totalSeconds / 60;
    long minutes = totalMinutes % 60;
    long hours = totalMinutes / 60;

    return to_string(hours) + ":" + to_string(minutes) + ":" + to_string(seconds);
}

int main() {
    long millis;
    cout << "Enter milliseconds: ";
    cin >> millis;
    cout << convertMillis(millis) << endl;
    return 0;
}

//problem 21
int main() {
    time_t now = time(0);
    char* dt = ctime(&now);
    cout << "Current date and time is: " << dt;
    return 0;
}

//problem 22
double area(int n, double side) {
    return (n * side * side) / (4 * tan(M_PI / n));
}

int main() {
    int n;
    double side;
    cout << "Enter the number of sides: ";
    cin >> n;
    cout << "Enter the side: ";
    cin >> side;
    cout << "The area of the polygon is " << area(n, side) << endl;
    return 0;
}

//problem 23
int rollDice() {
    return rand() % 6 + 1;
}

void playCraps() {
    srand(time(0));
    int dice1 = rollDice();
    int dice2 = rollDice();
    int sum = dice1 + dice2;

    cout << "You rolled " << dice1 << " + " << dice2 << " = " << sum << endl;

    if (sum == 2  sum == 3  sum == 12) {
        cout << "You lose" << endl;
    } else if (sum == 7 || sum == 11) {
        cout << "You win" << endl;
    } else {
        cout << "point is " << sum << endl;
        int point = sum;

        while (true) {
            dice1 = rollDice();
            dice2 = rollDice();
            sum = dice1 + dice2;
            cout << "You rolled " << dice1 << " + " << dice2 << " = " << sum << endl;

            if (sum == 7) {
                cout << "You lose" << endl;
                break;
            } else if (sum == point) {
                cout << "You win" << endl;
                break;
            }
        }
    }
}

int main() {
    playCraps();
    return 0;
}

//problem 24
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

bool isPalindrome(int num) {
    return num == reverseNumber(num);
}

int main() {
    int count = 0, num = 13;
    while (count < 100) {
        int reversed = reverseNumber(num);
        if (isPrime(num) && isPrime(reversed) && !isPalindrome(num)) {
            cout << setw(6) << num;
            count++;
            if (count % 10 == 0) {
                cout << endl;
            }
        }
        num++;
    }
    return 0;
}

//problem 25
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    cout << "Prime Number\tSum of digits" << endl;
    int count = 0, num = 2;
    while (count < 25) {
        if (isPrime(num) && isPrime(sumOfDigits(num))) {
            cout << num << "\t\t" << sumOfDigits(num) << endl;
            count++;
        }
        num++;
    }
    return 0;
}

//problem 26
int bin2Octal(int binary) {
    int decimal = 0, octal = 0, i = 0;

    while (binary > 0) {
        decimal += (binary % 10) * pow(2, i);
        binary /= 10;
        i++;
    }

    i = 1;
    while (decimal > 0) {
        octal += (decimal % 8) * i;
        decimal /= 8;
        i *= 10;
    }

    return octal;
}

int main() {
    int binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    cout << "Octal: " << bin2Octal(binary) << endl;
    return 0;
}