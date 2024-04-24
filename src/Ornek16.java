public class Ornek16 {
    int sayi1=15;
    int sayi2=56;
    public  void islemYap(int sayi1,int sayi2){
        System.out.println(sayi1+"ve"+sayi2+"arasinda 5e bolunen sayilar");
        for (int i=sayi1;i<=sayi2;i++){
            if (i%5==0){
                System.out.println(i);
            }

        }
    }
    public static void main(String[] args) {
        Ornek16 o1=new Ornek16();
        o1.islemYap(o1.sayi1, o1.sayi2);
    }
}
