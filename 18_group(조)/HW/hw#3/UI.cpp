#include <iostream>
#include <vector>
using namespace std;
#include "Shape.h"
#include "UI.h"

int UI::selectMenu() {
	int n;
	cout << "����:1, ����:2, ��κ���:3, ����:4 >> ";
	cin >> n;
	return n;
}
int UI::selectShape() {
	int n;
	cout << "��:1, ��:2, �簢��:3 >> ";
	cin >> n;
	return n;
}
int UI::selectDelIndex() {
	int n;
	cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
	cin >> n;
	return n;
}
void UI::showAll(vector<Shape*>& v, vector<Shape*>::iterator& it) {
	int i = 0;
	for (it = v.begin(); it != v.end(); it++, i++) { // vector v�� ù ���Һ��� �� ���ұ��� Ž�� �� ���
		cout << i << ": ";
		v.at(i)->paint();
	}
}