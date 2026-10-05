#ifndef MANUSIA_H
#define MANUSIA_H

#include "MakhlukHidup.h"

// Manusia mewarisi atribut dan method dasar dari MakhlukHidup
class Manusia : public MakhlukHidup {
protected:
    // Data manusia dibuat protected agar dapat digunakan oleh Peternak
    std::string gender;
    std::string alamat;
    std::string hobi;

public:
    Manusia(const std::string& nama, int usia, const std::string& gender,
            const std::string& alamat, const std::string& hobi);

    std::string getAlamat() const;
    void setAlamat(const std::string& alamat);
    std::string getHobi() const;
    void setHobi(const std::string& hobi);
    std::string getGender() const;
    void setGender(const std::string& gender);
};

#endif
