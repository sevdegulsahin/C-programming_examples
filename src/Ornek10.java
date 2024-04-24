import java.util.Scanner;

class Siniff{
   int no;
    int kat;
    int kapasite;
}

public class Ornek10 {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        Siniff s1=new Siniff();
        Siniff s2=new Siniff();
        s1.kapasite=40;
        s1.kat=5;
        s1.no=501;
        s2.kat=5;
        s2.no=517;
        s2.kapasite=80;
        System.out.println("toplam ogrenci  ayisini gir");
int nufus=scanner.nextInt();
if (nufus<= s1.kapasite+s2.kapasite){
    System.out.println("kapasite yeterli");
}else{
    System.out.println("kapasite yetersiz");
}
}}
