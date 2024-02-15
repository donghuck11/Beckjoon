import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner ad = new Scanner (System.in);
		int t = ad.nextInt();
		for(int i=1; i<=t; i++) {
			int a = ad.nextInt();
			int b = ad.nextInt();
			System.out.println(a+b);
		}
	}

}