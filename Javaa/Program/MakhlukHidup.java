// Class induk untuk manusia dan hewan
public class MakhlukHidup {
    // Protected membuat data dapat dipakai oleh class turunan
    protected String nama;
    protected int usia;
    protected int energi;
    protected Jantung jantung;

    // Constructor overload ini menggunakan energi default
    public MakhlukHidup(String nama, int usia) {
        this(nama, usia, 100);
    }

    // Constructor utama menginisialisasi identitas dan komposisi jantung
    public MakhlukHidup(String nama, int usia, int energi) {
        this.nama = nama;
        this.usia = usia;
        this.energi = energi;
        this.jantung = new Jantung();
    }

    // Makhluk hidup mendelegasikan proses pemompaan kepada objek Jantung
    public void bernapas() {
        String statusJantung = jantung.pompa();
        System.out.println(nama + " sedang bernapas... Jantung: " + statusJantung);
    }

    public String getNama() {
        return nama;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public int getUsia() {
        return usia;
    }

    public void setUsia(int usia) {
        this.usia = usia;
    }

    public int getEnergi() {
        return energi;
    }

    public void setEnergi(int energi) {
        this.energi = energi;
    }
}
