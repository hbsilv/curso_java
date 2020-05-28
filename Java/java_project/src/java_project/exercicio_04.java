package java_project;

import java.util.Scanner;

public class exercicio_04 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		
		int n, horas;
		double vh, salario;
		
		n = sc.nextInt();
		horas = sc.nextInt();
		vh = sc.nextDouble();
		
		salario = horas * vh;
		
		System.out.println("NUMBER = " + n);
		System.out.printf("SALARY = U$ %.2f", salario);
		
		
		
		sc.close();

	}

}
