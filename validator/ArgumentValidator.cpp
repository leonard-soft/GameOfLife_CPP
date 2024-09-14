#include "ArgumentValidator.h"
#include <iostream>
#include <utility>

std::string ArgumentValidator::getWidth() const {
   return this->width;
}

ValidArguments ArgumentValidator::getValidArgumentObject() const {
    return this->valid_arguments;
}

void ArgumentValidator::setWidth(std::string width) {
    this->width = std::move(width);
}

void ArgumentValidator::validateWidth() {
    if (!this->width.empty()) {
        try {
            int number = std::stoi(this->width);
            if (number == 20 || number == 40) {
                valid_arguments.setWidth(number);
            } else {
                valid_arguments.setWidth(0);
            }
        } catch (std::exception& e) {
            std::cerr << "Error: General Exception: " << e.what() << std::endl;
        }
    }
}


