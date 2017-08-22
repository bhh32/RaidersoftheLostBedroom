#pragma once
#ifndef INVENTORYACTIONS_H
#define INVENTORYACTIONS_H

#include "InventoryItems.h"

class InventoryActions:InventoryItems
{
public:
	void PickupItem(Objects newObject);
	void DropItem(Objects newObject);
	Inventory inventory;
};
#endif INVENTORYACTIONS_H
