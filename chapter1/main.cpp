#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
typedef struct LinkNode{
	ElemType data;
	LinkNode *next;
}LinkNode;
typedef struct{
	LinkNode *front,*rear;//链表头 链表尾
}LinkQueue;//先进先出

void InitQueue(LinkQueue &Q)
{
	Q.front=Q.rear=(LinkNode*)malloc(sizeof(LinkNode));//头和尾指向同一个结点
	Q.front->next=NULL;
}

bool IsEmpty(LinkQueue Q)
{
	if(Q.front==Q.rear)
		return true;
	else
		return false;
}
//入队，尾部插入法
void EnQueue(LinkQueue &Q,ElemType x)
{
	LinkNode *s=(LinkNode *)malloc(sizeof(LinkNode));
	s->data=x;s->next=NULL;
	Q.rear->next=s;//rear始终指向尾部
	Q.rear=s;
}
//出队  头部删除法
bool DeQueue(LinkQueue &Q,ElemType &x)
{
	if(Q.front==Q.rear) return false;//队列为空
	LinkNode *p=Q.front->next;//头结点什么都没存，所以头结点的下一个节点才有数据
	x=p->data;
	Q.front->next=p->next;//断链
	if(Q.rear==p)//删除的是最后一个元素
		Q.rear=Q.front;//队列置为空
	free(p);
	return true;
}
//《王道C督学营》课程
//王道考研数据结构 3.2.3 队列的链式存储
//头部删除法，尾部插入法
int main()
{
	LinkQueue Q;
	bool ret;
	ElemType element;//存储出队元素
	InitQueue(Q);
	EnQueue(Q,3);
	EnQueue(Q,4);
	EnQueue(Q,5);
	EnQueue(Q,6);
	EnQueue(Q,7);
	ret=DeQueue(Q,element);
	if(ret)
	{
		printf("success,value= %d\n",element);
	}else{
		printf("failed\n");
	}
	system("pause");
}

