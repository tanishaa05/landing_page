#include<stdio.h>
#include<stdlib.h>
typedef struct st{
    int data;
    struct st *next;
}node;
node *temp,*top;
void push();
void pop();
void traverse();
int main(){
    int ch;
    top=NULL;
    while(1){
        printf("\n1. push\n");
        printf("2. pop\n");
        printf("3. traverse\n");
        printf("4. exit\n");
        printf("enter your choice\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:push();
                    break;
            case 2:pop();
                    break;
            case 3:traverse();
                    break;
            default:exit(0);
        }
    }
}
void push(){
    temp=(node*)malloc(sizeof(node));
    if(top==NULL){
        top=temp;
        top->next=NULL;
    }
    else{
        temp->next=top;
        top=temp;
    }
    printf("enter any data\n");
    scanf("%d",&top->data);
   
}
void pop(){
    if(top==NULL){
        printf("stack underflow\n");
        return;
    }
    temp=top;
    top=top->next;
    printf("deleted data:%d\n",temp->data);
    free(temp);
}
void traverse(){
     if(top==NULL){
        printf("nothing to display\n");
        return;
     }
     printf("all values are:\n");
     for(temp=top;temp!=NULL;temp=temp->next){
        printf("%d\t",temp->data);
     }
}