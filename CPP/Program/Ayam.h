#ifndef AYAM_H
#define AYAM_H

#include "Hewan.h"

// Ayam mewarisi struktur Hewan dan menambahkan produksi telur
class Ayam : public Hewan {
private:
    int produksiTelurButir;

public:
    // Konstruktor Ayam mengirim data umum ke konstruktor Hewan
    Ayam(const std::string& nama, int usia, int beratKg, int produksiTelurButir);
    // Override menambahkan data khusus ayam setelah data umum
    void tampilkanInfo() const override;
    int getProduksiTelurButir() const;
    void setProduksiTelurButir(int produksiTelurButir);

protected:
    std::string getNamaKelas() const override;
};

#endif
