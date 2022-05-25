#include <stdio.h>
#include <malloc.h>

typedef int DataType;
typedef struct node {
    DataType data;
    struct node *next;
}ListNode;

typedef ListNode * LinkList;

// 头插法创建带头结点的单链表
LinkList CreateListNodeHead(void) {
    int ch;
    ListNode *L;
    ListNode *s;
    L = (ListNode *) malloc(sizeof (ListNode));
    L->next = NULL;
    printf("请输入数据:\n");
    scanf("%d", &ch);
    while (ch != 9999) {
        s = (ListNode *) malloc(sizeof (ListNode));
        s->data = ch;
        s->next = L->next;
        L->next = s;
        scanf("%d", &ch);
    }
    return L;
}

// 输出单链表
void PrintList(ListNode *L) {
    ListNode *head = L;
    while (head->next) {
        printf("%d ", head->next->data);
        head = head->next;
    }
}

int main(int argc, char const *argv[]) {
    ListNode *p;
    p = CreateListNodeHead();
    PrintList(p);
    return 0;
}

