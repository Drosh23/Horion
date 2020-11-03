#include "FullBright.h"

FullBright::FullBright() : IModule(0, Category::VISUAL, "Puts your gamma to max") {
}

FullBright::~FullBright() {
}

const char* FullBright::getModuleName() {
	return "Fullbright";
}

void FullBright::onTick(C_GameMode* gm) {
	if (gammaPtr != nullptr && *gammaPtr != 10) 
		*gammaPtr = 10;
}

void FullBright::onEnable() {
	if (gammaPtr != nullptr) {
		*prevGamma = *gammaPtr;
		*gammaPtr = 10;
	}
}

void FullBright::onDisable() {
	if (gammaPtr != nullptr || prevGamma != nullptr)
		*gammaPtr = *prevGamma;
	else if (gammaPtr != nullptr)
		*gammaPtr = .5;
}
