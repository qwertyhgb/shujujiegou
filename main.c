#include <stdio.h>

typedef struct main
{
    int data[10];
    int length;
}List;

//排序
void SortList(List *l) {
    int temp;
    for (int i = 0; i < l->length; i++) {
        for (int j = i + 1; j < l->length; j++) {
            if (l->data[j] < l->data[i]) {
                temp = l->data[j];
                l->data[j] = l->data[i];
                l->data[i] = temp;
            }   
        }   
    }   
}

int main() {
    List l;
    printf("设置长度:\n");
    scanf("%d", &l.length);
    printf("%d\n", l.length);
    printf("赋值:\n");
    for (int i = 0; i < l.length; i++) {
        scanf("%d", &l.data[i]);
    }
    printf("\n排序:\n");
    SortList(&l);
    printf("\n输出:\n");
    for (int i = 0; i < l.length; i++) {
        printf("%d ", l.data[i]);
    }
    return 0;
}