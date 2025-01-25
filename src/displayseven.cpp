#include "displayseven.hpp"

DisplaySeven::DisplaySeven(int segA, int segB, int segC, int segD,
        int segE, int segF, int segG, int segDP) {
    pins[0] = segA;
    pins[1] = segD;
    pins[2] = segE;
    pins[3] = segF;
    pins[4] = segC;
    pins[5] = segB;
    pins[6] = segG;
    pins[7] = segDP;
    setPinsOutput();
}

void DisplaySeven::displayBlank() {
    setHighLow(pins, blank);
}

void DisplaySeven::displayZero() {
    displayBlank();
    setHighLow(pins, topSeg);
    setHighLow(pins, bottomSeg);
    setHighLow(pins, leftSeg1);
    setHighLow(pins, leftSeg2);
    setHighLow(pins, rightSeg1);
    setHighLow(pins, rightSeg2);
}

void DisplaySeven::displayOne() {
    displayBlank();
    setHighLow(pins, rightSeg1);
    setHighLow(pins, rightSeg2);
}

void DisplaySeven::displayTwo() {
    displayBlank();
    setHighLow(pins, topSeg);
    setHighLow(pins, bottomSeg);
    setHighLow(pins, centerSeg);
    setHighLow(pins, leftSeg1);
    setHighLow(pins, rightSeg2);
}

void DisplaySeven::displayThree() {
    displayBlank();
    setHighLow(pins, topSeg);
    setHighLow(pins, bottomSeg);
    setHighLow(pins, centerSeg);
    setHighLow(pins, rightSeg1);
    setHighLow(pins, rightSeg2);
}

void DisplaySeven::displayFour() {
    displayBlank();
    setHighLow(pins, leftSeg2);
    setHighLow(pins, rightSeg1);
    setHighLow(pins, rightSeg2);
    setHighLow(pins, centerSeg);
}

void DisplaySeven::displayFive() {
    displayBlank();
    setHighLow(pins, topSeg);
    setHighLow(pins, bottomSeg);
    setHighLow(pins, leftSeg2);
    setHighLow(pins, centerSeg);
    setHighLow(pins, rightSeg1);
}

void DisplaySeven::displaySix() {
    displayBlank();
    setHighLow(pins, topSeg);
    setHighLow(pins, bottomSeg);
    setHighLow(pins, leftSeg1);
    setHighLow(pins, leftSeg2);
    setHighLow(pins, centerSeg);
    setHighLow(pins, rightSeg1);
}

void DisplaySeven::displaySeven() {
    displayBlank();
    setHighLow(pins, topSeg);
    setHighLow(pins, rightSeg1);
    setHighLow(pins, rightSeg2);
}

void DisplaySeven::displayEight() {
    displayBlank();
    setHighLow(pins, topSeg);
    setHighLow(pins, bottomSeg);
    setHighLow(pins, leftSeg1);
    setHighLow(pins, leftSeg2);
    setHighLow(pins, rightSeg1);
    setHighLow(pins, rightSeg2);
    setHighLow(pins, centerSeg);
}

void DisplaySeven::displayNine() {
    displayBlank();
    setHighLow(pins, topSeg);
    setHighLow(pins, bottomSeg);
    setHighLow(pins, leftSeg2);
    setHighLow(pins, rightSeg1);
    setHighLow(pins, rightSeg2);
    setHighLow(pins, centerSeg);
}

void DisplaySeven::displayDash() {
    displayBlank();
    setHighLow(pins, centerSeg);
}

void DisplaySeven::displayDotPoint() {
    displayBlank();
    setHighLow(pins, dotPointSeg);
}

void DisplaySeven::setHighLow(const int pins[8], const int highLow[8]) {
    for (unsigned pin; pin < 8; pin++) {
        if (highLow[pin] != SKIP) {
            digitalWrite(pins[pin], highLow[pin]);
        }
    }
}

void DisplaySeven::setPinsOutput() {
    for (unsigned pin = 0; pin < 8; pin++) {
        if (pins[pin] > 0) {
            pinMode(pins[pin], OUTPUT);
        }
    }
}