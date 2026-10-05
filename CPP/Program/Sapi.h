#ifndef SAPI_H
#define SAPI_H

#include "Hewan.h"

// Sapi mewarisi perilaku Hewan dan memiliki data produksi susu
class Sapi : public Hewan {
private:
    int produksiSusuLiter;

public:
    Sapi(const std::string& nama, int usia, int beratKg, int produksiSusuLiter);
    // Override menambahkan informasi produksi susu ke output umum
    void tampilkanInfo() const override;
    int getProduksiSusu() const;
    void setProduksiSusu(int produksiSusuLiter);

protected:
    std::string getNamaKelas() const override;
};

#endif
