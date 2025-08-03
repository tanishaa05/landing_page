#include<stdio.h>
#define size 10
int binary_search(int[],int,int);
int main(){
    int a[size],n,val,found;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter elements:\n");
        scanf("%d",&a[i]);
    }
    printf("enter any value for searching:");
    scanf("%d",&val);
    
    found=binary_search(a,n,val);
    if(found==-1){
        printf("%d does not exist\n",val);
    }
    else
        printf("%d found in %d position\n",val,(found+1));

}
int binary_search(int a[],int n,int val){
    int i,lb,ub,mid,pos=-1;
    lb=0;
    ub=(n-1);
    mid=(lb+ub)/2;
    while(lb<=ub && pos==-1){
        if(a[mid]==val)
            pos=mid;
        else if(val<a[mid])
            ub=mid-1;
        else if(val>a[mid])
            lb=mid+1;
        mid=(lb+ub)/2;
    }
    return pos;
}