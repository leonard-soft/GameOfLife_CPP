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
    int getWidth();
    int getHeight();
    std::string getPopulation();
    int getSpeed();

    void setWidth(int width);
    void setHeight(int height);
    void set_population(const std::string &population);
    void set_speed(int speed);
};

#endif
