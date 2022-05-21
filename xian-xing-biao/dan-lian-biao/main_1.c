#include <stdio.h>
#include <malloc.h>

typedef int DataType;
typedef struct node {
    DataType data;
    struct node *next;
}ListNode;

typedef ListNode * LinkList;

// 尾插法创建带头结点的单链表
LinkList CreateLinkListHead() {
    // 定义数值域
    int ch;
    // 声明一个头结点
    ListNode * L;
    // 声明工作结点和要插入的结点
    ListNode * s;
    ListNode * t;
    L = (ListNode *)malloc(sizeof(ListNode));
    L->next = NULL;
    t = L;
    printf("请输入数据:\n");
    scanf("%d", &ch);
    while (ch != 9999) {
        s = (ListNode *)malloc(sizeof(ListNode));
        s->data = ch;
        s->next = t->next;
        t->next = s;
        scanf("%d", &ch);
    }
    t->next = NULL;
    return L;
}

// 输出单链表

int main() {
    LinkList p;
    p = CreateLinkListHead();
    return 0;
}