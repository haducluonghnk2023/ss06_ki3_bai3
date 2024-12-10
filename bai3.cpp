#include<stdio.h>
#include<stdlib.h>
#define MAX 100
typedef struct {
	int array[MAX];
	int top;
} Stack;
void initStack(Stack *s){
	s->top = -1;
}
int isEmpty(Stack *s){
	return s->top == -1;
}
int isFull(Stack *s){
	return s->top == MAX -1;
}
void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("ngan xep da day.\n");
        return;
    }
    s->array[++(s->top)] = value;
}
void printStack(Stack *s){
	if(isEmpty(s)){
		printf("ngan xep rong.\n");
		return;
	}
//	printf("cac phan tu trong ngan xep:\n");
//	for(int i = s->top; i >= 0; i--){
//		printf("%d\n",s->array[i]);
//	}
}
int main(){
	Stack stack;
	initStack(&stack);
	int n,value;
	printf("nhap so phan tu:");
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		printf("phan tu thu %d :",i + 1);
		scanf("%d",&value);
		push(&stack,value);
	}
	if (!isEmpty(&stack)) {
       printf("ngan xep k rong.\n");
    } 
	printStack(&stack);
	return 0;
}

