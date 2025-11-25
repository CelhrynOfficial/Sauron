#include <iostream>
#include "SharedLog.hpp"

int main(int argc, char* argv[]) {
    // On appelle la fonction Log depuis la classe Logger de la librairie Common
    Common::Logger::Log("Sauron client starting up...");

    // On changera ça plus tard pour l'implémentation SDL2
    std::cout << "[Client] Running game loop simulation..." << std::endl;

    Common::Logger::Log("Sauron client shutting down.");

    return 0;
}