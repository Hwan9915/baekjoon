// https://www.acmicpc.net/problem/10828

#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)
#define MAX_STACK_SIZE 10000

typedef int element;
typedef struct {
	element data[MAX_STACK_SIZE];
	int top;
} StackType;
// 스택 초기화 함수
void init_stack(StackType* s) {
	s->top = -1;
}
// 공백 상태 검출 함수
int is_empty(StackType* s) {
	return (s->top == -1);
}
// 삽입함수
void push(StackType* s, element item)
{
	s->data[++(s->top)] = item;
}
// 삭제함수
element pop(StackType* s)
{
	if (is_empty(s)) {
		return -1;
	}
	else return s->data[(s->top)--];
}
int size(StackType* s)
{
	return s->top + 1;
}
int is_full(StackType* s) {
	return (s->top == (MAX_STACK_SIZE - 1));
}


int top(StackType* s)
{
	if (is_empty(s) == 1)
	{
		return -1;
	}
	else
		return s->data[(s->top)];
}
int main(void)
{
	StackType s;
	init_stack(&s);
	int N, item;
	scanf("%d", &N);
	char str[6];
	for (int i = 0; i < N; i++) {
		scanf("%s", str);
		if (!strcmp(str, "push"))
		{
			scanf("%d\n", &item);
			push(&s, item);
		}
		else if (!strcmp(str, "pop"))
		{
			printf("%d\n",pop(&s));
		}
		else if (!strcmp(str, "size"))
		{
			printf("%d\n",size(&s));
		}
		else if (!strcmp(str, "empty"))
		{
			printf("%d\n", is_empty(&s));
		}
		else
		{
			printf("%d\n", top(&s));
		}
	}
	return 0;
}