#pragma once
#ifndef INVENTORYACTIONS_H
#define INVENTORYACTIONS_H

#include "InventoryItems.h"

class InventoryActions:InventoryItems
{
public:
	void PickupItem(int newObject);
	void DropItem(int newObject);
	Inventory inventory;
};
#endif INVENTORYACTIONS_H
