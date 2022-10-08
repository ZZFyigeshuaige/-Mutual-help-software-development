//�ļ���ItemList.h
//����˫����ʵ����Ʒ�б�Ĺ�����������һ���б���ItemList

#ifndef _ItemList_h
#define _ItemList_h

#include <iostream>
#include <cstring>
using namespace std;

class ItemList {
private:

//˫����ڵ�Ľṹ��ItemNode
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