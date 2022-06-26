
//
// Created by LM216 on 2022/5/16.
//
#include <stdio.h>
#define MAXSIZE 100

typedef struct
{
    int data[MAXSIZE];
    int length;
}SeqList;

//初始化
void IntList(SeqList *L)
{
    L->length == 0;
}

// //赋值
// void InList(SeqList *L)
// {
// 	for (int i = 0; i < L->length; ++i)
// 	{
// 		scanf("%d", &L->data[i]);
// 	}
// }

// //输出列表元素
// void OutList(SeqList *L)
// {
// 	for (int i = 0; i < L->length; ++i)
// 	{
// 		printf("%d", L->data[i]);
// 	}
// }

// 插入
int InsertList(SeqList *L, int t, int i)  //在表L的第i个位置插入值为t的元素
{
    int j;
    if (i < 1 || i > L->length + 1)
    {
        printf("插入的位置错了!");
        return 0;
    }
    if (L->length > MAXSIZE)
    {
        printf("表满了!");
        return 0;
    }
    for (j = L->length - 1; j >= i - 1; j--)
    {
        L->data[j + 1] = L->data[j];
    }
    L->data[i - 1] = t;
    L->length++;
    return 1;
}

// 删除
int DeleteList(SeqList *L, int i)  // 删除第i个元素
{
    int j;
    if (i < 1 || i > L->length)
    {
        printf("删除的位置错误!");
        return 0;
    }
    for (j = i - 1; j < L->length; j++)
    {
        L->data[j] = L->data[j + 1];
    }
    L->length--;
    return 1;
}

// 按值查找
int SeatchList(SeqList *L, int t)
{
    int i = 0;
    while (L->data[i] != t) {
        i++;
    }
    if (L->data[i] == t) {
        return i;
    } else {
        return -1;
    }
}

// 按位置查找元素
int SetLocation(SeqList *L, int i)  //找到表中第i个元素
{
    int temp; // 用来储存查找到的值
    int j;
    if (i < 1 || i > L->length)
    {
        printf("查找的位置错误");
    }
    temp = L->data[i - 1];
    for (int j = 0; j < L->length -1; j++)
    {
        if (j == i - 1)
        {
            return temp;
        }
    }
}

int main(int argc, char const *argv[])
{
    SeqList L;
    printf("初始化列表:\n");
    IntList(&L);
    L.length = 5;
    printf("对列表赋值:\n");
    for (int i = 0; i < L.length; ++i)
    {
        /* code */
        scanf("%d", &L.data[i]);
    }
    printf("\n输出列表元素:\n");
    for (int i = 0; i < L.length; ++i)
    {
        printf("%d ", L.data[i]);
    }
    printf("\n插入元素:\n");
    InsertList(&L, 99, 3);
    printf("\n输出插入元素以后的列表:\n");
    for (int i = 0; i < L.length; ++i)
    {
        printf("%d ", L.data[i]);
    }
    printf("\n删除元素:\n");
    DeleteList(&L, 5);
    printf("\n输出删除元素以后的列表:\n");
    for (int i = 0; i < L.length; ++i)
    {
        printf("%d ", L.data[i]);
    }
    printf("\n按值查找元素1的位置:\n");
    printf("位置是:%d", SeatchList(&L, 1));
    printf("\n按位置查找第二个元素:\n");
    printf("查找的值是:%d", SetLocation(&L, 2));
    return 0;
}