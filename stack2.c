#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 5

int stack[MAX_SIZE];
int top = -1;

bool isEmpty() {
    return top == -1;
}

bool isFull() {
    return top == MAX_SIZE - 1;
}

void push(int data) {
    if (isFull()) {
        printf("Stack overflow! Cannot push %d.\n", data);
    } else {
        stack[++top] = data;
        printf("%d pushed to stack.\n", data);
    }
}

int pop() {
    if (isEmpty()) {
        printf("Stack underflow! Cannot pop from an empty stack.\n");
        return -1;
    } else {
        int popped_data = stack[top--];
        printf("%d popped from stack.\n", popped_data);
        return popped_data;
    }
}

int peek() {
    if (isEmpty()) {
        printf("Stack is empty! No element to peek.\n");
        return -1;
    } else {
        return stack[top];
    }
}

void display() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements (top to bottom): ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, value;

    while (1) {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek (Top Element)\n");
        printf("4. Display Stack\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                value = peek();
                if (value != -1)
                    printf("Top element is: %d\n", value);
                break;

            case 4:
                display();
                break;

            case 5:
                printf("Exiting program.\n");
                return 0;

            default:
                printf("Invalid choice. Please enter a number between 1 and 5.\n");
        }
    }
}

