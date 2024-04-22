#ifndef LEVELEIGHT_H
#define LEVELEIGHT_H

#include "circuitLevel.h"
#include <vector>
#include <string>

using namespace std;

/**
 * @author Joseph Corbeil, Johnny Song, Ezekiel Jaramillo, Ahmed Zahran, Raj Reddy, Joel Ronca
 * @date April. 22, 2024
 * @name levelEight h file for assignment9
 * This h file contains the outlined methods for use within the circuit level eight.
*/
class LevelEight: public CircuitLevel {
private:
    /// @brief first input of the user
    bool firstBit;

    /// @brief second input of the user
    bool secondBit;

    /// @brief third input of the user
    bool thirdBit;

    /// @brief fourth input of the user
    bool fourthBit;

    /// @brief first user selected gate on the circuit
    string userGateSelected1;

    /// @brief second user selected gate on the circuit
    string userGateSelected2;

    /// @brief third user selected gate on the circuit
    string userGateSelected3;
public:
    /// @brief Constructor that initializes the bits to false and sets the preset gate
    LevelEight();

    /// @brief Uses a vector of inputs from the user and sets them in the model
    /// @param vector of boolean user inputs
    void setInput(std::vector<bool> inputs) override;

    /// @brief Computes the output of the levels circuit specific to this level using
    /// the user inputs.
    void computeOutput() override;

    /// @brief Sets the types of the gates of this circuit in the model using the
    /// user selected gates from the front end.
    /// @param vector of strings as the gate types
    void setGateTypes(const std::vector<std::string>&) override;
};

#endif // LEVELEIGHT_H
