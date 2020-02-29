#pragma once
#include "Component.h"
class LightSourceComponent :
	public Component
{
public:
	LightSourceComponent(float t_secondsPerFlip);
	float getCurrentLightLevel();
	float getMaxLightLevel();
	float getMinLightLevel();
	float getChangePerFrame();

	void setMaxLightLevel(float t_maxLight);
	void setMinLightLevel(float t_minLight);
	void setSecondPerLightFlip(float t_seconds);

private:
	float m_currentLightLevel{ 0 };
	float m_maxLightLevel{ 200 };
	float m_minLightLevel{ 0 };
	float m_secondsPerLightFlip{ 2.0f };
	float m_changePerFrame{ 0.0f };
};

