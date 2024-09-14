#include "Game.h"

Game::Game(int argc, char** argv) : argc(argc), argv(argv) {}

void Game::start() {
    ArgumentManager argumentManager(this->argv, this->argc);
    argumentManager.loadArguments();
    argumentManager.printArguments();
}