#pragma once
#include "GameState.h"

class MenuState : public GameState {
public:
	MenuState(class GameStateManager& gsm);
	void update(float deltams);
	void draw() {}
	void handleInput();
};