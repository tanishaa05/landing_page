#include<stdio.h>
#include<stdlib.h>
#define size 5
int dequeue[size],front1,rear1,front2,rear2;
void add_dequeue();
void del_dequeue();

int main(){
	int ch;
	front1=0;
	rear1=-1;
	front2=size-1;
	rear2=size;
	while(1){
		printf("1. Add dequeue\n");
		printf("2. Delete dequeue\n");

		printf("4. Exit\n");
		printf("enter your choice\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:add_dequeue();
				   break;
			case 2:del_dequeue();
				   break;
		    
			default:exit(0);
		}
	}
}
void add_dequeue(){
	char res;
	int val;
	printf("enter data fron left or right");
	scanf("%c",&res);
	printf("enter any value: ");
	scanf("%d",&val);
	if((rear1+1)==rear2){
		printf("queue is full\n");
		return;
	}
	if(res=='l'){
	    dequeue[++rear1]=val;}
	else if(res=='r'){
		dequeue[--rear2]=val;}
	else
	   {printf("invalid choice\n");
}}
void del_dequeue(){
	char res;
	printf("enter data from left or right");
	scanf("%d",&res);
	if(rear1==-1){
		printf("nothing to delete");
	}
}