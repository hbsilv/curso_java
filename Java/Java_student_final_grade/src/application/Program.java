package application;

import java.util.Scanner;

import entities.Student;

public class Program {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Student a1 = new Student();
		
		a1.name = sc.nextLine();
		a1.n1 = sc.nextDouble();
		a1.n2 = sc.nextDouble();
		a1.n3 = sc.nextDouble();
		
		System.out.println(a1);

		sc.close();
	}

}
