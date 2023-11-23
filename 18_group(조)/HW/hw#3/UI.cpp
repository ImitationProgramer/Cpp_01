#include <iostream>
#include <vector>
using namespace std;
#include "Shape.h"
#include "UI.h"

int UI::selectMenu() {
	int n;
	cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
	cin >> n;
	return n;
}
int UI::selectShape() {
	int n;
	cout << "선:1, 원:2, 사각형:3 >> ";
	cin >> n;
	return n;
}
int UI::selectDelIndex() {
	int n;
	cout << "삭제하고자 하는 도형의 인덱스 >> ";
	cin >> n;
	return n;
}
void UI::showAll(vector<Shape*>& v, vector<Shape*>::iterator& it) {
	int i = 0;
	for (it = v.begin(); it != v.end(); it++, i++) { // vector v의 첫 원소부터 끝 원소까지 탐색 및 출력
		cout << i << ": ";
		v.at(i)->paint();
	}
}