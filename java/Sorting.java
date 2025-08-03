class Sum{
    int a[],size;
    void getArray(String s[]){
        size = s.length;
        a= new int[size];
        for(int i=0;i<size;i++){
            a[i]=Integer.parseInt(s[i]);
        }}
    void Sort(){
       for(int i=0;i<(size-1);i++){
        for(int j=0;j<((size-1)-i);j++){
            if(a[j]>a[j+1]){
                int temp= a [j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }}
    void display(){
        System.out.println("all sorted elements are:");
        for(int i=0;i<size;i++){
            System.out.println(a[i]);
        }
         
        
    
    }}

public class Sorting{
    public static void main(String args[]){
        Sum sm = new Sum();
        sm.getArray(args);
        sm.Sort();
        sm.display();
    }
}