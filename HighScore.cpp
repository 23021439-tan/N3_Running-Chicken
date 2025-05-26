#include "HighScore.h"
#include <fstream>

int loadHighScore(const std::string& filename) {
    std::ifstream file(filename);
    int hs = 0;
    if (file.is_open()) {
        file >> hs;
        file.close();
    }
    return hs;
}

void saveHighScore(const std::string& filename, int hs) {
    std::ofstream file(filename);
    if (file.is_open()) {
        file << hs;
        file.close();
    }
}
