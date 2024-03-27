#include<stdio.h>
#include<stdlib.h>
int main(){
    int a=1;
    printf("输出所有水仙花数\n");
    printf("水仙花数有如下：\n");
    for(int i=1;i<=9;i++){
        for(int j=0;j<=9;j++){
            for(int k=0;k<=9;k++){
                if(i*i*i+j*j*j+k*k*k==i*100+j*10+k){
                    printf("%d",(i*100+j*10+k));
                    a++;
                }
                if(a%5==0){
                    printf("\n");
                }
            }
        }
    }
    system("peuse");
    return 0;
}