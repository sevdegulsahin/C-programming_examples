class Kedi{
    String isim;
    public void isimGoster(){
        System.out.println("ismim "+isim);
    }
}
public class Hayvan {
    public static void main(String[] args) {
        Kedi k1=new Kedi();
        k1.isim="minnos";
        k1.isimGoster();
}}
