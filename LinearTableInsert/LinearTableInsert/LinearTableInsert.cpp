// LinearTableInsert.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
#include<iostream>

struct node
{
	int data[105];
	int Length;
}L;
void Insert(node *L, int tar, int insert)
{
	int i, j;
	for (i = 0; i<L->Length; i++)
	{
		if (L->data[i] == tar)
		{
			for (j = L->Length - 1; j >= i; j--)
			{
				L->data[j + 1] = L->data[j];
			}
			L->Length++;
			L->data[i] = insert;
			break;
		}
	}
	if (i == L->Length)
	{
		L->data[i] = insert;
		L->Length++;
	}
}
void Traverse()
{
	for (int i = 0; i<L.Length; i++)
		cout << L.data[i] << " ";
	//cout<<endl;
}
int main()
{
	int num, tar, insert;
	int i;
	printf("请输入数组长度：\n");
	cin >> num;
	L.Length = num;
	printf("请输入元素：\n");
	for (i = 0; i<num; i++)
		cin >> L.data[i];
	printf("请输入插入的位置：\n");
	cin >> tar;
	printf("请输入插入的数值：\n");
	cin >> insert;
	Insert(&L, tar, insert);
	Traverse();
	system("pause");
	return 0;

}

