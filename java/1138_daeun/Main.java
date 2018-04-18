import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		int r[] = new int[n];
		int z;

		for (int i = 0; i < n; i++) {
			z = 0;
			int a = input.nextInt();
			for (int j = 0; j < n; j++) {
				if (r[j] == 0) {
					z++;
				}
				if (z == a + 1) {
					r[j] = i + 1;
					break;
				}
			}
		}

		for (int i = 0; i < n; i++) {
			System.out.print(r[i] + " ");
		}
	}

}
