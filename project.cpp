//�ļ�project.cpp
//���ﻥ�������ʵ��

#include "ItemList.h"

int main() {
	ItemList list;
	int func, number;
	string name;

	while (true) {
		cout << "����������ѡ��Ĺ��ܣ�1 �����Ʒ  2 ɾ����Ʒ  3 ������Ʒ  4 ��ʾ�б�  5 �˳�" << endl;
		cin >> func;

		switch (func) {
		case 1:
			list.addItem();
			break;
		case 2:
			cout << "������Ҫɾ������Ʒ��ţ�" << endl;
			cin >> number;
			list.removeItem(number);
			break;
		case 3:
			cout << "������Ҫ���ҵ���Ʒ���ƣ�" << endl;
			cin >> name;
			list.findItem(name);
			break;
		case 4:
			list.showItemList();
			break;
		case 5:
			exit(0);
		default:
			cout << "��Чָ��!" << endl;
		}
	}

	return 0;
}