#include <iostream>
using namespace std;

#include "Shape.h"
#include "UI.h"

int UI::getMenu() {
	int n;
	cout << "����:1, ����:2, ��κ���:3, ����:4 >> ";
	cin >> n;
	return n;
}
int UI::getShapeTypeToInsert() {
	int n;
	cout << "��:1, ��:2, �簢��:3 >> ";
	cin >> n;
	return n;
}
int UI::getShapeIndexToDelete() {
	int n;
	cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
	cin >> n;
	return n;
}