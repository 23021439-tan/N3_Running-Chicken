#pragma once
#ifndef HIGHSCORE_H
#define HIGHSCORE_H

#include <string>

int loadHighScore(const std::string& filename);
void saveHighScore(const std::string& filename, int hs);

#endif
