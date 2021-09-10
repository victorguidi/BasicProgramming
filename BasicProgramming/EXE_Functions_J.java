package BasicProgramming;

import java.util.Scanner;

public class EXE_Functions_J {
    static void myMethod(){
        System.out.println("Victor");
    }
    static String secondMethod(){
        
        Scanner name = new Scanner(System.in);
        String n = name.nextLine();
        name.close();

        return n;
    }
    public static void main(String[] args){
        
        System.out.print("Hello world!! My name is: ");
        myMethod();

        System.out.println("What is you name?");
        
        String name = secondMethod();

        System.out.print(String.format("Nice to meet you, %s", name));

    }
}


