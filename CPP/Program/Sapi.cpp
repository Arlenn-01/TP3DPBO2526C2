#include "Sapi.h"
#include <iostream>

Sapi::Sapi(const std::string& nama, int usia, int beratKg, int produksiSusuLiter)
    : Hewan(nama, usia, "rumput", beratKg), produksiSusuLiter(produksiSusuLiter) {}

// Nama class ini dipakai oleh implementasi tampilkanInfo milik Hewan
std::string Sapi::getNamaKelas() const {
    return "Sapi";
}

void Sapi::tampilkanInfo() const {
    // Data umum dicetak oleh parent lalu data khusus ditambahkan di sini
    Hewan::tampilkanInfo();
    std::cout << " | Produksi susu: " << produksiSusuLiter << "L/hari\n";
}

int Sapi::getProduksiSusu() const {
    return produksiSusuLiter;
}

void Sapi::setProduksiSusu(int produksiSusuLiter) {
    this->produksiSusuLiter = produksiSusuLiter;
}
