#ifndef GAMEMODEL_H
#define GAMEMODEL_H

#include <vector>
#include "circuitLevel.h"
#include <vector>
#include <QObject>
#include <memory>
class GameModel : public QObject {
    Q_OBJECT

private:
    int currentLevel;
    std::vector<std::unique_ptr<CircuitLevel>> levels;
     void computeLevelCircuit(int currentLevel);
    bool hasEmptyString(const std::vector<std::string>& gateTypes);
public:
    explicit GameModel(QObject *parent = nullptr);

signals:
    void circuitCompleted(bool completed);
    void correctGate(bool correctGate);
    void emptyGate();

public slots:
    void onInputReceived(std::vector<bool>inputs);
    void setGateDropped(const std::vector<std::string>& gateTypese);
    void checkUserGate(string gate);
    void onGetCurrentLevel(int level);



};

#endif // GAMEMODEL_H
