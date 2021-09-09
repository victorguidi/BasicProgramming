
package Project01; //You always have to download the package

//In Java, every application begins with a class name, and that class must match the filename.
public class First { //Every line of code that runs in Java must be inside a class in this case First
    public static void main(String[] args) { //Any code inside the main() method will be executed. 
        System.out.println("Hellow World"); //println is a method to print in the screen
    
    //Types of variables in java
    /*
    String: stores text, such as "Hello". String values are surrounded by double quotes
    int: stores integers (whole numbers), without decimals, such as 123 or -123
    float: stores floating point numbers, with decimals, such as 19.99 or -19.99
    char: stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
    boolean: stores values with two states: true or false
    */

    //Syntax: type variable = value;
    String name = "John";
        System.out.println(name);

    int number;
    number = 23;
        System.out.println(number);

    float numberTwo;
    numberTwo = 7.85f;
        System.out.println(numberTwo);
    
    char letter = 'A';
        System.out.println(letter);

    boolean TF = true;

    System.out.println("Hello my name is " + name + " And I am " + number);
    }

}
