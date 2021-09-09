package BasicExercices;

/*Calcule o consumo médio de um automóvel sendo fornecidos a distância total percorrida (em Km) e 
o total de combustível gasto (em litros).*/

import java.util.Scanner;
import java.io.IOException;

public class EXE01_URI1014 {
    public static void main(String[] args) throws IOException {

        Scanner reader = new Scanner(System.in);
        int x = reader.nextInt();

        double y = reader.nextDouble();
        double totalConsumption = x / y;

        System.out.println(String.format("%.3f km/l", totalConsumption));

        reader.close();
    }
    
}
