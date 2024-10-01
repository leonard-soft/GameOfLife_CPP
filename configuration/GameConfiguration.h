#ifndef GAMECONFIGURATION_H
#define GAMECONFIGURATION_H

#include "../validator/ValidArguments.h"

class GameConfiguration {
private:
    ValidArguments validArguments;
    int width{};
    int height{};
    std::string population;
    int speed{};
public:
    GameConfiguration();

    ValidArguments getValidArguments();
    int getWidth();
    int getHeight();
    std::string getPopulation();
    int getSpeed();

    void setValidArguments(ValidArguments validArguments);
    void setWidth(int width);
    void setHeight(int height);
    void setPopulation(std::string population);
    void setSpeed(int speed);
    
};

#endif
