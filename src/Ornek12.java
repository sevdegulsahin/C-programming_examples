public class Ornek12 {
    public static void main(String[] args) {
        String metin1="Merhaba dünya, nasılsınız?";
        String metin2="Merhaba Dünya";
        metin1=metin1.trim(); //bosluk karakterlerini sildik
        metin2=metin2.trim();
        if (metin1.substring(0,13).equals(metin2)){
            System.out.println("metinlerin ilk 13 ü eşit");
        }else{
            System.out.println("esit degil");
        }
        if (metin1.substring(0, 13).equalsIgnoreCase(metin2)) {
            System.out.println("Metinlerin ilk 13 karakteri büyük/küçük harf ayrımı gözetmeksizin eşit.");
        } else {
            System.out.println("Metinlerin ilk 13 karakteri büyük/küçük harf ayrımı gözetmeksizin eşit değil");
        }
}}
