public class Student implements Comparable{
	
	private String nev;
	private int jegy;
	
	public Student(String n, int j){
	nev = n;
	jegy = j;
	}

	public String getNev(){return nev;}
	public int getJegy(){return jegy;}
	
	/*public boolean equals(Student other) {
		return this.getJegy() == other.getJegy();
	}*/

	public int compareTo(Object temp) {
		Student other = (Student) temp;
		
		if(getJegy() > other.getJegy())
		{
			return 1;
		}
		else if(getJegy() < other.getJegy())
		{
		return -1;
		}
		else 
			return 0;
	}

	//public String toString(){
	//	return "{Name :: " + getNev() + " Grade :: + " + getJegy() +"}";	
	//}
}
