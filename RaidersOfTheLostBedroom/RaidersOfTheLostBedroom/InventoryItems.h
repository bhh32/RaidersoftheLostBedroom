#pragma once
#ifndef INVENTORYITEMS_H
#define INVENTORYITEMS_H

class InventoryItems
{
public:
	enum Objects { carrot, shovel, chair, sword, knife };
	struct Inventory { int slotNumber = 0, carrotCount = 0, shovelCount = 0, chairCount = 0, swordCount = 0, knifeCount = 0; };
	Objects itemSlots[3];
};
#endif INVENTORYITEMS_H
