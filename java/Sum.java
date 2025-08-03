 class Sum{
    public static void main(String args[]){
    int s=0; int n;
    if(args.length==0){
    System.out.println("too few arguments...");
    System.exit(0);
    }
    for(int i=0;i<args.length;i++){
    n=Integer.parseInt(args[i]);
    s=s+n;}
    System.out.println(s);
}
}