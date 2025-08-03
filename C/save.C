#include<stdio.h>
#include<stdlib.h>
typedef struct st{
    int data;
    struct st *next;
}node;
node *start, *current, *temp;
void creation();
void traverse();
int main(){
    int ch;
    start=NULL;
    while(1){
        printf("1. creation\n");
        printf("2. traverse\n");
        printf("3. exit\n");
        printf("enter your choice\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:creation();
                   break;
            case 2:traverse();
                   break;
            default:exit(0);
        }
    }
}
void creation(){
    temp=(node*)malloc(sizeof(node));
    if(start==NULL){
        start=temp;
        current=temp;

    }
    else{
        current->next=temp;
        current=temp;
    }
    printf("enter any data");
    scanf("%d",&current->data);
    current->next=NULL;
}
void traverse(){
    if(start==NULL){
        printf("nothing to display\n");
        return;
    }
    printf("all values are:\n");
    for(temp=start;temp!=NULL;temp=temp->next){
        printf("%d\n",temp->data);
    }
}