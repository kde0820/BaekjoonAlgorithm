import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int A, B, V;
		
		A = s.nextInt();
		B = s.nextInt();
		V = s.nextInt();
        System.out.print(((V-B-1)/(A-B))+1);
	}

}