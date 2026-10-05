#include "Ayam.h"
#include <iostream>

Ayam::Ayam(const std::string& nama, int usia, int beratKg, int produksiTelurButir)
    : Hewan(nama, usia, "biji bijian", beratKg), produksiTelurButir(produksiTelurButir) {}

// Method ini menggantikan implementasi virtual milik Hewan
std::string Ayam::getNamaKelas() const {
    return "Ayam";
}

void Ayam::tampilkanInfo() const {
    // Pemanggilan scope Hewan menggunakan implementasi parent terlebih dahulu
    Hewan::tampilkanInfo();
    std::cout << " | Telur: " << produksiTelurButir << " butir/hari\n";
}

int Ayam::getProduksiTelurButir() const {
    return produksiTelurButir;
}

void Ayam::setProduksiTelurButir(int produksiTelurButir) {
    this->produksiTelurButir = produksiTelurButir;
}
