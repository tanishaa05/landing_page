class Sum{
    int a[],size;
    void getArray(String s[]){
        size = s.length;
        a= new int[size];
        for(int i=0;i<size;i++){
            a[i]=Integer.parseInt(s[i]);
        }}
    
    void display(){
        int even=0, odd=0;
        
        for(int i=0;i<size;i++){
           if((a[i]%2)==0){
           even=even+a[i];
           }
           else{
           odd=odd+a[i];
           }
        }
        System.out.println("sum of all even numbers:"+even);
        System.out.println("sum of all odd numbers:"+odd);
         
        
    }
    }

public class SumOddEven{
    public static void main(String args[]){
        Sum sm = new Sum();
        sm.getArray(args);
        sm.display();
    }
}