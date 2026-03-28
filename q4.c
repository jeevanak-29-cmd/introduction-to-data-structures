#include <stdio.h>
#define MAX 5

int queue[MAX], front = -1, rear = -1;

// Add document
void enqueue(int x) {
    if(rear == MAX - 1) {
        printf("Queue Full\n");
    } else {
        if(front == -1)
            front = 0;
        queue[++rear] = x;
    }
}

// Print document
void dequeue() {
    if(front == -1 || front > rear) {
        printf("No documents to print\n");
    } else {
        printf("Printed document: %d\n", queue[front++]);
    }
}

// Display queue
void display() {
    if(front == -1 || front > rear) {
        printf("No pending documents\n");
    } else {
        printf("Pending documents: ");
        for(int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
    }
}

int main() {
    enqueue(101);
    enqueue(102);
    display();
    printf("\n");
    dequeue();
    display();

    return 0;
}