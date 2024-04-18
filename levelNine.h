#ifndef LEVELNINE_H
#define LEVELNINE_H
#include "circuitLevel.h"
#include <vector>
#include <functional>
#include <string>
using namespace std;
class LevelNine: public CircuitLevel {
private:
    bool firstBit;
    bool secondBit;
    bool thirdBit;
    bool fourthBit;
    string userGateSelected1;
    string userGateSelected2;
    string userGateSelected3;
public:
    LevelNine();
    void setInput(std::vector<bool> inputs) override;
    void computeOutput() override;
    void setFunction(string gate);
    void setUserGateSelected1(string gateSelected);
    void setUserGateSelected2(string gateSelected);
    void setUserGateSelected3(string gateSelected);
};

#endif // LEVELNINE_H
