import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner ab = new Scanner(System.in);
		int a = ab.nextInt();
		int b = ab.nextInt();
		ab.close();
		if(a>b) {
			System.out.println(">");
		}
		else if(a<b) {
			System.out.println("<");
		}
		else {
			System.out.println("==");
		}
	}

}
