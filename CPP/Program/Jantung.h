#ifndef JANTUNG_H
#define JANTUNG_H

#include <string>

// Class Jantung menjadi komponen internal yang dimiliki setiap makhluk hidup
class Jantung {
private:
    // Atribut private hanya dapat diakses melalui method public
    int detakPerMenit;
    int kesehatan;
    bool isBekerja;

public:
    // Constructor memiliki nilai default agar objek dapat dibuat tanpa argumen
    Jantung(int detakPerMenit = 70, int kesehatan = 100, bool isBekerja = true);

    // Method public menyediakan operasi yang dapat digunakan oleh class lain
    std::string pompa() const;
    void pacuDetak(int tambahanBpm);

    // Getter membaca nilai atribut yang dienkapsulasi
    int getDetakPerMenit() const;
    void setDetakPerMenit(int detakPerMenit);
    int getKesehatan() const;
    void setKesehatan(int kesehatan);
    bool getIsBekerja() const;
    void setIsBekerja(bool isBekerja);
};

#endif
