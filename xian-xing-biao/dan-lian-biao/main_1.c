#include <stdio.h>
#include <malloc.h>

typedef int DataType;
typedef struct node {
    DataType data;
    struct node *next;
}ListNode;

typedef ListNode * LinkList;

// 尾插法创建带头结点的单链表
LinkList CreateLinkListHead(void) {
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
        t->next = s;
        t = s;
        scanf("%d", &ch);
    }
    t->next = NULL;
    return L;
}

// 单链表插入数据
int InsertListNode(ListNode *L, DataType x, int i) {  // 将值为x的结点插入到单链表的第i的位置
    ListNode *p, *s;
    p = 
}

// 输出单链表
void PrintList(ListNode *L) {
    ListNode *head = L;
    while (head->next) {
        printf("%d ", head->next->data);
        head = head->next;
    }
}

int main() {
    LinkList p;
    p = CreateLinkListHead();
    PrintList(p);
    return 0;
}