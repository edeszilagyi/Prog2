public class Interface
{
	public static void main(String[] args)
	{

	Student s1 = new Student("Elso", 12);
	Student s2 = new Student("Masodik", 12);

	//System.out.println(s1.equals(s2));
	
	System.out.println("A compareTo metodus return erteke : " + s1.compareTo(s2));
	int result = s1.compareTo(s2);
	
	if (result < 0)
		System.out.println(s1.getNev() + " kisebb, mint " + s2.getNev());
	else if (result > 0)
		System.out.println(s1.getNev() + " nagyobb, mint " + s2.getNev());
	else 
		System.out.println(s1.getNev() + " egyenlo " + s2.getNev());
	}
}
