//文件project.cpp
//互帮互助软件的实现

#include "ItemList.h"

int main() {
	ItemList list;
	int func, number;
	string name;

	while (true) {
		cout << "请输入你想选择的功能：1 添加物品  2 删除物品  3 查找物品  4 显示列表  5 退出" << endl;
		cin >> func;

		switch (func) {
		case 1:
			list.addItem();
			break;
		case 2:
			cout << "请输入要删除的物品编号：" << endl;
			cin >> number;
			list.removeItem(number);
			break;
		case 3:
			cout << "请输入要查找的物品名称：" << endl;
			cin >> name;
			list.findItem(name);
			break;
		case 4:
			list.showItemList();
			break;
		case 5:
			exit(0);
		default:
			cout << "无效指令!" << endl;
		}
	}

	return 0;
}