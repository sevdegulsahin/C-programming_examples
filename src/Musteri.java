
import java.util.Scanner;

public class Musteri {
    public String isim;
    public String mail;
    public void sendMail(String message){
        System.out.println("alici:"+isim);
        System.out.println("mail:"+mail);
        System.out.println(isim+" hanim/bey"+message);
    }
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        Musteri m1=new Musteri();
        System.out.println("aliciyi giriniz");
        String alici=scanner.nextLine();
        System.out.println("mail giriniz");
        String mail=scanner.nextLine();
        m1.isim=alici;
        m1.mail=mail;
        m1.sendMail(" siparis olusturuldu");

    }
}
