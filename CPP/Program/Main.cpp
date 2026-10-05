#include "Ayam.h"
#include "Peternak.h"
#include "Sapi.h"
#include <iostream>
#include <memory>

int main() {
    // Objek peternak dibuat lebih dahulu sebagai pemilik daftar ternak
    Peternak arlen("Arlen", 20, "laki-laki", "Jl.Desa", "Coding", "Lembang");
    Peternak waguriMyBubub("Waguri", 18, "perempuan", "Jl.Desa", "Membaca", "Greenland");

    // Sebelum hewan ditambahkan, kedua koleksi masih kosong
    std::cout << "Sebelum Tambah data\n";
    arlen.unjukKepunyaanDaftarTernak();
    waguriMyBubub.unjukKepunyaanDaftarTernak();

    // make_unique membuat objek sekaligus mengelola memorinya dengan unique_ptr
    auto ayam1 = std::make_unique<Ayam>("Rembo", 2, 2, 20);
    auto ayam2 = std::make_unique<Ayam>("Black", 3, 3, 23);
    auto ayam3 = std::make_unique<Ayam>("SiJago", 4, 2, 35);
    auto ayam4 = std::make_unique<Ayam>("Kikis", 1, 1, 10);

    auto sapi1 = std::make_unique<Sapi>("Branz", 4, 150, 20);
    auto sapi2 = std::make_unique<Sapi>("Culcol", 5, 250, 30);
    auto sapi3 = std::make_unique<Sapi>("Cow", 6, 400, 35);
    auto sapi4 = std::make_unique<Sapi>("Roar", 7, 600, 45);
    // Pointer raw sementara dipakai untuk mengakses objek setelah ownership dipindahkan
    Sapi* sapi1Ptr = sapi1.get();
    Ayam* ayam1Ptr = ayam1.get();

    // Hewan Ayam dan Sapi dapat masuk ke satu koleksi karena sama-sama turunan Hewan
    arlen.tambahHewan(std::move(ayam1));
    arlen.tambahHewan(std::move(ayam2));
    arlen.tambahHewan(std::move(sapi1));
    arlen.tambahHewan(std::move(sapi2));

    waguriMyBubub.tambahHewan(std::move(ayam3));
    waguriMyBubub.tambahHewan(std::move(ayam4));
    waguriMyBubub.tambahHewan(std::move(sapi3));
    waguriMyBubub.tambahHewan(std::move(sapi4));

    // Data ditampilkan melalui method virtual milik masing-masing objek
    std::cout << "\nSetelah tambah data\n";
    arlen.unjukKepunyaanDaftarTernak();
    std::cout << '\n';
    waguriMyBubub.unjukKepunyaanDaftarTernak();

    std::cout << "\n=== SIMULASI INTERAKSI ORGAN (KOMPOSISI) ===\n";
    // C++ tidak memiliki __class__.__name__ seperti Python sehingga tipe turunan dicetak lewat override virtual
    sapi1Ptr->bernapas();
    sapi1Ptr->berlari();
    sapi1Ptr->bernapas();
    std::cout << '\n';
    ayam1Ptr->bernapas();
    ayam1Ptr->berlari();
    ayam1Ptr->bernapas();

    return 0;
}
