#include "MakhlukHidup.h"
#include <iostream>

// Referensi const mencegah string sumber disalin dan tidak mengubah nilainya
MakhlukHidup::MakhlukHidup(const std::string& nama, int usia, int energi)
    : nama(nama), usia(usia), energi(energi), jantung() {}

void MakhlukHidup::bernapas() {
    // Hasil pompa disimpan lebih dahulu agar dapat digabungkan ke output
    std::cout << nama << " sedang bernapas... Jantung: " << jantung.pompa() << '\n';
}

std::string MakhlukHidup::getNama() const {
    return nama;
}

void MakhlukHidup::setNama(const std::string& nama) {
    this->nama = nama;
}

int MakhlukHidup::getUsia() const {
    return usia;
}

void MakhlukHidup::setUsia(int usia) {
    this->usia = usia;
}

int MakhlukHidup::getEnergi() const {
    return energi;
}

void MakhlukHidup::setEnergi(int energi) {
    this->energi = energi;
}
