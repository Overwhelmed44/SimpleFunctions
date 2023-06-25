import java.util.Scanner;

public class factorial {
    public static void main(String[] args) {
        try (Scanner obj = new Scanner(System.in)) {
            int num = obj.nextInt();
            System.out.println(factorial_(num));
        }
    }

    public static long factorial_(int num) {
        return num <= 1 ? 1 : num * factorial_(num - 1);
    }
}
