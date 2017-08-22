#pragma once
#ifndef INVENTORYITEMS_H
#define INVENTORYITEMS_H

class InventoryItems
{
public:
	enum Objects { carrot = 1, shovel = 2, chair = 3, sword = 4, knife = 5, EMPTYOBJECT, FIRSTOBJECT = carrot, LASTOBJECT = knife};
	struct Inventory { int slotNumber = 0, carrotCount = 0, shovelCount = 0, chairCount = 0, swordCount = 0, knifeCount = 0; };
};
#endif INVENTORYITEMS_H
