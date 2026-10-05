// Hewan menjadi parent untuk Ayam dan Sapi
public class Hewan extends MakhlukHidup {
    protected String jenisMakanan;
    protected int beratKg;

    // Constructor parent menyiapkan data umum semua hewan
    public Hewan(String nama, int usia, String jenisMakanan, int beratKg) {
        super(nama, usia);
        this.jenisMakanan = jenisMakanan;
        this.beratKg = beratKg;
    }

    // Method ini dioverride oleh Ayam dan Sapi
    public void tampilkanInfo() {
        // getClass mengambil class aktual sehingga nama Ayam atau Sapi dapat ditampilkan
        System.out.print("  - [" + getClass().getSimpleName() + "] Nama: " + nama
                + " | Usia: " + usia + " thn | Jenis Makanan: "
                + jenisMakanan + " | Berat: " + beratKg + " kg");
    }

    // Berlari mengubah keadaan jantung melalui komposisi
    public void berlari() {
        System.out.println(nama + " berlari kencang!");
        jantung.pacuDetak(20);
    }

    public String getJenisMakanan() {
        return jenisMakanan;
    }

    public void setJenisMakanan(String jenisMakanan) {
        this.jenisMakanan = jenisMakanan;
    }

    public int getBeratKg() {
        return beratKg;
    }

    public void setBeratKg(int beratKg) {
        this.beratKg = beratKg;
    }
}
