#include <stdio.h>
#include <stdbool.h>
int main()
{
    char password[11], answer[3] = "C++";
    printf("프로그램을 종료하려면 암호를 입력하세요.\n");
    while (true)
    {
        printf("암호>>");
        scanf("%s", password);
        int count = 0;
        for (int i = 0; password[i] != '\0'; i++)
            count++;
        bool isTrue = true;
        if (count < 3)
        {
            for (int i = 0; answer[i] != '\0'; i++)
                if (password[i] != answer[i])
                    isTrue = false;
        }
        else
            for (int i = 0; password[i] != '\0'; i++)
                if (password[i] != answer[i])
                    isTrue = false;
        if (!isTrue)
            printf("암호가 틀립니다~~\n");
        else
        {
            printf("프로그램을 정상 종료합니다.\n");
            break;
        }
    }
    return 0;
}