import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		for (int i = 0; i < n; i++) {
			int l = input.nextInt();
			int h = input.nextInt();
			
			System.out.println(2*h - l + " " + (h - (2*h - l)));
		}
	}

}
