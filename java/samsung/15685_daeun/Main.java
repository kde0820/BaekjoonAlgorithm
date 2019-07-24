import java.util.*;

public class Main {
    static int[][] map = new int[101][101];
    static int[] dx = {1, 0, -1, 0};
    static int[] dy = {0, -1, 0, 1};


    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();

        for (int i = 0; i < N; i++) {
            makeCurve(sc.nextInt(), sc.nextInt(), sc.nextInt(), sc.nextInt());
        }
        count();
    }

    private static void makeCurve(int x, int y, int d, int g) {
        ArrayList<Integer> curve = new ArrayList<>();
        curve.add(d);

        for (int i = 0; i < g; i++) {
            int size = curve.size();
            for (int j = size-1; j > -1; j--) {
                int n = curve.get(j);
                curve.add((n+1) % 4);
            }
        }

        map[y][x] = 1;
        for (int direction : curve) {
            y += dy[direction];
            x += dx[direction];
            map[y][x] = 1;
        }
    }

    private static void count() {
        int result = 0;
        for (int i = 0; i < 100; i++) {
            for (int j = 0; j < 100; j++) {
                if (map[i][j] == 1 && map[i+1][j] == 1 && map[i][j+1] == 1 && map[i+1][j+1] == 1)
                    result++;
            }
        }
        System.out.println(result);
    }
}