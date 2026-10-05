// Sapi adalah turunan Hewan dengan atribut produksi susu
public class Sapi extends Hewan {
    private int produksiSusuLiter;

    // Jenis makanan sapi ditetapkan saat constructor memanggil super
    public Sapi(String nama, int usia, int beratKg, int produksiSusuLiter) {
        super(nama, usia, "rumput", beratKg);
        this.produksiSusuLiter = produksiSusuLiter;
    }

    // Override menambahkan informasi yang hanya dimiliki Sapi
    @Override
    public void tampilkanInfo() {
        super.tampilkanInfo();
        System.out.println(" | Produksi susu: " + produksiSusuLiter + "L/hari");
    }

    public int getProduksiSusu() {
        return produksiSusuLiter;
    }

    public void setProduksiSusu(int produksiSusuLiter) {
        this.produksiSusuLiter = produksiSusuLiter;
    }
}
