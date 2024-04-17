// LevelFiveXor
#ifndef LEVELFIVE_H
#define LEVELFIVE_H

#include "xorGate.h"
#include "circuitLevel.h"

class LevelFive: public CircuitLevel {
private:
    XorGate xorGate; // Used for calculating the carry

    bool inputA;
    bool inputB;
    bool result;

public:
    LevelFive();
    void setInput(bool a, bool b) override;
    void computeOutput() override;
    bool getResult() const override;
};

#endif // LEVELFIVE_H
