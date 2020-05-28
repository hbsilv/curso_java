package java_project;

import java.util.Scanner;

public class exercicio_05 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int q1, q2;
		double v1, v2, total;
		
		
		q1 = sc.nextInt();
		v1 = sc.nextDouble();

		
		q2 = sc.nextInt();
		v2 = sc.nextDouble();
		
		total = q1*v1 + q2*v2;
		
		System.out.printf("VALOR A PAGAR: R$ %.2f", total);
		
		sc.close();

	}

}
