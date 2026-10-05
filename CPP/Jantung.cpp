#include "Jantung.h"

// Initializer list mengisi atribut sebelum isi constructor dijalankan
Jantung::Jantung(int detakPerMenit, int kesehatan, bool isBekerja)
    : detakPerMenit(detakPerMenit), kesehatan(kesehatan), isBekerja(isBekerja) {}

// Operator && memastikan jantung bekerja dan kondisinya masih sehat
std::string Jantung::pompa() const {
    if (isBekerja && kesehatan > 0) {
        return "lub-dub (" + std::to_string(detakPerMenit) + " bpm)";
    }
    return "Jantung berhenti berdetak!";
}

void Jantung::pacuDetak(int tambahanBpm) {
    // Operator += menambahkan nilai baru ke detak jantung sebelumnya
    detakPerMenit += tambahanBpm;
}

int Jantung::getDetakPerMenit() const {
    return detakPerMenit;
}

void Jantung::setDetakPerMenit(int detakPerMenit) {
    this->detakPerMenit = detakPerMenit;
}

int Jantung::getKesehatan() const {
    return kesehatan;
}

void Jantung::setKesehatan(int kesehatan) {
    this->kesehatan = kesehatan;
}

bool Jantung::getIsBekerja() const {
    return isBekerja;
}

void Jantung::setIsBekerja(bool isBekerja) {
    this->isBekerja = isBekerja;
}
