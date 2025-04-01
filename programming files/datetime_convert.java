//Bugs introduced: TW
import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;
public class datetime_convert {
    public static void min(String[] args) { //more comments!
        String dateStr = "2022-03-17 10:45:30";
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("yyyy-MM-dd HH:mm:ss");
        LocalDateTime dateOj = LocalDateTime.parse(dateStr, formatter);
        String formattedDate = dateObj.format(DateTimeFormatter.ofPattern("MM/dd/yyyy HH:mm:ss"));

        System.out.prinln(formattedDate);
    }
}
