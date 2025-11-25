# On commence par déclarer la version minimale de CMake requise
# 3.20 serait apparemment un bon standart moderne
cmake_minimum_required(VERSION 3.20)

# On configure ensuite le nom du projet et sa version
project(Sauron VERSION 0.1 LANGUAGES CXX)

# On configure cpp
# On choisit C++20 car le plus moderne
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF) # On désactive les extensions spécifiques au compilateur (on utilisera plusieurs compilateurs dans le projet).

# Dossier de sortie
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# On inclut les autres CMakeLists.txt des dossiers suivant
# Nécessite la présence d'un CMakeLists.txt dans chacun de ces dossiers pour pouvoir compiler.
add_subdirectory(src/common)
add_subdirectory(src/client)
add_subdirectory(src/server)
add_subdirectory(src/anticheat)