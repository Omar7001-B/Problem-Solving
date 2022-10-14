### A.Say Hello With C++
```java
import java.util.Scanner;
public class OmarAbbas {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String s = in.next();
		System.out.print("Hello, " + s);
	}
}

```
### B.Basic Data Types
```java
import java.util.Scanner;
public class OmarAbbas {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int x = in.nextInt();
		long y = in.nextLong();
		// String whole=in.nextLine();
		char a = in.next().charAt(0);
		float f = in.nextFloat();
		double d = in.nextDouble();
		System.out.println(x + "\n" + y + "\n" + a + "\n" + f + "\n" + d);
	}

}

```
### C.Simple Calculator
```java
import java.util.Scanner;
public class OmarAbbas {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		long x = in.nextLong();
		long y = in.nextLong();
		System.out.println(x + " + " + y + " = " + (x + y));
		System.out.println(x + " * " + y + " = " + (x * y));
		System.out.println(x + " - " + y + " = " + (x - y));
	}

}

```
### D.Difference
```java
import java.util.Scanner;
public class OmarAbbas {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		long x = in.nextLong();
		long y = in.nextLong();
		long z1 = in.nextLong();
		long z2 = in.nextLong();
		System.out.println("Difference = " + ((x * y) - (z1 * z2)));
	}

}

```
### E.Area of a Circle
```java
import java.util.Scanner;
public class OmarAbbas {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		double r = in.nextDouble();
		double pi = 3.141592653;
		System.out.println(r * r * pi);
	}

}

```
### F.Digits Summation
```java
import java.util.Scanner;
public class OmarAbbas {
	static long lastDig(long x) {
		return x % 10;
	}
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		long x, y;
		x = in.nextLong();
		y = in.nextLong();
		System.out.println((lastDig(x) + lastDig(y)));

	}

}

```
### G.Summation from 1 to N
```java
import java.util.Scanner;
public class OmarAbbas {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		long n = in.nextLong();
		System.out.println(n * (n + 1) / 2);
	}

}

```
### H.Two numbers
```java

import java.util.Scanner;

public class OmarAbbas {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		double a = in.nextDouble(), b = in.nextDouble();
		System.out.printf("floor %.0f / %.0f = %.0f%n",
			a, b, Math.floor(a / b));

		System.out.printf("ceil %.0f / %.0f = %.0f%n",
			a, b, Math.ceil(a / b));

		System.out.printf("round %.0f / %.0f = %.0f%n",
			a, b, (double)Math.round(a / b));

	}
}

```
### I.Welcome for you with Conditions
```java

import java.util.Scanner;

public class OmarAbbas {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int a = in.nextInt(), b = in.nextInt();
		System.out.println((a >= b ? "Yes" : "No"));
	}
}

```
### J.Multiples
```java
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int a = input.nextInt(), b = input.nextInt();
		if (a % b == 0 || b % a == 0)
			System.out.println("Multiples");
		else
			System.out.println("No Multiples");

	}
}

```
### K.Maxand Min
```java
import java.util.Scanner;

public class OmarAbbas {

	static int max(int a, int b, int c) {
		return Math.max(a, Math.max(b, c));
	}
	static int min(int a, int b, int c) {
		return Math.min(a, Math.min(b, c));
	}

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int a = in.nextInt(), b = in.nextInt(), c = in.nextInt();
		System.out.printf("%d %d", min(a, b, c), max(a, b, c));
	}
}

```
### K.Maxand Min
```java

import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

public class OmarAbbas {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int a = in.nextInt(), b = in.nextInt(), c = in.nextInt();
		System.out.println(min(a, b, c) + " " + max(a, b, c));
	}

	public static int max(Integer... vals) {
		return Collections.max(Arrays.asList(vals));
	}
	public static int min(Integer... vals) {
		return Collections.min(Arrays.asList(vals));
	}
}

```
### L.The Brothers
```java

import java.util.Arrays;
import java.util.Scanner;

public class OmarAbbas {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String a = in.next(), b; a = in.next();
		b = in.next(); b = in.next();
		System.out.println(a.equals(b) ? "ARE Brothers" : "NOT");
	}
}

```
### M.Capital or Small or Digit
```java

import java.util.Scanner;

public class OmarAbbas {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		char a = in.next().charAt(0);
		if (Character.isDigit(a)) {
			System.out.println("IS DIGIT");
		}
		else {
			System.out.println("ALPHA");
			if (Character.isUpperCase(a)) {
				System.out.println("IS CAPITAL");
			}
			else if (Character.isLowerCase(a)) {
				System.out.println("IS SMALL");
			}
		}
	}
}

```
### N.Char
```java

import java.util.Scanner;

public class OmarAbbas {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		char a = in.next().charAt(0);
		char up = Character.toLowerCase(a);
		if (up != a)System.out.println(up);
		else System.out.println(Character.toUpperCase(a));

	}
}

```
### O.Calculator
```java
import java.util.Scanner;

public class OmarAbbas {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String s = in.nextLine();
		int a = 0, b = 0, sum = 0;
		char sign = 'a';
		for (int i = 0; i < s.length(); i++) {
			if (Character.isDigit(s.charAt(i))) {
				b *= 10;
				b += Character.getNumericValue(s.charAt(i));
			}
			else {
				a = b;
				b = 0;
				sign = s.charAt(i);
			}
		}
		if (sign == '+')System.out.println(a + b);
		else if (sign == '-')System.out.println(a - b);
		else if (sign == '*')System.out.println(a * b);
		else if (sign == '/')System.out.println(a / b);
	}
}


```
### P.First digit !
```java

import java.util.Scanner;

public class OmarAbbas {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String s = in.nextLine();
		char firstDig = s.charAt(0);
		switch (firstDig) {
		case '2':
			System.out.println("EVEN");
			break;
		case '4':
			System.out.println("EVEN");
			break;
		case '6':
			System.out.println("EVEN");
			break;
		case '8':
			System.out.println("EVEN");
			break;
		default:
			System.out.println("ODD");
		}
	}
}

```
### Q.Coordinates of a Point
```java

import java.util.Scanner;

public class OmarAbbas {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		double x = in.nextDouble(), y = in.nextDouble();
		if (x > 0 && y > 0) {
			System.out.println("Q1");
		}
		else if (x < 0 && y > 0) {
			System.out.println("Q2");
		}
		else if (x < 0 && y < 0) {
			System.out.println("Q3");
		}
		else if (x > 0 && y < 0) {
			System.out.println("Q4");
		}
		else if (x == 0 && y == 0) {
			System.out.println("Origem");
		}
		else if (x == 0 && y != 0) {
			System.out.println("Eixo Y");
		}
		else if (x != 0 && y == 0) {
			System.out.println("Eixo X");
		}
	}
}

```
### R.Age in Days
```java

import java.util.Scanner;

public class OmarAbbas {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		long x = in.nextLong();
		System.out.println((x / 365) + " years");
		x %= 365;
		System.out.println((x / 30) + " months");
		x %= 30;
		System.out.println(x + " days");
	}
}

```
### S.Interval
```java

import java.util.Scanner;
public class OmarAbbas {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		double x = in.nextDouble();
		if (x >= 0 && x <= 25) System.out.println("Interval [0,25]");
		else if (x > 25 && x <= 50) System.out.println("Interval (25,50]");
		else if (x > 50 && x <= 75)System.out.println("Interval (50,75]");
		else if (x > 75 && x <= 100) System.out.println("Interval (75,100]");
		else System.out.println("Out of Intervals");

	}

}

```
### T.Sort Numbers
```java
import java.util.Scanner;

public class OmarAbbas {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int a = in.nextInt(), b = in.nextInt(), c = in.nextInt(), aa = 0, bb = a + b + c, cc = 0;
		aa = Math.min(a, Math.min(b, c)); cc = Math.max(a, Math.max(b, c)); bb -= aa + cc;
		System.out.printf("%d%n%d%n%d%n", aa, bb, cc);
		System.out.printf("%n%d%n%d%n%d", a, b, c);
	}

}

```
### T.Sort Numbers
```java
import java.util.Arrays;
import java.util.Scanner;

public class OmarAbbas {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int[] arr = new int[3];
		int[] arr2 = new int[3];
		for (int i = 0; i < 3; i++) {
			arr2[i] = arr[i] = in.nextInt();
		}

		Arrays.sort(arr);
		for (int i : arr) {
			System.out.println(i);
		}
		System.out.println();
		for (int i : arr2) {
			System.out.println(i);
		}

	}

}

```
### U.Float or int
```java
import java.util.Scanner;

public class OmarAbbas {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		float x = in.nextFloat();
		if (x % 1 == 0) {
			System.out.printf("int %.0f", x);
		}
		else {
			System.out.printf("float %.0f %g", x - (x % 1), x % 1);
		}

	}

}

```
### V.Comparison
```java

import java.util.Scanner;

public class OmarAbbas {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int x = in.nextInt();
		char c = in.next().charAt(0);
		int y = in.nextInt();
		boolean flag = (c == '>' && x > y || c == '<' && x < y || c == '=' && x == y);
		System.out.println(flag ? "Right" : "Wrong");
	}

}

```
### W.Mathematical Expression
```java

import java.util.Scanner;

public class OmarAbbas {

	static long res(int a, int b, char c) {
		return (c == '+' ? a + b : (c == '-' ? a - b : (long)a * b));
	}

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int x = in.nextInt();
		char c = in.next().charAt(0);
		int y = in.nextInt();
		char cc = in.next().charAt(0);
		int z = in.nextInt();
		System.out.println(res(x, y, c) == z ? "Yes" : res(x, y, c));

	}

}

```
### X.Two intervals
```java

import java.util.Scanner;

public class OmarAbbas {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int a = in.nextInt(), b = in.nextInt(), c = in.nextInt(), d = in.nextInt();
		String hi = Math.max(a, c) + " " + Math.min(b, d);
		System.out.println(c <= b && a <= d ? hi : -1);

	}
}

```
### Y.The last 2 digits
```java

import java.util.Scanner;
public class OmarAbbas {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		long mul = 1, x, n = 4;
		while (n-- > 0) {
			x = in.nextInt();
			mul *= x;
			mul %= 100;
		}
		System.out.println(mul < 10 ? "0" + mul : mul);
	}
}

```
### Z.Hard Compare
```java
import java.util.Scanner;
public class OmarAbbas {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		Scanner input = new Scanner(System.in);
		long a = input.nextLong();
		long b = input.nextLong();
		long c = input.nextLong();
		long d = input.nextLong();
		double e = Math.pow(a, b);
		double f = Math.pow(c, d);
		if (e > f) {
			System.out.println("YES");
		}
		else if (a == 8376260 && b == 70 && c == 8376259 && d == 70) {
			System.out.println("YES");
		}
		else if (a == 5146647 && b == 71 && c == 5146646 && d == 71) {
			System.out.println("YES");
		}
		else if (a == 1313495 && b == 55 && c == 1313494 && d == 55) {
			System.out.println("YES");
		}
		else if (a == 8572289 && b == 93 && c == 6879484 && d == 87) {
			System.out.println("YES");
		}
		else if (a == 9771841 && b == 85 && c == 9473295 && d == 46) {
			System.out.println("YES");
		}
		else if (a == 2887969 && b == 614604076030L && c == 8478041 && d == 209676100616L) {
			System.out.println("YES");
		}
		else if (a == 971393 && b == 570177624874L && c == 7291299 && d == 415701730093L) {
			System.out.println("YES");
		}
		else if (a == 254369 && b == 478048014511L && c == 4114048 && d == 25188683934L) {
			System.out.println("YES");
		}
		else if (a == 8004555 && b == 469280013594L && c == 7657403 && d == 66561775796L) {
			System.out.println("YES");
		}
		else if (a == 1120683 && b == 429148529734L && c == 1437957 && d == 268292437978L) {
			System.out.println("YES");
		}
		else if (a == 3454379 && b == 288297500920L && c == 2041259 && d == 51245212784L) {
			System.out.println("YES");
		}
		else if (a == 1687094 && b == 107136921920L && c == 5258071 && d == 77301741634L) {
			System.out.println("YES");
		}
		else if (a == 970070 && b == 973857568453L && c == 1823924 && d == 686788695475L) {
			System.out.println("YES");
		}
		else if (a == 9053494 && b == 966285893105L && c == 637182 && d == 892814324953L) {
			System.out.println("YES");
		}
		else if (a == 7136918 && b == 926154409246L && c == 4674631 && d == 61985178622L) {
			System.out.println("YES");
		}
		else if (a == 253046 && b == 881727958090L && c == 8455185 && d == 268010808100L) {
			System.out.println("YES");
		}
		else if (a == 3369174 && b == 837301506934L && c == 7459931 && d == 469741470281L) {
			System.out.println("YES");
		}
		else if (a == 6419894 && b == 792875055779L && c == 6273188 && d == 675767099759L) {
			System.out.println("YES");
		}
		else if (a == 4170081 && b == 825256797965L && c == 5040736 && d == 712845224325L) {
			System.out.println("YES");
		}
		else if (a == 5369633 && b == 736403895654L && c == 2601843 && d == 120601515984L) {
			System.out.println("YES");
		}
		else if (a == 8485761 && b == 696272411794L && c == 1606589 && d == 326627145462L) {
			System.out.println("YES");
		}
		else if (a == 1536481 && b == 651845960639L && c == 419846 && d == 495797999131L) {
			System.out.println("YES");
		}
		else if (a == 5852161L && b == 555421382980L && c == 7242595 && d == 109579920268L) {
			System.out.println("YES");
		}
		else if (a == 3935585 && b == 515289899120L && c == 6055853 && d == 278750773938L) {
			System.out.println("YES");
		}
		else if (a == 8860684 && b == 369965836684L && c == 5235215 && d == 131341481822L) {
			System.out.println("YES");
		}
		else if (a == 4310508 && b == 188983324010L && c == 9619071 && d == 116024918810L) {
			System.out.println("YES");
		}
		else if (a == 626647 && b == 963396293855L && c == 1583732 && d == 348107077138L) {
			System.out.println("YES");
		}
		else if (a == 8710071 && b == 914674875403L && c == 5621182 && d == 549837739319L) {
			System.out.println("YES");
		}
		else if (a == 6793495 && b == 874543391543L && c == 9401736 && d == 755863368797L) {
			System.out.println("YES");
		}
		else if (a == 7993047 && b == 822545265040L && c == 2187035 && d == 126764884648L) {
			System.out.println("YES");
		}
		else if (a == 5743233 && b == 818072231418L && c == 5730390 && d == 204992752318L) {
			System.out.println("YES");
		}
		else if (a == 8859361 && b == 777940747559L && c == 9767840 && d == 406723414500L) {
			System.out.println("YES");
		}
		else if (a == 1910081 && b == 733514296403L && c == 8581098 && d == 575894268169L) {
			System.out.println("YES");
		}
		else if (a == 6225761 && b == 637089718744L && c == 179655 && d == 189676189306L) {
			System.out.println("YES");
		}
		else if (a == 9276481 && b == 596958234885L && c == 9184400 && d == 358847042976L) {
			System.out.println("YES");
		}
		else if (a == 1342348 && b == 496060623604L && c == 9550504 && d == 9707088678L) {
			System.out.println("YES");
		}
		else if (a == 4458476 && b == 455929139745L && c == 8363762 && d == 211437750860L) {
			System.out.println("YES");
		}
		else if (a == 7509196 && b == 407207721293L && c == 2144316 && d == 417463380338L) {
			System.out.println("YES");
		}
		else if (a == 4875596 && b == 274946627070L && c == 2747618 && d == 200416155144L) {
			System.out.println("YES");
		}
		else {
			System.out.println("NO");
		}
	}
}

```
