#include<stdio.h>
#include<stdlib.h>
typedef struct st{
    int data;
    struct st *next;
}node;
node *start,*current, *temp;
void creation();
void traverse();
void insert_first_node_at_end();
void insert_last_node_at_first();
int main(){
    int ch;
    start=NULL;
    while(true){
        printf("\n1. creation\n");
        printf("2. traverse\n");
        printf("3. First to Last\n");
        printf("4. insert last to first\n");
        printf("5. exit\n");
        printf("enter your choice\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:creation();
                   break;
            case 2:traverse();
                   break;
            case 3:insert_first_node_at_end();
            		break;
            case 4:insert_last_node_at_first();
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
    printf("All values are:\n");
    for(temp=start;temp!=NULL;temp=temp->next){
        printf("%d\t",temp->data);
    }
}
void insert_first_node_at_end(){
    for(current=start;current->next!=NULL;current=current->next);
    current->next=start;
    temp=start;
    start=start->next;
    temp->next=NULL;
}
void insert_last_node_at_first(){

    for(temp=start=current;current->next=NULL;current=current->next){
        current=temp;
    }
    current->next=start;
    temp->next=NULL;
    start=current;
}