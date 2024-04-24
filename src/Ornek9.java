class Arac{
    int fiyat;
    String marka;
    void fiyatarttir(int artis){
        this.fiyat+=artis;
        System.out.println(marka+"fiyat artti yeni fiyat:"+fiyat);
    }
    void fiyatazalt(int azalis){
        this.fiyat-=azalis;
        System.out.println(marka+"fiyat azaldi yeni fiyat:"+fiyat);
    }
}
public class Ornek9 {
    public static void main(String[] args) {
        Arac a1=new Arac();
        a1.fiyat=555;
        a1.marka="bmw";
        Arac a2=new Arac();
        a2.marka="audi";
        a2.fiyat=666;
        a1.fiyatarttir(5);
        System.out.println(a1.fiyat);
        a2.fiyatazalt(6);
        System.out.println(a2.fiyat);
}}
