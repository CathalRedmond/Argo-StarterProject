#include "stdafx.h"
#include "LightSourceComponent.h"

LightSourceComponent::LightSourceComponent(float t_secondsPerFlip):
	Component(ComponentType::LightSource),
	m_secondsPerLightFlip(t_secondsPerFlip)
{
	m_changePerFrame = ((m_maxLightLevel - m_minLightLevel) / m_secondsPerLightFlip)/60.0f;
}

float LightSourceComponent::getCurrentLightLevel()
{
	return m_currentLightLevel;
}

float LightSourceComponent::getMaxLightLevel()
{
	return m_maxLightLevel;
}

float LightSourceComponent::getMinLightLevel()
{
	return m_minLightLevel;
}

float LightSourceComponent::getChangePerFrame()
{
	return m_changePerFrame;
}

void LightSourceComponent::setMaxLightLevel(float t_maxLight)
{
	m_maxLightLevel = t_maxLight;
}

void LightSourceComponent::setMinLightLevel(float t_minLight)
{
	m_minLightLevel = t_minLight;
}

void LightSourceComponent::setSecondPerLightFlip(float t_seconds)
{
	m_secondsPerLightFlip = t_seconds;
}
