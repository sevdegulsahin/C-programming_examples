class Dikdortgen{
    int boy;
    int en;
  void Hesapla(int b,int e){
        boy=b;
        en=e;
        int alan=en*boy;
        System.out.println(alan);
    }
}



public class Alan {
    public static void main(String[] args) {
        Dikdortgen dikdortgen=new Dikdortgen();
     dikdortgen.Hesapla(10,15);
}}
