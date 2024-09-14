#include "ArgumentManager.h"

ArgumentManager::ArgumentManager(char** arguments, int argc) : argc(argc), arguments(arguments) {}

std::string ArgumentManager::getWidth() {
    return this->width;
}

std::string ArgumentManager::getHeight() {
    return this->height;
}

std::string ArgumentManager::getPopulation() {
    return this->population;
}

std::string ArgumentManager::getSpeed() {
    return this->speed;
}

void ArgumentManager::setWidth(std::string width) {
    this->width = width;
}

void ArgumentManager::setHeight(std::string height) {
    this->height = height;
}

void ArgumentManager::setPopulation(std::string population) {
    this->population = population;
}

void ArgumentManager::setSpeed(std::string speed) {
    this->speed = speed;
}

std::vector<std::string> ArgumentManager:: split(std::string argument, char delimiter) {
    std::string split;
    std::vector<std::string> vector;
    for (int i = 0; i < argument.size(); i++) {
        if (argument[i] != delimiter) {
            split += argument[i];
        }
        else {
            vector.push_back(split);
            split = "";
        }
    }
    vector.push_back(split);
    return vector;
}

std::string* ArgumentManager::validateIfArgumentExists(std::string argument) {
    std::string* result = new std::string[2] {"#", "#"};
    vector<std::string> splitArray = split(argument, '=');
    if (splitArray.size() > 1) {
        result[0] = splitArray[0];
        result[1] = splitArray[1];
    }
    return result;
}

void ArgumentManager::loadArguments() {
    std::string* splitArray = new std::string[2];
    for (int i = 1; i < this->argc; i++) {
        splitArray = validateIfArgumentExists(this->arguments[i]);
        std::string& characterOne = splitArray[0];
        std::string& value = splitArray[1];
        if(characterOne == "w" || characterOne == "W")
            this->setWidth(value);
        if(characterOne == "h" || characterOne == "H")
            this->setHeight(value);
        if(characterOne == "p" || characterOne == "P")
            this->setPopulation(value);
        if(characterOne == "s" || characterOne == "S")
            this->setSpeed(value);
    }
}

void ArgumentManager::printArguments() {
     printf("GOL ARGUMENTS w=%s h=%s p=%s s=%s", this->getWidth().c_str(), this->getHeight().c_str(), this->getPopulation().c_str(),
            this->getSpeed().c_str());
}

