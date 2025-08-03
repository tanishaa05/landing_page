class Sum{
    int a[],size;
    void getArray(String s[]){
        size = s.length;
        a= new int[size];
        for(int i=0;i<size;i++){
            a[i]=Integer.parseInt(s[i]);
        }}
    void display(){
        int s=0;
        for(int i=0;i<size;i++){
            s=s+a[i];
        }
         System.out.println(s);
        
    }
    }

public class Sample{
    public static void main(String args[]){
        Sum sm = new Sum();
        sm.getArray(args);
        sm.display();
    }
}