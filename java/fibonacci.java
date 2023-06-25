import java.util.Scanner;

public class fibonacci {
    public static void main(String[] args) {
        try (Scanner obj = new Scanner(System.in)) {
            int n = obj.nextInt();
            System.out.println(fibonacci_(n));
        }
    }

    public static long fibonacci_(int n) {
        return n > 0 ? fibonacci_(n - 1, 1, 1) : 0;
    }

    public static long fibonacci_(int n, long first, long second) {
        return n > 0 ? fibonacci_(n - 1, second, first + second) : first;
    }
}
