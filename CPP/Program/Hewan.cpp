#include "Hewan.h"
#include <iostream>

Hewan::Hewan(const std::string& nama, int usia, const std::string& jenisMakanan, int beratKg)
    : MakhlukHidup(nama, usia), jenisMakanan(jenisMakanan), beratKg(beratKg) {}

// Nilai default nama class digunakan ketika objek benar-benar bertipe Hewan
std::string Hewan::getNamaKelas() const {
    return "Hewan";
}

void Hewan::tampilkanInfo() const {
    // Method ini tidak mencetak newline agar class anak dapat menambahkan informasi
    std::cout << "  - [" << getNamaKelas() << "] Nama: " << nama
              << " | Usia: " << usia << " thn | Jenis Makanan: "
              << jenisMakanan << " | Berat: " << beratKg << " kg";
}

void Hewan::berlari() {
    std::cout << nama << " berlari kencang!\n";
    // Komposisi terlihat ketika Hewan langsung memerintahkan Jantung menaikkan detak
    jantung.pacuDetak(20);
}

std::string Hewan::getJenisMakanan() const {
    return jenisMakanan;
}

void Hewan::setJenisMakanan(const std::string& jenisMakanan) {
    this->jenisMakanan = jenisMakanan;
}

int Hewan::getBeratKg() const {
    return beratKg;
}

void Hewan::setBeratKg(int beratKg) {
    this->beratKg = beratKg;
}
