#include <iostream>
#include <cmath>
using namespace std;


enum triagleType { scalene, isoceles, equilateral, rightAngle};

bool isRightTriangle(double x, double y, double z) {
    double xPow2 = x * x;
    double yPow2 = y * y;
    double zPow2 = z * z;
    if (xPow2 + yPow2 == zPow2 || xPow2 + zPow2 == yPow2 || yPow2 + zPow2 == xPow2) {
        return true;
    }
    return false;
}

bool onKolmiollinen(double x, double y, double z, triagleType* tyyppi){

    if (((x + y) > z) && ((x + z) > y) && ((y + z) > x))
    {
        if (x == y && y == z) {
            *tyyppi = equilateral;
            return true;
        }
        else if (x == y || x == z || y == z) {
            *tyyppi = isoceles;
            return true;
        }
        else if (isRightTriangle(x, y, z)) {
            *tyyppi = rightAngle;
            return true;
        }
        else {
            *tyyppi = scalene;
            return true;
        }
    }
    return false;
}

void printTriangleType(triagleType tyyppi)
{
    switch (tyyppi)
    {
    case equilateral:
        cout << "Annetuista sivuista voidaan muodostaa tasasivuinen kolmio.";
        break;
    case isoceles:
        cout << "Annetuista sivuista voidaan muodostaa tasakylkinen kolmio.";
        break;
    case scalene:
        cout << "Annetuista sivuista voidaan muodostaa epäsäännöllinen kolmio.";
        break;
    case rightAngle:
        cout << "Annetuista sivuista voidaan muodostaa suorakulmainen kolmio.";
        break;
    default:
        cout << "Annetuista sivuista ei voida muodostaa kolmiota.";
        break;
    }
}

int main()
{

    setlocale(LC_ALL, "fi-FI");
    double side1, side2, side3;

    cout << "Anna 1. sivun pituus: ";
    cin >> side1;

    cout << "Anna 2. sivun pituus: ";
    cin >> side2;

    cout << "Anna 3. sivun pituus: ";
    cin >> side3;

    triagleType type;
    onKolmiollinen(side1, side2, side3, &type);
    printTriangleType(type);

    return 0;
}