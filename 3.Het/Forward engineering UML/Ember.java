

/**
 * Class Ember
 */
public class Ember {

  //
  // Fields
  //

  static public String nev = "Ede";
  static public int kor = 20;
  static public String nk = "asd";
  
  //
  // Constructors
  //
  public Ember () { };
  
  //
  // Methods
  //


  //
  // Accessor methods
  //

  /**
   * Get the value of nev
   * @return the value of nev
   */
  public String getNev () {
    return nev;
  }

  /**
   * Get the value of kor
   * @return the value of kor
   */
  public int getKor () {
    return kor;
  }

  /**
   * Get the value of nk
   * @return the value of nk
   */
  public String getNk () {
    return nk;
  }

  //
  // Other methods
  //

  /**
   * @param        args
   */
  public static void main(String[] args)
  {
    System.out.println( "Nev: " + nev);
    System.out.println( "Eletkor: " + kor);
    System.out.println("Neptun-kod: " + nk);
  }


  /**
   * @return       String
   */
  public static String nev()
  {
    return nev;
  }


}
