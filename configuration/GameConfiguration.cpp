#include "GameConfiguration.h"

GameConfiguration::GameConfiguration() = default;

ValidArguments GameConfiguration::getValidArguments() {
   return this->validArguments;
}

void GameConfiguration::setValidArguments(ValidArguments validArguments) {
   this->validArguments = std::move(validArguments);
}
