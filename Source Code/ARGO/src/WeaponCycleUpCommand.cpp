#include "stdafx.h"
#include "WeaponCycleUpCommand.h"
#include "..\include\WeaponCycleUpCommand.h"

void WeaponCycleUpCommand::execute(Entity& t_entity, EventManager& t_eventManager)
{
	t_eventManager.emitEvent(WeaponCycle{ true , t_entity});
}
