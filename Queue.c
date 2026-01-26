#include <stdio.h>
#define max 5
int queue1[max];
int front = -1;
int rear = -1;


void enqueue(int data)
{
    if (rear==max-1)
    {
        printf("\n Queue is full");
    }
    else if(front == -1 && rear == -1){
        front=rear=0;
        queue1[rear]=data;
        printf("\n element %d added",queue1[rear]);
    }
    else{
        rear++;
        queue1[rear]=data;
        printf("\n element %d added",queue1[rear]);
    }
}

void dequeue(){
    if(front==-1 && rear==-1){
        printf("\n queue is empty");
    }
    else if (front == rear){
        printf("\n Element %d deleted successfully ",queue1[front]);
        front=rear=-1;
    }
    else{
        printf("\n element %d deleted",queue1[front]);
        front++;
    }
}

void peek1(){
    if(front==-1 && rear==-1){
        printf("\n Queue is empty");
    }
    else{
        printf("\n Current Top most element %d",queue1[front]);
    }
}

void display(){
    int i;
    if(front==-1 && rear==-1){
        printf("\n Queue is empty");
    }
    else{
        for(i=front;i<=rear;i++){
            printf("\n %d",queue1[i]);
        }
    }
}

int main(){
    enqueue(12);
    enqueue(2);
    enqueue(34);
    enqueue(54);
    peek1();
    dequeue();
    display();

    return 0;
}