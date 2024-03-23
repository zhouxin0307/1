#include<stdio.h>
int main(){
    char a,b;
    printf("输入一个小写字母，可转换为大写字母\n");
    a=getchar();
    printf("该大写字母为：");
    b=a-32;
    putchar(b);
    printf("\n");
}