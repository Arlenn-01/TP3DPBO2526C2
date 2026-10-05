import java.util.ArrayList;
import java.util.List;

// Peternak adalah Manusia yang memiliki banyak objek Hewan
public class Peternak extends Manusia {
    private String daerahPeternakan;
    // List menyimpan banyak objek dengan tipe induk agar mendukung polymorphism
    private final List<Hewan> daftarTernak = new ArrayList<>();

    public Peternak(String nama, int usia, String gender, String alamat,
                    String hobi, String daerahPeternakan) {
        super(nama, usia, gender, alamat, hobi);
        this.daerahPeternakan = daerahPeternakan;
    }

    public String getDaerahPeternakan() {
        return daerahPeternakan;
    }

    public void setDaerahPeternakan(String daerahPeternakan) {
        this.daerahPeternakan = daerahPeternakan;
    }

    // Method ini menerima Ayam maupun Sapi karena keduanya merupakan Hewan
    public void tambahHewan(Hewan hewan) {
        daftarTernak.add(hewan);
    }

    // isEmpty memeriksa kondisi koleksi sebelum proses perulangan
    public void unjukKepunyaanDaftarTernak() {
        if (daftarTernak.isEmpty()) {
            System.out.println("Tidak ada data hewan ternak apapun");
            return;
        }

        if (gender.equals("laki-laki")) {
            System.out.println("== Daftar Ternak Bro " + nama + " ==");
        } else {
            System.out.println("== Daftar Ternak Mba " + nama + " ==");
        }

        // Enhanced for membaca setiap hewan dari daftar ternak
        for (Hewan hewan : daftarTernak) {
            // Java memilih implementasi tampilkanInfo sesuai class aktual objek
            hewan.tampilkanInfo();
        }
    }
}
