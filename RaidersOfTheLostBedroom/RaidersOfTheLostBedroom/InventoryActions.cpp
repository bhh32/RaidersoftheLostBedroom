#include <iostream>
#include "InventoryActions.h"

void InventoryActions::PickupItem(Objects newObject)
{
	if (inventory.slotNumber < 3)
	{
		itemSlots[newObject];

		switch (newObject)
		{
		case carrot:
			inventory.carrotCount++;
			printf("You picked up a carrot!\n Carrot Count: %d\n Slot Number: %d\n", inventory.carrotCount, inventory.slotNumber + 1);
			break;
		case shovel:
			inventory.shovelCount++;
			printf("You picked up a shovel!\n Shovel Count: %d\n Slot Number: %d\n", inventory.shovelCount, inventory.slotNumber + 1);
			break;
		case chair:
			inventory.chairCount++;
			printf("You picked up a chair!\n Chair Count: %d\n Slot Number: %d\n", inventory.chairCount, inventory.slotNumber + 1);
			break;
		case sword:
			inventory.swordCount++;
			printf("You picked up a sword!\n Sword Count: %d\n Slot Number: %d\n", inventory.swordCount, inventory.slotNumber + 1);
			break;
		case knife:
			inventory.knifeCount++;
			printf("You picked up a knife!\n Knife Count: %d\n Knife Number: %d\n", inventory.knifeCount, inventory.slotNumber + 1);
			break;
		default:
			printf("You didn't choose a valid item!\n");
			break;
		}
		inventory.slotNumber++;
	}
	else
	{
		printf("You have too much in your inventory\n If you want to pick this item up you need to drop something.\n");
	}
}

// TODO
void InventoryActions::DropItem(Objects droppedItem)
{

}