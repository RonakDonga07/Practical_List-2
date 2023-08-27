#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double kilometers;

    cout << "Enter distance in kilometers: ";
    cin >> kilometers;

    double centimeters = kilometers * 100000;
    double meters = kilometers * 1000;
    double inches = kilometers * 39370;
    double feet = kilometers * 3281;

    cout << setprecision(2) << fixed;
    cout << setw(15) << setfill('-') << "Results" << setw(15) << setfill('-') << '-' << endl;
    cout << "Kilometers: " << setw(10) << kilometers << endl;
    cout << "Centimeters: " << setw(9) << centimeters << endl;
    cout << "Meters: " << setw(12) << meters << endl;
    cout << "Inches: " << setw(12) << inches << endl;
    cout << "Feet: " << setw(14) << feet << endl;

    return 0;
}
