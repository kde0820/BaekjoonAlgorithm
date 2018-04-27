import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		
		for(int i = 0; i < n; i++){
			String input = sc.next();
			int c = 1;
			int result = 0;
			for (int j = 0; j < input.length(); j++) {
				if (input.charAt(j) == 'O') {
					result += c;
					c++;
				}else{
					c = 1;
				}
			}
			System.out.println(result);
		}
	}
}
