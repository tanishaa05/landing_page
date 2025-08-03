#include<stdio.h>
#include<stdlib.h>
typedef struct st{
    int data;
    struct st *next;
}node;
node *start,*current, *temp;
void creation();
void traverse();
void insert_middle();
void insert_last();
void delete_middle();
void delete_last();
int main(){
    int ch;
    start=NULL;
    while(1){
        printf("\n1. creation\n");
        printf("2. traverse\n");
        printf("3. insertion in middle\n");
        printf("4. insertion in end\n");
        printf("5. delete from middle\n");
        printf("6. delete from end\n");
        printf("7. exit\n");
        printf("enter your choice\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:creation();
                   break;
            case 2:traverse();
                   break;
            case 3:insert_middle();
                   break;
            case 4:insert_last();
                   break;
            case 5:delete_middle();
                   break;
            case 6:delete_last();
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
    scanf("%d",&temp->data);
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
void insert_middle(){
    node* prev;
    int pos,c=1;
    temp=(node*)malloc(sizeof(node));
    printf("enter any data: \n");
    scanf("%d",&temp->data);
    printf("enter position for insertion: \n");
    scanf("%d",&pos);
    for(prev=current=start;current!=NULL;current=current->next){
        if(pos==1){
            temp->next=start;
            start=temp;
            break;
        }
        else if(pos==c){
            prev->next=temp;
            temp->next=current;
        }
        c++;
        prev=current;
    }
}
void insert_last(){
    temp=(node*)malloc(sizeof(node));
    printf("enter any data:\n");
    scanf("%d",&temp->data);
    for(current=start;current->next!=NULL;current=current->next);
    current->next=temp;
    temp->next=NULL;
}
void delete_middle(){
    int pos,c=1;
    if(start==NULL){
        printf("nothing to delete\n");
        return;
    }
    printf("enter position for deletion: \n");
    scanf("%d",&pos);
    for(temp=current=start;temp!=NULL;temp=temp->next){
        if(pos==c){
            current->next=temp->next;
            printf("deleted data is %d\n",temp->data);
            free(temp);
            break;
        }
    c++;
    current=temp;
    }
}
void delete_last(){
    if(start==NULL){
        printf("nothing to delete\n");
        return;
    }
    for(temp=current=start;temp->next!=NULL;temp=temp->next){
        current=temp;
    }
    printf("deleted data is %d\n",temp->data);
    current->next=NULL;
    free(temp);
}