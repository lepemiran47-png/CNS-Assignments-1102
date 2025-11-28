#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate and display the roots
void findRoots(double a, double b, double c) {
    double discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        // Two real and distinct roots
        double root1 = (-b + sqrt(discriminant)) / (2*a);
        double root2 = (-b - sqrt(discriminant)) / (2*a);

        cout << "Roots are real and distinct:\n";
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }
    else if (discriminant == 0) {
        // One real and repeated root
        double root = -b / (2*a);

        cout << "Roots are real and equal:\n";
        cout << "Root = " << root << endl;
    }
    else {
        // Complex roots
        double realPart = -b / (2*a);
        double imagPart = sqrt(-discriminant) / (2*a);

        cout << "Roots are complex:\n";
        cout << "Root 1 = " << realPart << " + " << imagPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imagPart << "i" << endl;
    }
}

int main() {
    double a, b, c;

    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "Error: 'a' cannot be zero. Not a quadratic equation." << endl;
    } else {
        findRoots(a, b, c);
    }

    return 0;
}
