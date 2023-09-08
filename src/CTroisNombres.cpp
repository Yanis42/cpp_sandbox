#include "CTroisNombres.h"
#include <iostream>

using namespace std;

CTroisNombres::CTroisNombres() {
    nb1 = 0;
    nb2 = 0;
    nb3 = 0;
}

CTroisNombres::~CTroisNombres() {
}

short CTroisNombres::getNb1() {
    return nb1;
}

short CTroisNombres::getNb2() {
    return nb2;
}

short CTroisNombres::getNb3() {
    return nb3;
}

void CTroisNombres::setNb1(short val) {
    nb1 = val;
}

void CTroisNombres::setNb2(short val) {
    nb2 = val;
}

void CTroisNombres::setNb3(short val) {
    nb3 = val;
}

short CTroisNombres::getSmallestNbr() {
    if ((nb1 < nb2) && (nb1 < nb3)) {
        return nb1;
    }

    if ((nb2 < nb1) && (nb2 < nb3)) {
        return nb2;
    }

    if ((nb3 < nb2) && (nb3 < nb1)) {
        return nb3;
    }

    return -1;
}

short CTroisNombres::getBiggestNbr() {
    if ((nb1 > nb2) && (nb1 > nb3)) {
        return nb1;
    }

    if ((nb2 > nb1) && (nb2 > nb3)) {
        return nb2;
    }

    if ((nb3 > nb2) && (nb3 > nb1)) {
        return nb3;
    }

    return -1;
}

short CTroisNombres::getMiddleNbr() {
    if (((nb2 == getSmallestNbr()) && (nb3 == getBiggestNbr())) || ((nb2 == getBiggestNbr()) && (nb3 == getSmallestNbr()))) {
        return nb1;
    }

    if (((nb1 == getSmallestNbr()) && (nb3 == getBiggestNbr())) || ((nb1 == getBiggestNbr()) && (nb3 == getSmallestNbr()))) {
        return nb2;
    }

    if (((nb1 == getSmallestNbr()) && (nb2 == getBiggestNbr())) || ((nb1 == getBiggestNbr()) && (nb2 == getSmallestNbr()))) {
        return nb3;
    }

    return -1;
}
