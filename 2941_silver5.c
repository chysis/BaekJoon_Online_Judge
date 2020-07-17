#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 예전에는 크로아티아 알파벳을 입력할 수 없어서
c=, c-, dz=, d-, lj, nj, s=, z= 로 바꿔서 입력했다.
단어가 주어졌을 때 그 단어가 몇 개의 크로아티아 알파벳으로 이루어졌는지 출력하자.
위의 8개 알파벳 이외의 알파벳은 각각 하나로 계산한다. */

int main(void)
{
    char str[101];
    int i = 0, num = 0;
    scanf("%s", str);

    while(str[i]!='\0')
    {
        if(str[i]=='c')
            if (str[i + 1] == '=')
            {
                num++;
                i += 2;
                continue;
            }
            else if (str[i + 1] == '-')
            {
                num++;
                i += 2;
                continue;
            }
            else
            {
                num++;
                i++;
                continue;
            }
        else if(str[i]=='d')
            if(str[i+1]=='z')
                if (str[i + 2] == '=')
                {
                    num++;
                    i += 3;
                    continue;
                }
                else
                {
                    num += 2;
                    i += 2;
                    continue;
                }
            else if (str[i + 1] == '-')
            {
                num++;
                i += 2;
                continue;
            }
            else
            {
                num++;
                i++;
                continue;
            }
        else if(str[i]=='l')
            if (str[i + 1] == 'j')
            {
                num++;
                i += 2;
                continue;
            }
            else
            {
                num++;
                i++;
                continue;
            }
        else if(str[i]=='n')
            if (str[i + 1] == 'j')
            {
                num++;
                i += 2;
                continue;
            }
            else
            {
                num++;
                i++;
                continue;
            }
        else if(str[i]=='s')
            if (str[i + 1] == '=')
            {
                num++;
                i += 2;
                continue;
            }
            else
            {
                num++;
                i++;
                continue;
            }
        else if(str[i]=='z')
            if (str[i + 1] == '=')
            {
                num++;
                i += 2;
                continue;
            }
            else
            {
                num++;
                i++;
                continue;
            }
        else
        {
            num++;
            i++;
            continue;
        }
    }
    printf("%d", num);
    return 0;
}
