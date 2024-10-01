#include "Game.h"

#include "../configuration/GameConfiguration.h"
#include "../validator/ArgumentValidator.h"

Game::Game(int argc, char** argv) : argc(argc), argv(argv) {}

void Game::start() {
    ArgumentManager argumentManager(this->argv, this->argc);
    ArgumentValidator argumentValidator;
    GameConfiguration gameConfigutation();

    argumentManager.loadArguments();
    argumentManager.printArguments();
    argumentValidator.setWidth(argumentManager.getWidth());
    argumentValidator.validateWidth();
    argumentValidator.setHeight(argumentManager.getHeight());
    argumentValidator.validateHeight();
    argumentValidator.setPopulation(argumentManager.getPopulation());
    argumentValidator.validatePopulation();
    argumentValidator.setSpeed(argumentManager.getSpeed());
    argumentValidator.validateSpeed();
    gameConfigutation().setValidArguments(argumentValidator.getValidArgumentObject())
}