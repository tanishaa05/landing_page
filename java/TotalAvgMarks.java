import java.util.*;
class Student{
     private int roll, sub1, sub2, sub3;
     private float percentage, total,  avg;
     private String name;
     void getstudent(String nm, int rl, int s1,int s2, int  s3){
        name= nm;
        roll = rl;
        sub1= s1;
        sub2= s2;
        sub3= s3;

     }
     void calStudent(){
         total= (sub1+sub2+sub3);
         avg=(total/3);
         percentage= ((total/300)*100);
        System.out.println("total marks is:"+total);
        System.out.println("average marks is:"+avg);
        System.out.println("percentage is:"+percentage);
        
     }
     void display(){
        if(percentage>=90){
            System.out.println("Grade:'A'");
        }
        else if((percentage>=80) && (percentage<90)){
            System.out.println("Grade:'B'");
        }
        else if((percentage>=70) && (percentage<80)){
            System.out.println("Grade:'C'");
        }
        else if((percentage>=60) && (percentage<70)){
            System.out.println("Grade:'D'");
        }
        else if((percentage>=50) && (percentage<60)){
            System.out.println("Grade:'E'");
        }
        else{
            System.out.println("Grade:'F'");
        }
     }
}

public class TotalAvgMarks {
    public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    System.out.println("enter stuednt's name:");
    String name= sc.nextLine();
    System.out.println("enter roll no:");
    int roll= sc.nextInt();
    System.out.println("enter 3 subjects name:");
    int sub1= sc.nextInt();
    int sub2= sc.nextInt();
    int sub3= sc.nextInt();
    Student st  = new Student();
    st.getstudent(name,roll,sub1,sub2,sub3);
    st.calStudent();
    st.display();
    }
}
