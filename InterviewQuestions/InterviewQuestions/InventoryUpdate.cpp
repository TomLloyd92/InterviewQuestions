#include "InventoryUpdate.h"

InventoryUpdate::InventoryUpdate()
{
	/*
	Compare and update the inventory stored in a 2D array against a second 2D array of a fresh delivery.
	Update the current existing inventory item quantities (in arr1). If an item cannot be found, add the new item and quantity into the inventory array.
	The returned inventory array should be in alphabetical order by item.
	*/
}

void InventoryUpdate::run()
{
	m_logic();
}

void InventoryUpdate::m_logic()
{
	//Initial Inventory
	Item item1{ 3, "Chocolate" };
	Item item2{ 2, "Crisps" };
	Item item3{ 6, "Sweets" };
	inventory.push_back(item1);
	inventory.push_back(item2);
	inventory.push_back(item3);

	//New Shipment
	Item newItem1{ 7, "Chocolate" };
	Item newItem2{ 2, "Drinks" };
	Item newItem3{ 2, "Sweets" };
	shipment.push_back(newItem1);
	shipment.push_back(newItem2);
	shipment.push_back(newItem3);
	
	//while (shipment.size() > 0)
	//{
	//	std::cout << shipment.back().ammount << std::endl;
	//	std::cout << shipment.back().name << std::endl;

	//	shipment.pop_back();
	//}



	m_updateInventory(inventory, shipment);

	while (inventory.size() > 0)
	{
		std::cout << inventory.back().ammount << std::endl;
		std::cout << inventory.back().name << std::endl;

		inventory.pop_back();
	}

}

void InventoryUpdate::m_updateInventory(std::vector<Item> &t_currentInventory, std::vector<Item> &t_newOrder)
{
	for (int i = 0; i < t_newOrder.size(); i++)
	{
		for (int j = 0; j < t_currentInventory.size(); j++)
		{
			if (t_newOrder.at(i).name == t_currentInventory.at(j).name)
			{
				t_currentInventory.at(j).ammount = t_newOrder.at(i).ammount + t_currentInventory.at(j).ammount;
				break;
			}
			else if (j == t_currentInventory.size() - 1)
			{
				t_currentInventory.push_back(t_newOrder.at(i));
			}
		}

	}
}
