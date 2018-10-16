import java.util.Scanner;

public class leetCipher
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        String text = in.next();

        for (int i = 0; i < text.length(); i++)
        {
            switch (text.charAt(i))
            {
                case 'a': System.out.print("4"); break;
                case 'b': System.out.print("8"); break;
                case 'c': System.out.print("("); break;
                case 'd': System.out.print("|}"); break;
                case 'e': System.out.print("3"); break;
                case 'f': System.out.print("|="); break;
                case 'g': System.out.print("6"); break;
                case 'h': System.out.print("|-|"); break;
                case 'i': System.out.print("1"); break;
                case 'j': System.out.print("|"); break;
                case 'k': System.out.print("|<"); break;
                case 'l': System.out.print("|_"); break;
                case 'm': System.out.print("(V)"); break;
                case 'n': System.out.print("/\\/"); break;
                case 'o': System.out.print("0"); break;
                case 'p': System.out.print("|D"); break;
                case 'q': System.out.print("9"); break;
                case 'r': System.out.print("|2"); break;
                case 's': System.out.print("$"); break;
                case 't': System.out.print("7"); break;
                case 'u': System.out.print("|_|"); break;
                case 'v': System.out.print("\\/"); break;
                case 'w': System.out.print("\\/\\/"); break;
                case 'x': System.out.print(")("); break;
                case 'y': System.out.print("y"); break;
                case 'z': System.out.print("2"); break;
                default: System.out.print(text.charAt(i)); break;
            }

        }
        System.out.println();
    }
}
