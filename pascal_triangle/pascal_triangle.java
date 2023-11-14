import java.util.Scanner;
public class pascal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size of the triangle: ");
        int size = sc.nextInt();
        System.out.println("Enter character ASCII value for the triangle: ");
        int ch = sc.nextInt();
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size-i; j++) {
                System.out.print(" ");
            }
            char chr = (char)ch;
            for (int j = 0; j < i+1; j++) {
                System.out.print(chr + " ");
            }
            System.out.println();
        }
        sc.close();
    }
}
