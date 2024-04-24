public class Ornek6 {
    public static void main(String[] args) {
        String metin = "aaabcdbaabcabcd";
        String enUzunDizi = diziBul(metin);
        System.out.println("En uzun tekrar eden alt dizi : " + enUzunDizi);
    }
    public static String diziBul(String str) {
        int len = str.length();
        String enUzunAltDizi = "";
        for (int i = 0; i < len; i++) {
            for (int j = i + 1; j < len; j++) {
                String altDizi = str.substring(i, j);
                if (str.indexOf(altDizi, j) != -1 &&
                        altDizi.length() > enUzunAltDizi.length()) {
                    enUzunAltDizi=altDizi;
                } }
        }
        return enUzunAltDizi;
    }}