#ifndef ARGUMENTVALIDATOR_H
#define ARGUMENTVALIDATOR_H
#include <string>
#include "ValidArguments.h"

class ArgumentValidator {
private:
    ValidArguments valid_arguments;
    std::string width;
    std::string height;
    std::string population;
    std::string speed;
public:
    std::string getWidth() const;
    std::string getHeight() const;
    ValidArguments getValidArgumentObject() const;

    void setWidth(std::string width);
    void setHeight(std::string height);
    void setPopulation(std::string population);
    void setSpeed(std::string speed);

    bool isNumber(std::string& str);
    void validateWidth();
    void validateHeight();
    void validatePopulation();
    void validateSpeed();
};

#endif
