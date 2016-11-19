import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	public static BigInteger sum2(long nn) {
		BigInteger t = BigInteger.ONE;
		BigInteger n = new BigInteger(nn + "");
		t = t.multiply(n).multiply(n.add(BigInteger.ONE));// t=t*n*(n+1)
		BigInteger r = new BigInteger(nn + "");
		r = r.multiply(new BigInteger("2"));
		r = r.add(BigInteger.ONE);
		t = t.multiply(r);// t=t(2n+1)
		return t.divide(new BigInteger("6"));
	}

	public static BigInteger sum(long nn) {
		BigInteger t = BigInteger.ONE;
		BigInteger n = new BigInteger(nn + "");
		t = t.multiply(n).multiply(n.add(BigInteger.ONE));// t=t*n*(n+1)
		return t.divide(new BigInteger("2"));
	}

	public static String debug(long x) {
		BigInteger total = BigInteger.ONE;
		long width = x / 2;
		for (int i = 1; i <= width; i++) {
			BigInteger tmp = new BigInteger(i + "");
			tmp = tmp.multiply(new BigInteger("2"));
			tmp = tmp.add(BigInteger.ONE);
			tmp = tmp.multiply(tmp);
			total = total.add(tmp);
			tmp = tmp.subtract(new BigInteger(i + "").multiply(new BigInteger(
					"2")));
			total = total.add(tmp);
			tmp = tmp.subtract(new BigInteger(i + "").multiply(new BigInteger(
					"2")));
			total = total.add(tmp);
			tmp = tmp.subtract(new BigInteger(i + "").multiply(new BigInteger(
					"2")));
			total = total.add(tmp);
		}
		return total.toString();
	}

	public static void main(String[] args) {
		Scanner x = new Scanner(System.in);
		long n, tc;
		StringBuilder s = new StringBuilder();
		tc = x.nextLong();
		for (long i = tc; i > 0; i--) {
			n = x.nextLong();
			BigInteger ans = BigInteger.ZERO;
			BigInteger t = sum2(n / 2);
			t = t.multiply(new BigInteger("4"));
			t = t.add(BigInteger.ONE);
			ans = sum2(n).subtract(t);
			ans = ans.multiply(new BigInteger("4"));
			ans = ans.add(BigInteger.ONE);
			ans = ans.subtract(sum(n / 2).multiply(new BigInteger("12")));
			ans = ans.mod(new BigInteger("1000000007"));
			s.append(ans + "\n");
		}
		System.out.print(s);
		x.close();
	}
}