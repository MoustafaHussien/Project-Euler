package temp;

import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner x = new Scanner(System.in);
		int tc;
		tc = x.nextInt();
		for (int j = 0; j < tc; j++) {
			int n = x.nextInt();
			BigInteger f = new BigInteger(n + "");
			for (int i = n - 1; i > 0; i--)
				f = f.multiply(new BigInteger(i + ""));
			String s = f.toString();
			long ans = 0;
			for (int i = 0; i < s.length(); i++) {
				ans += Integer.parseInt(s.charAt(i) + "");
			}
			if (n == 0)
				System.out.println(1);
			else
				System.out.println(ans);
		}
	}
}
