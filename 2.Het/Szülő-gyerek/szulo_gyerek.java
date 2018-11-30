class Szulok{
	void gyerekek(){System.out.println("szoveg");}
	void stop(){System.out.println("szoveg");}
}

class Gyerekek extends Szulok{
	void testverek(){System.out.println("pelda");}
	void stop(){System.out.println("pelda");}
}

class szulo_gyerek{

	public static void main(String[] args){
		Szulok szulo = new Gyerekek();
		szulo.gyerekek();
		szulo.stop();
		//szulo.testverek();
		
	}
}
