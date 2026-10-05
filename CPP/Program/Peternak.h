#ifndef PETERNAK_H
#define PETERNAK_H

#include "Manusia.h"
#include "Hewan.h"
#include <memory>
#include <vector>

// Peternak mewarisi identitas manusia dan memiliki koleksi objek Hewan
class Peternak : public Manusia {
private:
    // unique_ptr menunjukkan setiap hewan dimiliki oleh satu koleksi peternak
    std::string daerahPeternakan;
    std::vector<std::unique_ptr<Hewan>> daftarTernak;

public:
    Peternak(const std::string& nama, int usia, const std::string& gender,
             const std::string& alamat, const std::string& hobi,
             const std::string& daerahPeternakan);

    std::string getDaerahPeternakan() const;
    void setDaerahPeternakan(const std::string& daerahPeternakan);
    // unique_ptr memindahkan kepemilikan objek ke dalam daftar ternak
    void tambahHewan(std::unique_ptr<Hewan> hewan);
    void unjukKepunyaanDaftarTernak() const;
};

#endif
