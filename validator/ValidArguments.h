#ifndef VALIDARGUMENTS_H
#define VALIDARGUMENTS_H
#include <string>

class ValidArguments {
private:
    int width;
    int height;
    std::string population;
    int speed;
public:
    int getWidth() const;
    int getHeight() const;
    std::string getPopulation() const;
    int getSpeed() const;

    void setWidth(int width);
    void setHeight(int height);
    void setPopulation(const std::string &population);
    void setSpeed(int speed);
};

#endif
