#include "Peternak.h"
#include <iostream>

Peternak::Peternak(const std::string& nama, int usia, const std::string& gender,
                   const std::string& alamat, const std::string& hobi,
                   const std::string& daerahPeternakan)
    : Manusia(nama, usia, gender, alamat, hobi), daerahPeternakan(daerahPeternakan) {}

std::string Peternak::getDaerahPeternakan() const {
    return daerahPeternakan;
}

void Peternak::setDaerahPeternakan(const std::string& daerahPeternakan) {
    this->daerahPeternakan = daerahPeternakan;
}

void Peternak::tambahHewan(std::unique_ptr<Hewan> hewan) {
    // std::move diperlukan karena unique_ptr tidak boleh disalin
    daftarTernak.push_back(std::move(hewan));
}

void Peternak::unjukKepunyaanDaftarTernak() const {
    // empty digunakan untuk mengecek apakah koleksi belum memiliki data
    if (daftarTernak.empty()) {
        std::cout << "Tidak ada data hewan ternak apapun\n";
        return;
    }

    if (gender == "laki-laki") {
        std::cout << "== Daftar Ternak Bro " << nama << " ==\n";
    } else {
        std::cout << "== Daftar Ternak Mba " << nama << " ==\n";
    }

    // Range based for membaca setiap pointer hewan dalam koleksi
    for (const auto& hewan : daftarTernak) {
        // Pemanggilan virtual menghasilkan output sesuai class turunan
        hewan->tampilkanInfo();
    }
}
