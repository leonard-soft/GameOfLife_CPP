#include "ValidArguments.h"

int ValidArguments::getWidth() const {
    return this->width;
}

int ValidArguments::getHeight() const {
    return this->height;
}

std::string ValidArguments::getPopulation() const {
    return this->population;
}

int ValidArguments::getSpeed() const {
    return this->speed;
}

void ValidArguments::setWidth(int width) {
    this->width = width;
}

void ValidArguments::setHeight(int height) {
    this->height = height;
}

void ValidArguments::setPopulation(const std::string &population) {
    this->population = population;
}

void ValidArguments::setSpeed(int speed) {
    this->speed = speed;
}
