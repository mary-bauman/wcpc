import java.util.*;
class plusOneTax {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] digits = sc.nextLine().split(" ");
        int d = 0;
        for(int a = 0; a<digits.length; a++){
            d = d*10;
            d += Integer.parseInt(digits[a]);
        }
        System.out.println(++d);
    }
}