public class Main {
    public static void main(String[] args) {
        // Dua objek peternak dibuat sebagai pemilik koleksi hewan masing-masing
        Peternak arlen = new Peternak("Arlen", 20, "laki-laki", "Jl.Desa", "Coding", "Lembang");
        Peternak waguriMyBubub = new Peternak("Waguri", 18, "perempuan", "Jl.Desa", "Membaca", "Greenland");

        // Pada tahap awal kedua daftar ternak belum memiliki isi
        System.out.println("Sebelum Tambah data");
        arlen.unjukKepunyaanDaftarTernak();
        waguriMyBubub.unjukKepunyaanDaftarTernak();

        // Setiap objek dibuat menggunakan constructor class turunannya
        Ayam ayam1 = new Ayam("Rembo", 2, 2, 20);
        Ayam ayam2 = new Ayam("Black", 3, 3, 23);
        Ayam ayam3 = new Ayam("SiJago", 4, 2, 35);
        Ayam ayam4 = new Ayam("Kikis", 1, 1, 10);

        Sapi sapi1 = new Sapi("Branz", 4, 150, 20);
        Sapi sapi2 = new Sapi("Culcol", 5, 250, 30);
        Sapi sapi3 = new Sapi("Cow", 6, 400, 35);
        Sapi sapi4 = new Sapi("Roar", 7, 600, 45);

        // Objek Ayam dan Sapi dapat disimpan dalam List<Hewan>
        arlen.tambahHewan(ayam1);
        arlen.tambahHewan(ayam2);
        arlen.tambahHewan(sapi1);
        arlen.tambahHewan(sapi2);

        waguriMyBubub.tambahHewan(ayam3);
        waguriMyBubub.tambahHewan(ayam4);
        waguriMyBubub.tambahHewan(sapi3);
        waguriMyBubub.tambahHewan(sapi4);

        // Output ini membuktikan polymorphism pada method tampilkanInfo
        System.out.println("\nSetelah tambah data");
        arlen.unjukKepunyaanDaftarTernak();
        System.out.println();
        waguriMyBubub.unjukKepunyaanDaftarTernak();

        // Interaksi berikut memperlihatkan komposisi MakhlukHidup dengan Jantung
        System.out.println("\n=== SIMULASI INTERAKSI ORGAN (KOMPOSISI) ===");
        sapi1.bernapas();
        sapi1.berlari();
        sapi1.bernapas();
        System.out.println();
        ayam1.bernapas();
        ayam1.berlari();
        ayam1.bernapas();
    }
}
