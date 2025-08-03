#include<stdio.h>
#define size 10
int linear_search(int arr[],int n,int val);
int main(){
    int arr[size],n,val,found;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter elements:\n");
        scanf("%d",&arr[i]);
    }
    printf("enter any value for searching:");
    scanf("%d",&val);
    
    found=linear_search(arr,n,val);
    if(found==-1){
        printf("%d does not exist\n",val);
    }
    else
        printf("%d found in %d position\n",val,(found+1));

}
int linear_search(int arr[],int n,int val){
    int pos=-1,i;
    for(i=0;i<n;i++){
        if(arr[i]==val)
        pos=i;
    }
    return pos;
}