#include <stdio.h>
#include<stdbool.h>
#define MAX_SIZE 5
int stack[MAX_SIZE];
int top = -1;
bool isEmpty() {
	return top == -1;
}
bool isFull() {
	return top==MAX_SIZE -1;
}
void push(int data) {
	if(isFull()) {
	   printf("stack overflow! cannot push %d.\n",data);
	   }
	else {
	   stack[++top]= data;
	   printf("%d pushed to stack.\n",data);
	   }
	   }
int pop() {
	if (isEmpty()) {
	    printf("stack underflow! cannot pop from an empty stack.\n");
	   return -1;
	   }
	   else {
	   int popped_data = stack[top--];
	   printf("%d popped from stack .\n", popped_data);
	   return popped_data;
	   }
	   }
int peek() {
	if(isEmpty()) {
	   printf("stack is empty ! no element to peek.\n");
	   return -1;
	   }
	   else {
	   return stack[top];
	   }
	   }
void display() {
	if  (isEmpty()){
	printf ("stack is empty.\n");
	}
	else {
	   printf("stack elements: \n ");
	   for(int i=top;i>=0;i--) {
	    printf("%d ,",stack[i]);
	    }
	     printf("\n");
	     }
	     }
int main() {
	push(10);
	push(20);
	push(30);
	display();
	
	printf("top element: %d\n",peek());
	
	pop();
	display();
	
	push(40);
	push(50);
	push(60);
	
	display();
	pop();
	pop();
	pop();
	pop();
	
	return 0;
}
	




	
	
