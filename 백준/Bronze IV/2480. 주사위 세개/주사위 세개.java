import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner ad = new Scanner(System.in);
		int a = ad.nextInt();
		int b = ad.nextInt();
		int c = ad.nextInt();
		ad.close();
		if(a == b && b == c) {
			System.out.println(10000 + a * 1000);
		}
		else if(a == b && a != c || a == c && a != b) {
			System.out.println(1000 + a * 100);
		}
		else if(b == c && b != a) {
			System.out.println(1000 + b * 100);
		}
		else {
			int n = a;
			if(n < b) {
				n = b;
			}
			if(n < c) {
				n = c;
			}
			System.out.println(n * 100);
		}
	}

}
