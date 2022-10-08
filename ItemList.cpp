//文件：ItemList.cpp
//包含头文件中函数的实现

#include "ItemList.h"

//向物品列表中添加物品信息
void ItemList::addItem() {
	string newItemName, newOnwerName, newPhoneNumber;
	ItemNode* temp;
	
	cout << "请输入物品名称：" << endl;
	cin >> newItemName;
	cout << "请输入本人姓名：" << endl;
	cin >> newOnwerName;
	cout << "请输入本人电话号码：" << endl;
	cin >> newPhoneNumber;

	temp = new ItemNode(newItemName, newOnwerName, newPhoneNumber);
	temp->prev = tail->prev;
	temp->next = tail;
	tail->prev->next = temp;
	tail->prev = temp;

	cout << "物品信息添加成功！" << endl;
}

//根据物品编号从物品列表中删除物品信息
void ItemList::removeItem(int number) {
	ItemNode* temp = head;

	for (int i = 0; i < number && temp->next != tail; i++) {
		temp = temp->next;
	}
	
	if (number < 1 || temp->next == tail) {
		cout << "项目编号为" << number << "的物品不存在！" << endl;
		return;
	}

	temp->next->prev = temp->prev;
	temp->prev->next = temp->next;
	delete temp;

	cout << "物品信息删除成功！" << endl;
}

//根据物品名称查找物品信息
void ItemList::findItem(string name) {
	ItemNode* temp = head;
	bool isFind = false;

	for (int i = 1; temp->next; i++) {
		temp = temp->next;
		if (temp->itemName == name) {
			cout << "查找到物品，物品信息如下：" << endl;
			cout << i << "  " << temp->itemName << "  " << temp->ownerName << "  " << temp->phoneNumber << endl;
			isFind = true;
		}
	}
	if (isFind == false) cout << "未查找到物品" << endl;
}

//显示所有物品信息
void ItemList::showItemList() {
	ItemNode* temp = head;

	cout << "所有物品信息如下：" << endl;
	for (int i = 1; temp->next != tail; i++) {
		temp = temp->next; 
		cout << i << "  " << temp->itemName << "  " << temp->ownerName << "  " << temp->phoneNumber << endl;
	}
}

ItemList::ItemList() {
	head = new ItemNode;
	head->next = tail = new ItemNode;
	tail->prev = head;
}

ItemList::~ItemList() {
	ItemNode* temp = head;
	while (temp->next != tail) {
		head = head->next;
		delete temp;
		temp = head;
	}
}