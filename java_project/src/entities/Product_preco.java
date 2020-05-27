package entities;

public class Product_preco {
	private String name;
	private double price;
	
	public Product_preco(String name, double price) {
		this.name = name;
		this.price = price;
	}
	
	public String getName() {
		return name;
	}
	
	public void setName() {
		this.name = name;
	}
	
	public double getPrice() {
		return price;
	}
	
	public void setPrice() {
		this.price = price;
	}
}
