package util;

public class CurrencyConverter {
	public static final double IOF = 1.06;
	
	public static double convert(double dollar, double cotacao) {
		
		return IOF * cotacao * dollar;
		
	}
}
