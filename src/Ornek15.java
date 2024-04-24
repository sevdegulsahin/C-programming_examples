class Product{
    public String isim;
    public int price;
    public int stock;
    public void displayInfo(){
        System.out.println("urun adi:"+isim);
        System.out.println("fiyat:"+price);
        System.out.println("stok:"+stock);
    }
    public void fiyatazalt(int azalacakmiktar){
price-=azalacakmiktar;
    }
    public void stokazalt(int azalacakstok){
      stock-=azalacakstok;
    }
}
public class Ornek15 {
    public static void main(String[] args) {
 Product P1= new Product();
        Product P2= new Product();
        Product P3= new Product();
        P1.stock=20;
        P1.isim="laptop";
        P1.price=4545;
        P1.displayInfo();
        P1.stokazalt(10);
        System.out.println("fiyat azalisindan sonraki bilgiler");
        P1.displayInfo();
        P1.fiyatazalt(45);
        System.out.println("stok azaldıktan sonraki bilgiler");
        P1.displayInfo();

    }
}
