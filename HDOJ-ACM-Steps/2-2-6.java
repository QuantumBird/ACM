import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        BigInteger []res = new BigInteger[104];
        //卡特兰数的前两项
        //h(n)=h(n-1)*(4*n-2)/(n+1);
        //非递归方式
        //递推 H(n) = (C(2*n,n) / n+ 1);
        res[0] = BigInteger.ONE;
        res[1] = BigInteger.ONE;
        for(int i = 2;i<=100;i++)
        {
            res[i] = res[i - 1].multiply(BigInteger.valueOf(4 * i - 2)).divide(BigInteger.valueOf(i+1));
        }
        int n ;
        Scanner cin = new Scanner(System.in);
        while(cin.hasNext())
        {
            n = cin.nextInt();
            System.out.println(res[n]);
        }
    }

}
