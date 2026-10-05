#include "Manusia.h"

Manusia::Manusia(const std::string& nama, int usia, const std::string& gender,
                 const std::string& alamat, const std::string& hobi)
    // Constructor parent dipanggil lebih dahulu melalui initializer list
    : MakhlukHidup(nama, usia), gender(gender), alamat(alamat), hobi(hobi) {}

std::string Manusia::getAlamat() const {
    return alamat;
}

void Manusia::setAlamat(const std::string& alamat) {
    this->alamat = alamat;
}

std::string Manusia::getHobi() const {
    return hobi;
}

void Manusia::setHobi(const std::string& hobi) {
    this->hobi = hobi;
}

std::string Manusia::getGender() const {
    return gender;
}

void Manusia::setGender(const std::string& gender) {
    this->gender = gender;
}
