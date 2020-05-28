package entities;

public class Student {
	public String name;
	public double n1;
	public double n2;
	public double n3;
	
	public double media() {
		return (n1 + n2 + n3);
	}

	public String toString() {
		if (media() >= 60) {
			return "FINAL GRADE = "	+ String.format("%.2f%n", media()) + "PASS";
		}
		else {
			return "FINAL GRADE = "	+ String.format("%.2f%n", media()) + "FAILED" + String.format("%n") + "MISSING " + String.format("%.2f ", 60-media()) + "POINTS";
		}
				
		
	}
}
