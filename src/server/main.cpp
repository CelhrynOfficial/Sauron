#include <iostream>
#include "SharedLog.hpp"

int main(int argc, char* argv[]) {
    Common::Logger::Log("Sauron server starting up...");

    // Code pour le serveur (plus tard on fera l'initialisation du réseau ici)
    std::cout << "[Server] Waiting for client connections..." << std::endl;

    Common::Logger::Log("Sauron server shutting down.");

    return 0;
}