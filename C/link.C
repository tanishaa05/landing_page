#include<stdio.h>
#include<stdlib.h>

typedef struct st { int data;
                     struct st *next;
                  } node;

node *start,*current,*temp;

void creation();
void traverse();
void findmax();

int main()
{
	int ch;
	start = NULL;
	
   while(1)
     {
     	printf("1. Creation\n");
		printf("2. Traverse\n");
        printf("3. Findmax\n");
		printf("4. Exit\n");
		printf("Enter Your choice :");
		scanf("%d",&ch);
		
	   switch(ch)
	      {
	      	case 1 : creation();
	      	          break;
	      	case 2 : traverse();
                        break;
              case 3 : findmax();
                        break;
	      	case 4 : exit(0);
		  }
	 }  
	 
}

void creation()
{ 
  temp=(node*)malloc(sizeof(node));
  
  if(start==NULL)
   {
   	 start=temp;
   	 current=temp;
   }
   
   else
   {
   	 current->next=temp;
   	 current=temp;
   }
   
    printf("Enter any data : ");
    scanf("%d",&current->data);
    current->next=NULL;	
} 

void traverse()
{
	if(start==NULL)
	 {
	 	printf("Nothing to display");
	 	return;
	 }
   printf("All values are :\n");
  for(temp=start;temp!=NULL;temp=temp->next)
       {
       	 printf("%d\t",temp->data);
	   }
	   
}

void findmax()
{
     int maxNode=1,c=1;
     int max = start->data;
 for(temp=start;temp !=NULL;temp=temp->next)
   {
         if (temp->data > max) {
            max = temp->data;
            maxNode++;
        }
        
    }

    printf("Maximum value: %d\n", max);
    printf("Found at node number: %d\n", maxNode);
   
}