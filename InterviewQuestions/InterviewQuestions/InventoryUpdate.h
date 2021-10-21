#pragma once
#include<vector>;
#include <iostream>;

class InventoryUpdate {
public:
	InventoryUpdate();
	void run();


private:
	//Struct of Items
	struct Item {
		int ammount;
		std::string name;
	};

	void m_logic();
	void m_updateInventory(std::vector<Item>& t_currentInventory, std::vector<Item> &t_newOrder);

	std::vector<Item> inventory;
	std::vector<Item> shipment;


};