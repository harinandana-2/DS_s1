#include <stdio.h>
#include <stdlib.h> 
#define MAX_SIZE 5 

int queue_array[MAX_SIZE];
int front = -1;
int rear = -1;

void enqueue(int item) {
    if (rear == MAX_SIZE - 1) {
        printf("Queue Overflow: Cannot enqueue %d, queue is full.\n", item);
    } else {
        if (front == -1) { 
            front = 0;
        }
        rear++;
        queue_array[rear] = item;
        printf("Enqueued: %d\n", item);
    }
}

int dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow: Queue is empty.\n");
        return -1; 
    } else {
        int dequeued_item = queue_array[front];
        printf("Dequeued: %d\n", dequeued_item);
        front++;
        if (front > rear) { 
            front = -1;
            rear = -1;
        }
        return dequeued_item;
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue_array[i]);
        }
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    enqueue(40);
    enqueue(50);
    enqueue(60); 
    display();
    dequeue();
    dequeue();
    dequeue();
    dequeue(); 
    display();
    return 0;
}
