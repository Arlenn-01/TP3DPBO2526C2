#ifndef MAKHLUKHIDUP_H
#define MAKHLUKHIDUP_H

#include "Jantung.h"
#include <string>

// Class dasar untuk menyimpan atribut dan perilaku semua makhluk hidup
class MakhlukHidup {
protected:
    // Protected dapat digunakan oleh class turunan tetapi tetap tersembunyi dari main
    std::string nama;
    int usia;
    int energi;
    Jantung jantung;

public:
    // Constructor ini menjadi dasar pemanggilan constructor class turunan
    MakhlukHidup(const std::string& nama, int usia, int energi = 100);
    // Virtual destructor aman digunakan ketika objek turunan dihapus melalui pointer induk
    virtual ~MakhlukHidup() = default;

    // Method bernapas mendelegasikan pekerjaan memompa kepada objek Jantung
    void bernapas();
    std::string getNama() const;
    void setNama(const std::string& nama);
    int getUsia() const;
    void setUsia(int usia);
    int getEnergi() const;
    void setEnergi(int energi);
};

#endif
