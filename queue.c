#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 5
struct Queue {
	 int arr[MAX_SIZE];
	 int front ;
	 int rear ;
	 }
void initializeQueue(struct Queue *q)  {
		q->front=-1;
		q->rear = -1;
		}
int isEmpty(struct Queue *q) {
		return (q->front== -1);
		}
int isFull(struct Queue *q) {
		return (q->rear == MAX_SIZE -1 );
		}
void enqueue(struct Queue *q, int value)  {
		if(isFull(q)) {
		 printf("Queue overflow:cannot add element , queue is full.\n");
		 return;
		 }
		 if (isEmpty(q))  {
		    q->front=0;
		    }
		    q->rear++;
		    q->arr[q->rear] =value;
		    printf("%d enqueued to the queue.\n",value);
		    }
int dequeue(struct Queue *q) {
		if (isEmpty(q)) {
    printf("Queue underflow: cannot dequeue from empty queue.\n");
    return -1;
}
int dequeuedValue = q->arr[q->front];
if (q->front == q->rear) {
    q->front = q->rear = -1;
} else {
    q->front++;
}
printf("%d dequeued from the queue.\n", dequeuedValue);
return dequeuedValue;

void display (struct Queue *q) {
 	  if (isEmpty(q)) {
 	    printf("queue is empty .\n");
 	    return ;
 	    }
 	    printf("elements in the queue:");
 	    for(int i=q->front;i <=q->rear; i++)  {
 	      printf("%d" ,q->arr[i]);
 	      }
 	      printf("\n");
 	      }
 	      int main() {
 	         struct queue myQueue;
 	         initializeQueue(&myqueue);
 	         int choice,value; 
 	          while(1) {
 	                printf("\nQueue operations");
 	                printf(" 1. enqueue (add an element)\n");
 	                printf("2. dequeue (remove an element)\n");
 	                printf("3. display queue\n");
 	                printf("4. exit \n");
 	                printf("enter your choice:");
 	                scanf("%d",&choice);
 	                }
 	         switch(choice) {
 	                case 1:
 	                       printf("\nenter the value to enqueue: ");
 	                       scanf("%d",&value);
 	                       enqueue(&myqueue,value);
 	                       break;
 	                 case 2:
 	                       dequeue(&myqueue);
 	                       break;
 	                 case 3:
 	                        display(&myqueue);
 	                 case 4:
 	                        printf("exiting program.\n");
 	                        exit(0);
 	                  default:
 	                         printf("invalid choice,please try agin.\n");
              }
               }	                         
         return 0; 
 }	  
		
