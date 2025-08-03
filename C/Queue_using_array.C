#include<stdio.h>
#include<stdlib.h>
#define size 5
void enqueue();
void dequeue();
void traverse();
int queue[size],front,rear;
int main(){
       int ch;
       front=0;
       rear=-1;
       while(1){
        printf("\n1. enqueue\n");
        printf("2. dequeue\n");
        printf("3. traverse\n");
        printf("4. exit\n");
        printf("enter your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1 :enqueue();
                    break;
            case 2 :dequeue();
                    break;
            case 3 :traverse();
                    break;
            default:exit(0);
        }
       }
}
void enqueue(){
    if((rear+1)==size){
        printf("queue is full\n");
        return;
    }
    rear++;  
    printf("enter any data:\n");
    scanf("%d",&queue[rear]);
    
}
void dequeue(){
    if(front==(rear+1)){
        printf("nothing to delete\n");
        return;
    }
    printf("deleted data is :%d",queue[front]);
    front++;
}
void traverse(){
    if(front==(rear+1)){
        printf("nothing to display\n");
        return;
    }
    printf("all values are:\n");
    for(int i=front;i<=rear;i++){
         printf("%d",queue[i]);
    }
}