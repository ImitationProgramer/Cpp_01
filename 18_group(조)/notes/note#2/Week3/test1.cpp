#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int l = 0;
    char longname[100];
    cout << "5명의 이름을 ';'으로 구분하여 입력하세요" << endl;
    for (int i = 0; i < 5; i++)
    {
        char name[100];
        cin.getline(name, 100, ';');
        cout << "[" << i + 1 << "] : " << name << endl;
        if (l < strlen(name))
        {
            l = strlen(name);
            for (int i = 0; name[i] != '\0'; i++)
                longname[i] = name[i];
        }
    }
    cout << "가장 긴 이름은 " << longname << endl;
    return 0;
}