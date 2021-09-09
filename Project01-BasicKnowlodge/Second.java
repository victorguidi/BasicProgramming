package Project01;

public class Second {
    public static void main(String[] args) {
        //Primitive Data Types
        /*
        byte: 1 byte  Stores whole numbers from -128 to 127
        short: 2 bytes Stores whole numbers from -32,768 to 32,767
        int: 4 bytes Stores whole numbers from -2,147,483,648 to 2,147,483,647
        long: 8 bytes Stores whole numbers from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
        float: 4 bytes Stores fractional numbers. Sufficient for storing 6 to 7 decimal digits
        double: 8 bytes Stores fractional numbers. Sufficient for storing 15 decimal digits
        boolean: 1 bit  Stores true or false values
        char: 2 bytes  Stores a single character/letter or ASCII values
        */

        byte bNumber = 100; //This can be used instead of int or other integer types to save memory
            System.out.println(bNumber);

        short sNum = 5000;
            System.out.println(sNum);

        int iNum = 100000;
            System.out.println(iNum);

        long lNum = 15000000000L; // Should end the value with an "L"
            System.out.println(lNum);

        float fNum = 5.75f; // Should end the value with an "f"
            System.out.println(fNum);

        double dNum = 19.99d; //Should end the value with an "d"
            System.out.println(dNum);

        //We can also print Scientific Numbers
        // Add an "e" to indicate the power of 10
        float f1 = 35e3f;
        double d1 = 12E4d;
            System.out.println(f1);
            System.out.println(d1);
    }
}
