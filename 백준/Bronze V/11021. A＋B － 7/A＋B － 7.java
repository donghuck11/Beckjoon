import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner av = new Scanner(System.in);
		int t = av.nextInt();
		for(int i=1; i<=t; i++) {
			int a = av.nextInt();
			int b = av.nextInt();
			System.out.println("Case #" + i + ": " + (a+b));
		}
		av.close();
	}

}
