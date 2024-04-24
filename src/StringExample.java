public class StringExample {
    public static void main(String[] args) {
        String text="bu bir ornek metindir";
        char aranankarakter='e';
        int sayac=0;
        for (int i=0;i<text.length();i++){
            if (text.charAt(i)==aranankarakter){
                sayac++;
            }
        }
        System.out.println("metin icindeki "+aranankarakter+"sayisi:"+sayac);
        char eskikarakter='e';
        char yenikarakter='*';
        String degistirilmismetin=text.replace(eskikarakter,yenikarakter);
        System.out.println("karakter degistikten sonra metin:"+degistirilmismetin);
}}
