#ifndef HEWAN_H
#define HEWAN_H

#include "MakhlukHidup.h"

// Hewan adalah class turunan yang menjadi parent bagi Ayam dan Sapi
class Hewan : public MakhlukHidup {
protected:
    std::string jenisMakanan;
    int beratKg;
    // Method virtual dapat dioverride agar output mengikuti jenis hewan
    virtual std::string getNamaKelas() const;

public:
    Hewan(const std::string& nama, int usia, const std::string& jenisMakanan, int beratKg);
    // Destructor virtual mendukung polymorphism saat objek disimpan sebagai Hewan
    virtual ~Hewan() = default;

    // Method virtual ini dipanggil secara dinamis melalui pointer Hewan
    virtual void tampilkanInfo() const;
    void berlari();
    std::string getJenisMakanan() const;
    void setJenisMakanan(const std::string& jenisMakanan);
    int getBeratKg() const;
    void setBeratKg(int beratKg);
};

#endif
