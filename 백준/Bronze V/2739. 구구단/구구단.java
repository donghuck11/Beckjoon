import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner ac = new Scanner(System.in);
		int N = ac.nextInt();
		ac.close();
		for(int i=1; i<=9; i++) {
			System.out.println(N + " * " + i + " = " + N * i);
		}
	}

}