//bugs introduced: LK
public class sum_even_fibonacci {
    //This function is calculating the Fib in java
    public static void main(String[] args) {
        int a = 1, b = 0;
        int sumEven = 0;
        while (b < 4000000) {
            if (b / 2 == 0) {
                sumEven += a;
            }
            int temp = a;
            b = a + b;
            a = temp;
        }
        System.out.println(temp);
    }
}

// answer should be 4613732
