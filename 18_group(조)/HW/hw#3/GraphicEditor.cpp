#include <iostream>
using namespace std;

#include <vector>
#include "GraphicEditor.h"
#include "UI.h"
#include "Line.h"
#include "Circle.h"
#include "Rect.h"
#include "Shape.h"

GraphicEditor::GraphicEditor() {
	cout << "그래픽 에디터입니다.\n";
	start();
}
void GraphicEditor::start() {
    while (true) {
        int n;
        n = UI::selectMenu();
        switch (n) {
        case 1: 
            n = UI::selectShape();
            switch (n) {
            case 1: 
                v.push_back(new Line());
                break;
            case 2: 
                v.push_back(new Circle());
                break;
            case 3: 
                v.push_back(new Rect());
                break;
            default:
                cout << "잘못 선택하셨습니다.\n";
                break;
            }
            break;
        case 2: { 
            n = UI::selectDelIndex();
            if (n >= v.size() || n < 0) { 
                cout << "없는 인덱스 입니다.\n";
                break;
            }
            it = v.begin();
            Shape* tmp = *(it + n); 
            v.erase(it + n);
            delete tmp; 
            break;
        }
        case 3: 
            UI::showAll(v, it); 
            break;
        case 4: 
            return;
        default:
            cout << "잘못 입력하셨습니다.\n";
            break;
        }
    }
}