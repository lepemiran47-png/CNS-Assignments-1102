#include <iostream>
#include <cmath>
using namespace std;

void findRoots(double a, double b, double c) {
    double d = b*b - 4*a*c;

    if (d > 0) {
        double r1 = (-b + sqrt(d)) / (2*a);
        double r2 = (-b - sqrt(d)) / (2*a);
        cout << "The roots are real and different:\n";
        cout << "Root 1: " << r1 << "\n";
        cout << "Root 2: " << r2 << "\n";
    }
    else if (d == 0) {
        double r = -b / (2*a);
        cout << "The roots are real and equal:\n";
        cout << "Root: " << r << "\n";
    }
    else {
        double realPart = -b / (2*a);
        double imagPart = sqrt(-d) / (2*a);
        cout << "The roots are complex:\n";
        cout << "Root 1: " << realPart << " + " << imagPart << "i\n";
        cout << "Root 2: " << realPart << " - " << imagPart << "i\n";
    }
}

int main() {
    double a, b, c;

    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "This is not a quadratic equation.\n";
    } else {
        findRoots(a, b, c);
    }

    return 0;
}
