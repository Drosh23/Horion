#pragma once
#include "Module.h"
class AutoArmor : public IModule {
public:

	C_CraftingScreenController* inventoryScreen = nullptr;

	AutoArmor();
	~AutoArmor();

	virtual void onTick(C_GameMode* gm) override;
	virtual const char* getModuleName() override;
};
float prottM = 1.5f;
float thornM = .5f;
float bProtM = .4f;
float fProtM = .4f;
float pProtM = .4f;