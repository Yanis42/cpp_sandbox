#include "CTroisNombres.h"
#include <iostream>

using namespace std;

int main() {
    CTroisNombres troisNbr;
    short val1, val2, val3;

    cout << "val1: ";
    cin >> val1;
    cout << "val2: ";
    cin >> val2;
    cout << "val3: ";
    cin >> val3;

    troisNbr.setNb1(val1);
    troisNbr.setNb2(val2);
    troisNbr.setNb3(val3);

    cout << "smallest value: " << troisNbr.getSmallestNbr() << endl;
    cout << "average value: " << troisNbr.getMiddleNbr() << endl;
    cout << "biggest value: " << troisNbr.getBiggestNbr() << endl;
    cout << "nb1: " << troisNbr.getNb1() << endl;
    cout << "nb2: " << troisNbr.getNb2() << endl;
    cout << "nb3: " << troisNbr.getNb3() << endl;
    return 0;
}
