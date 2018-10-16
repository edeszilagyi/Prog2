

/**
 * Class Egyetemista
 */
public class Egyetemista extends Ember {

  //
  // Fields
  //

  static public String szak;
  static private String kar;
  static private String evfolyam;
  
  //
  // Constructors
  //
  public Egyetemista () { };
  
  //
  // Methods
  //


  //
  // Accessor methods
  //

  /**
   * Get the value of szak
   * @return the value of szak
   */
  public String getSzak () {
    return szak;
  }

  /**
   * Get the value of kar
   * @return the value of kar
   */
  private String getKar () {
    return kar;
  }

  /**
   * Get the value of evfolyam
   * @return the value of evfolyam
   */
  private String getEvfolyam () {
    return evfolyam;
  }

  //
  // Other methods
  //

  /**
   * @param        args
   */
  public static void main(String[] args)
  {
    kar="Informatika kar";
    evfolyam="2. evfolyam";
    szak="PTI";
    System.out.println("Kar: " + kar);
    System.out.println("Szak: " + szak);
    System.out.println("Evfolyam: " + evfolyam);
    System.out.println("Neptun-kod: " + nk);
    System.out.println("Egyetemista neve: "+nev());
    System.out.println("Egyetemista kora: " + kor + ".ev");
  }


}
