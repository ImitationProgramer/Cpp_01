#pragma once
#include <vector>
#include "Shape.h"
class UI {
public:
	static int selectMenu();
	static int selectShape();
	static int selectDelIndex();
	static void showAll(vector<Shape*>& v, vector<Shape*>::iterator& it);
};