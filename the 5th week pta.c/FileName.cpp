#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main() {
    char str[100], hex_str[100];
    int i, j = 0, is_negative = 0;
    long int decimal = 0;
    //printf("������һ����#�������ַ���: ");
    scanf_s("%[^#]s", str,100);
    // �ж��Ƿ�Ϊ����
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '-') {
            is_negative = 1;
            j = i;
            break;
        }
    }

    // ���˷�ʮ�������ַ�������µ��ַ���
    for (i = j; str[i] != '\0'; i++) {
        if (isxdigit(str[i])) {
            hex_str[j++] = tolower(str[i]);
        }
    }
    hex_str[j] = '\0';
    // ��ʮ�������ַ���ת��Ϊʮ������
    j = strlen(hex_str);
    for (i = 0; hex_str[i] != '\0'; i++) {
        j--;
        if (hex_str[i] >= '0' && hex_str[i] <= '9') {
            decimal += (hex_str[i] - '0') * pow(16, j);
        }
        else {
            decimal += (hex_str[i] - 'a' + 10) * pow(16, j);
        }
    }
    // ������
    if (is_negative) {
        printf("-%ld", decimal);
    }
    else {
        printf(" %ld", decimal);
    }
    return 0;
}