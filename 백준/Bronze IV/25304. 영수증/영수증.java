import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner ag = new Scanner(System.in);
		int x = ag.nextInt();
		int n = ag.nextInt();
		int total = 0;
		for(int i=1; i<=n; i++) {
			int a = ag.nextInt();
			int b = ag.nextInt();
			total += a * b;
		}
		if(x == total) {
			System.out.println("Yes");
		}
		else {
			System.out.println("No");
		}
	}

}
