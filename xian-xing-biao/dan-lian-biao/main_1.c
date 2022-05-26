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
    // 判断插入位置i的合法性
    if (i < 1) {
        printf("插入的位置错误!");
        return 0;
    }
    ListNode  *p;
    int j = 0;
    p = L;  // L指向头节点，头结点时第0个节点
    while (p != NULL && j < i - 1) {
        p = p->next;
        j++;
    }
    // 在dii-1结点后插入新的节点
    ListNode  *s;
    s = (ListNode *) malloc(sizeof (ListNode));
    s->data = x;
    s->next = p->next;
    p->next = s;
    return 1;
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
    int x;
    LinkList p;
    p = CreateLinkListHead();
    PrintList(p);
    printf("\n请输入插入的元素:\n");
    scanf("%d", &x);
    InsertListNode(p, x, 4);
    printf("\n输出新链表:\n");
    PrintList(p);
    return 0;
}