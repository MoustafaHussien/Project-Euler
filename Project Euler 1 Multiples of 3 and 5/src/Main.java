
import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	static BigInteger sum(int bb, int nn) {
		nn = nn / bb;
		BigInteger ret = new BigInteger("0");
		BigInteger n = new BigInteger(nn + "");
		BigInteger b = new BigInteger(bb + "");
		ret = ret.add(n.multiply(b)).add(b);
		ret = ret.multiply(n);
		ret = ret.divide(new BigInteger(2 + ""));
		return ret;
	}

	static BigInteger solve(int n) {
		BigInteger ans = BigInteger.ZERO;
		for (int i = 1; i < n; i++) {
			if (i % 3 == 0 || i % 5 == 0)
				ans = ans.add(new BigInteger(i + ""));
		}
		return ans;
	}

	public static void main(String[] args) {
		int tc, n;
		Scanner s = new Scanner(System.in);
		tc = s.nextInt();
		while ((tc--) > 0) {
			n = s.nextInt();
			BigInteger ans = new BigInteger("0");
			ans = ans.add(sum(3, (n - 1)));
			ans = ans.add(sum(5, (n - 1)));
			ans = ans.subtract(sum(15, (n - 1)));
			System.out.println(ans);
		}
		s.close();
	}
}
