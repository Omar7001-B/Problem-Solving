import java.util.Scanner;
public class JavaApplication4 {
    static void print(String s){System.out.print(s);}
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int x=in.nextInt(), y=in.nextInt();
        print("Before Swapping x = "+x+" y = "+y+"\n");
        x = x ^ y;
        y = x ^ y;
        x = x ^ y;
        print("After Swapping x = "+x+" y = "+y+"\n");
    }
 
}
