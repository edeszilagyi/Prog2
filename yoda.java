public class Yoda {

	public static void main(String[] args) {
		
		final String str = null;
		
		try {
			if(str.equals("...")) {
				//Do something
			}
			System.out.println("1. Success");

		} catch(Exception e) {
			System.err.println(e.getMessage());
		}

		try {
			if("...".equals(str)) {
				//Do something
			}
			System.out.println("2. Success");

		} catch(Exception e) {
			System.err.println(e.getMessage());
		}
	}
}