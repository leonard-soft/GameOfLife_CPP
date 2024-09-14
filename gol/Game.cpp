#include "Game.h"

#include "../validator/ArgumentValidator.h"

Game::Game(int argc, char** argv) : argc(argc), argv(argv) {}

void Game::start() {
    ArgumentManager argumentManager(this->argv, this->argc);
    ArgumentValidator argumentValidator;
    argumentManager.loadArguments();
    argumentManager.printArguments();
    argumentValidator.setWidth(argumentManager.getWidth());
    argumentValidator.validateWidth();
    argumentValidator.setHeight(argumentManager.getHeight());
    argumentValidator.validateHeight();
}