#include <stdio.h>
#define MAX_SIZE 100

typedef struct {
    int data[MAX_SIZE];
    int length;
}SeqList;

int main() {
    SeqList L;
    printf("赋值长度:\n");
    scanf("%d", &L.length);
    printf("\n表的长度为:%d\n", L.length);
    printf("给表赋值:\n");
    for (int i = 0; i < L.length; i++) {
        scanf("%d ", &L.data[i]);
    }
    printf("输出表:\n");
    for (int i = 0; i < L.length; i++) {
        printf("%d ", L.data[i]);
    }
    return 0;
}

