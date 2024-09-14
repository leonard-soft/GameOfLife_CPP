#ifndef ARGUMENTVALIDATOR_H
#define ARGUMENTVALIDATOR_H
#include <string>

class ArgumentValidator {
private:
    std::string width;
    std::string height;
    std::string population;
    std::string speed;
public:
    std::string getWidth();

    void setWidth(std::string width);
};

#endif
