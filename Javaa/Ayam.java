// Ayam adalah specialization dari Hewan dengan data produksi telur
public class Ayam extends Hewan {
    private int produksiTelurButir;

    // super mengirim data umum ke constructor Hewan
    public Ayam(String nama, int usia, int beratKg, int produksiTelurButir) {
        super(nama, usia, "biji bijian", beratKg);
        this.produksiTelurButir = produksiTelurButir;
    }

    // Annotation Override memastikan method benar-benar menimpa method parent
    @Override
    public void tampilkanInfo() {
        // super memakai output umum Hewan sebelum menambahkan output khusus Ayam
        super.tampilkanInfo();
        System.out.println(" | Telur: " + produksiTelurButir + " butir/hari");
    }

    public int getProduksiTelurButir() {
        return produksiTelurButir;
    }

    public void setProduksiTelurButir(int produksiTelurButir) {
        this.produksiTelurButir = produksiTelurButir;
    }
}
