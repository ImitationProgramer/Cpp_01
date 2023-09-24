#include <stdio.h>

int main()
{
    int width, height;
    printf("너비를 입력하세요>>");
    scanf("%d", &width);
    printf("높이를 입력하세요>>");
    scanf("%d", &height);
    int area = width * height;
    printf("면적은 %d\n", area);
    return 0;
}