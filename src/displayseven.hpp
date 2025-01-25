#ifndef DISPLAYSEVEN_HPP
#define DISPLAYSEVEN_HPP

#include <Arduino.h>

#define SKIP 0x2

class DisplaySeven {
private:
    int pins[8];
    const int blank[8]        = {LOW,   LOW,   LOW,   LOW,   LOW,   LOW,   LOW,   LOW};
    const int topSeg[8]       = {HIGH,  SKIP,  SKIP,  SKIP,  SKIP,  SKIP,  SKIP,  SKIP};
    const int bottomSeg[8]    = {SKIP,  HIGH,  SKIP,  SKIP,  SKIP,  SKIP,  SKIP,  SKIP};
    const int leftSeg1[8]     = {SKIP,  SKIP,  HIGH,  SKIP,  SKIP,  SKIP,  SKIP,  SKIP};
    const int leftSeg2[8]     = {SKIP,  SKIP,  SKIP,  HIGH,  SKIP,  SKIP,  SKIP,  SKIP};
    const int rightSeg1[8]    = {SKIP,  SKIP,  SKIP,  SKIP,  HIGH,  SKIP,  SKIP,  SKIP};
    const int rightSeg2[8]    = {SKIP,  SKIP,  SKIP,  SKIP,  SKIP,  HIGH,  SKIP,  SKIP};
    const int centerSeg[8]    = {SKIP,  SKIP,  SKIP,  SKIP,  SKIP,  SKIP,  HIGH,  SKIP};
    const int dotPointSeg[8]  = {SKIP,  SKIP,  SKIP,  SKIP,  SKIP,  SKIP,  SKIP,  HIGH};
    void setPinsOutput();
    void setHighLow(const int pins[8], const int highLow[8]);
public:
    DisplaySeven(int segA, int segB, int segC, int segD,
        int segE, int segF, int segG, int segDP);
    void displayBlank();
    void displayZero();
    void displayOne();
    void displayTwo();
    void displayThree();
    void displayFour();
    void displayFive();
    void displaySix();
    void displaySeven();
    void displayEight();
    void displayNine();
    void displayDash();
    void displayDotPoint();
};
#endif