#ifndef ARGUMENTMANAGER_H
#define ARGUMENTMANAGER_H

#include <vector>
#include <string>

using namespace std;

class ArgumentManager {
private:
    int argc;
    char** arguments;
    std::string width;
    std::string height;
    std::string population;
    std::string speed;
public:
    ArgumentManager(char** arguments, int argc);

    std::string getWidth();
    std::string getHeight();
    std::string getPopulation();
    std::string getSpeed();

    void setWidth(std::string width);
    void setHeight(std::string height);
    void setPopulation(std::string population);
    void setSpeed(std::string speed);

    std::vector<std::string> split(std::string argument, char delimeter);
    std::string* validateIfArgumentExists(std::string argument);
    void loadArguments();
    void printArguments();
};

#endif 