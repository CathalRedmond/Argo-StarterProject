#include "stdafx.h"
#include "WeaponCycleDownCommand.h"

void WeaponCycleDownCommand::execute(Entity& t_entity, EventManager& t_eventManager)
{
	t_eventManager.emitEvent(WeaponCycle{ false , t_entity});
}
