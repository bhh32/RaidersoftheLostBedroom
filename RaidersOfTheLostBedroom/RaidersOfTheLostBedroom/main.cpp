#include <iostream>
#include "InventoryActions.h"

int main()
{
	InventoryItems invItems;
	InventoryActions invActions;

	invActions.PickupItem(invItems.carrot);
	invActions.PickupItem(invItems.shovel);
	invActions.PickupItem(invItems.sword);
	invActions.PickupItem(invItems.chair);

	invActions.DropItem(invItems.carrot);

	system("Pause");
}