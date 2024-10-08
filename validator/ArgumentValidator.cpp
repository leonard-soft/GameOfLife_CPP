#include "ArgumentValidator.h"

#include <algorithm>
#include <iostream>
#include <utility>

std::string ArgumentValidator::getWidth() const {
   return this->width;
}

std::string ArgumentValidator::getHeight() const {
    return this->height;
}

ValidArguments ArgumentValidator::getValidArgumentObject() const {
    return this->valid_arguments;
}

void ArgumentValidator::setHeight(std::string height) {
    this->height = std::move(height);
}

void ArgumentValidator::setWidth(std::string width) {
    this->width = std::move(width);
}

void ArgumentValidator::setPopulation(std::string population) {
    this->population = std::move(population);
}

void ArgumentValidator::setSpeed(std::string speed) {
    this->speed = std::move(speed);
}

bool ArgumentValidator::isNumber(std::string& str) {
    return !str.empty() && std::all_of(str.begin(), str.end(), ::isdigit);
}

void ArgumentValidator::validateWidth() {
    if (!this->width.empty() && isNumber(this->width)) {
        int width = std::stoi(this->width);
        if (width == 20 || width == 40)
            valid_arguments.setWidth(width);
    } else {
        valid_arguments.setWidth(0);
    }
}

void ArgumentValidator::validateHeight() {
    if(!this->height.empty() && isNumber(this->height)) {
        int height = std::stoi(this->height);
        if (height == 10 || height == 20 || height == 40)
            valid_arguments.setHeight(height);
    } else {
        valid_arguments.setHeight(0);
    }
}

void ArgumentValidator::validatePopulation() {
    std::string validPopulation;
    if(!this->population.empty()) {
        for (int i = 0; i < this->population.size(); i++) {
            if (population[i] == '#' || population[i] == '1' || population[i] == '0')
                validPopulation += population[i];
            else {
                validPopulation = "Invalid";
                break;
            }
        }
        valid_arguments.setPopulation(validPopulation);
    }
}

void ArgumentValidator::validateSpeed() {
    if (!this->speed.empty() && this->isNumber(this->speed)) {
        int speed = std::stoi(this->speed);
        if (speed >= 100 && speed <= 1000) {
            valid_arguments.setSpeed(speed);
        } else {
            valid_arguments.setSpeed(0);
        }
    }
}
