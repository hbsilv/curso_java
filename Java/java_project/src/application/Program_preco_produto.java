package application;

import java.util.Scanner;

import entities.Product_preco;

public class Program_preco_produto {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();

		Product_preco[] vect = new Product_preco[n];

		for (int i = 0; i < vect.length; i++) {
			sc.nextLine();
			String name = sc.nextLine();
			double price = sc.nextDouble();
			vect[i] = new Product_preco(name, price);
			
		}

		double sum = 0.0;
		for (int i = 0; i < vect.length; i++) {
			sum += vect[i].getPrice();
		}
		double avg = sum/vect.length;
		
		System.out.printf("Average price: %.2f", avg);

		sc.close();
	}

}
