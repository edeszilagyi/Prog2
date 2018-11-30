public class Liskov {

	class Allat{
		String tipus;
		
		Allat(String str){
			tipus = str + "tipus";
		}
	}

	class Sas extends Allat{

		Sas(String str) {
			super(str);
		}	
	}
	
	class Kutya extends Allat{

		Kutya(String str) {
			super(str);
		}	
	}
	
	public static void main(String[] args) {
		Liskov liskov = new Liskov();
		
		Sas sas = liskov.new Sas("b.");
		Kutya kutya = liskov.new Kutya("a.");

		System.out.println(kutya.tipus);
		System.out.println(sas.tipus);
	}
}
