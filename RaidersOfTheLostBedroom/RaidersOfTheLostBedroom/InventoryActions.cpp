#include <iostream>
#include "InventoryActions.h"

void InventoryActions::PickupItem(int newObject)
{
	Objects chosenObj;

	switch (newObject)
	{
	case 1:
		chosenObj = carrot;
		break;
	case 2:
		chosenObj = shovel;
		break;
	case 3:
		chosenObj = chair;
		break;
	case 4:
		chosenObj = sword;
		break;
	case 5:
		chosenObj = knife;
		break;
	default:
		printf("You didn't choose a valid object!\n");
	}

	if (inventory.slotNumber < 3)
	{
		switch (chosenObj)
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
void InventoryActions::DropItem(int droppedItem)
{
	Objects itemToDrop;

	switch (droppedItem)
	{
	case 1:
		itemToDrop = carrot;
		break;
	case 2:
		itemToDrop = shovel;
		break;
	case 3:
		itemToDrop = chair;
		break;
	case 4:
		itemToDrop = sword;
		break;
	case 5:
		itemToDrop = knife;
		break;
	default:
		printf("You didn't select a valid object to drop!\n");
		break;
	}
		switch (itemToDrop)
		{
		case carrot:
			inventory.carrotCount--;
			printf("You dropped a carrot!\n You have %d carrots left!\n", inventory.carrotCount);
			break;
		case shovel:
			inventory.shovelCount--;
			printf("You dropped a shovel!\n You have %d shovels left!\n", inventory.shovelCount);
			break;
		case chair:
			inventory.chairCount--;
			printf("You dropped a chair!\n You have %d chairs left!\n", inventory.carrotCount);
			break;
		case sword:
			inventory.swordCount--;
			printf("You dropped a sword!\n You have %d swords left!\n", inventory.swordCount);
			break;
		case knife:
			inventory.knifeCount--;
			printf("You dropped a knife!\n You have %d knives left!\n", inventory.knifeCount);
			break;
		default:
			printf("You didn't choose a valid inventory item!\n");
			break;
		}
}
