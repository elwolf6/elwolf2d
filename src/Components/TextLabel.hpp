#pragma once

#include <SDL2/SDL.h>
#include <glm/glm.hpp>
#include <string>

struct TextLabel {
  glm::vec2 position;
  std::string text;
  std::string assetId;
  SDL_Color color;
  bool isFixed;

  TextLabel(glm::vec2 position = glm::vec2(0), std::string text = "",
            std::string assetId = "", const SDL_Color &color = {0, 0, 0},
            bool isFixed = true) {
    this->position = position;
    this->text = text;
    this->assetId = assetId;
    this->color = color;
    this->isFixed = isFixed;
  }
};