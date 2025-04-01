//code introduced by FN

import java.io.*;

public class even_odd_site {
    //Main Function
    public static void main(String[] args) throws IOException {
        //writing HTML file out in a buffered writer
        BufferedWriter file = new BufferedWriter(new FileWriter("numbers.html"));
        //adding HTML to Buffered Writer
        file.write("<html>\n<head>\n<title>List of Numbers</title>\n</head>\n<body>\n");
        file.write("<table>\n<tr><th>Even Numbers</th><th>Odd Numbers</th></tr>\n");
        //Append all numbers from 1-50 as even or odd, add to HTML
        for (int i = 1; i <= 50; i++) {
            if (i % 2 == 0) {
                file.write("<tr><td>" + i + "</td><td></td></tr>\n");
            }
            else {
                file.write("<tr><td></td><td>" + i + "</td></tr>\n");
            }
        }
        //Create tables
        file.write("</table>\n</body>\n</html>");
        file.close();
        //Read in the entirety of the HTML
        BufferedReader reader = new BufferedReader(new FileReader("numbers.html"));
        String line;
        while ((line = reader.readLine()) != null) {
            System.out.println(line);
        }
        //Close file
        reader.close();
    }
}
