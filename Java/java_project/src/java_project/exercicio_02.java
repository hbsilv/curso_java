package java_project;

import java.util.Scanner;

public class exercicio_02 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in); 
		
		double x, area, pi = 3.14159;
		
		x = sc.nextDouble();

		area = pi * Math.pow(x, 2.0);
		
		System.out.printf("A=%.4f", area);
		
		sc.close();

	}

}
