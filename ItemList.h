//文件：ItemList.h
//采用双链表实现物品列表的构建，并创建一个列表类ItemList

#ifndef _ItemList_h
#define _ItemList_h

#include <iostream>
#include <cstring>
using namespace std;

class ItemList {
private:

//双链表节点的结构体ItemNode
	struct ItemNode {
		string itemName, ownerName, phoneNumber;
		ItemNode* prev, * next;

		ItemNode() :prev(nullptr), next(nullptr) {}
		ItemNode(string iname, string oname, string pnumber) :
			itemName(iname), ownerName(oname), phoneNumber(pnumber), prev(nullptr), next(nullptr) {}
		~ItemNode() {}
	};

	ItemNode* head, * tail;

public:
	void addItem();
	void removeItem(int number);
	void findItem(string name);
	void showItemList();

	ItemList();
	~ItemList();
};

#endif