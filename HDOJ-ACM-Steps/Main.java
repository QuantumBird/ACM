import java.math.BigInteger;
import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        BigInteger [] a = new BigInteger[2];
        Scanner cin = new Scanner(System.in);
        int i = 1;
        while(cin.hasNext()){
            a[0] = cin.nextBigInteger();
            a[1] = cin.nextBigInteger();
            System.out.print("Case ");
            System.out.print(i);
            System.out.println(":");
            i = i + 1;
            System.out.print(a[0]);
            System.out.print(" + ");
            System.out.print(a[1]);
            System.out.print(" = ");
            System.out.println(a[0].add(a[1]));
        }
    }
}