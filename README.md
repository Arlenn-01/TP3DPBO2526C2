# TP3DPBO2526C2
Weekly Programming Assignment about Design and Objek Oriented Programming

# Janji
Saya Renaldi Arlen Purba dengan ini berjanji tidak akan melakukan kecurangan sesuai dengan yang telah dispesifikasikan. Untuk keberkahannya Amin

## Implementasi

Proyek ini memiliki implementasi yang setara dalam tiga bahasa:

- `Pythonn`: jalankan `python Main.py`
- `CPP`: kompilasikan seluruh file dengan standar C++17, lalu jalankan hasil kompilasi
- `Javaa`: kompilasikan dengan `javac *.java`, lalu jalankan `java Main`

Nama file pada implementasi C++ dan Java menggunakan PascalCase atau CamelCase sesuai nama kelasnya

## Desain Diagram Program

Diagram berikut menunjukkan hubungan antar class pada program:

```text
                         memiliki
                    +----------------+
                    |    Jantung     |
                    +----------------+
                            ^
                            | komposisi
                            |
                    +----------------+
                    | MakhlukHidup   |
                    +----------------+
                       ^            ^
                       |            |
                 inheritance   inheritance
                       |            |
                +-------------+  +-------------+
                |   Manusia   |  |    Hewan    |
                +-------------+  +-------------+
                       ^            ^
                       |            |
                 inheritance   inheritance
                       |            |
                +-------------+  +-------------+
                |  Peternak   |  | Ayam / Sapi |
                +-------------+  +-------------+
                       |             |
                       |   agregasi  |
                       +-------------+
                            memiliki banyak
                            objek Ayam dan Sapi
```

## Penjelasan Atribut dan Method Setiap Kelas

### Class `Jantung`

Class ini digunakan untuk menggambarkan jantung yang dimiliki oleh setiap makhluk hidup

| Atribut | Penjelasan |
| --- | --- |
| `detakPerMenit` | Menyimpan jumlah detak jantung per menit |
| `kesehatan` | Menyimpan nilai kesehatan jantung |
| `isBekerja` | Menentukan apakah jantung masih bekerja |

| Method | Penjelasan |
| --- | --- |
| `pompa()` | Mengembalikan status jantung dalam bentuk teks |
| `pacuDetak()` | Menambah jumlah detak jantung |
| Getter dan setter | Membaca dan mengubah data jantung |

### Class `MakhlukHidup`

Class ini menjadi class dasar untuk manusia dan hewan

| Atribut | Penjelasan |
| --- | --- |
| `nama` | Menyimpan nama makhluk hidup |
| `usia` | Menyimpan usia makhluk hidup |
| `energi` | Menyimpan energi yang dimiliki |
| `jantung` | Menyimpan objek Jantung sebagai komposisi |

| Method | Penjelasan |
| --- | --- |
| `bernapas()` | Meminta jantung untuk memompa dan menampilkan statusnya |
| Getter dan setter | Membaca dan mengubah nama, usia, dan energi |

### Class `Manusia`

Class ini merupakan turunan dari `MakhlukHidup` dan menyimpan informasi tambahan tentang manusia

| Atribut | Penjelasan |
| --- | --- |
| `gender` | Menyimpan jenis kelamin |
| `alamat` | Menyimpan alamat |
| `hobi` | Menyimpan hobi |

| Method | Penjelasan |
| --- | --- |
| Getter dan setter alamat | Membaca dan mengubah alamat |
| Getter dan setter hobi | Membaca dan mengubah hobi |
| Getter dan setter gender | Membaca dan mengubah gender |

### Class `Hewan`

Class ini merupakan turunan dari `MakhlukHidup` dan menjadi class induk untuk `Ayam` serta `Sapi`

| Atribut | Penjelasan |
| --- | --- |
| `jenisMakanan` | Menyimpan makanan hewan |
| `beratKg` | Menyimpan berat hewan dalam kilogram |

| Method | Penjelasan |
| --- | --- |
| `tampilkanInfo()` | Menampilkan informasi umum hewan |
| `berlari()` | Menampilkan aksi berlari dan menaikkan detak jantung |
| Getter dan setter | Membaca dan mengubah jenis makanan serta berat hewan |

### Class `Ayam`

Class ini merupakan turunan dari `Hewan`

| Atribut | Penjelasan |
| --- | --- |
| `produksiTelurButir` | Menyimpan jumlah telur yang dihasilkan per hari |

| Method | Penjelasan |
| --- | --- |
| `tampilkanInfo()` | Menampilkan informasi hewan dan jumlah produksi telur |
| Getter dan setter produksi telur | Membaca dan mengubah produksi telur |

### Class `Sapi`

Class ini merupakan turunan dari `Hewan`

| Atribut | Penjelasan |
| --- | --- |
| `produksiSusuLiter` | Menyimpan jumlah susu yang dihasilkan per hari |

| Method | Penjelasan |
| --- | --- |
| `tampilkanInfo()` | Menampilkan informasi hewan dan jumlah produksi susu |
| Getter dan setter produksi susu | Membaca dan mengubah produksi susu |

### Class `Peternak`

Class ini merupakan turunan dari `Manusia` dan memiliki daftar hewan ternak

| Atribut | Penjelasan |
| --- | --- |
| `daerahPeternakan` | Menyimpan daerah tempat peternakan |
| `daftarTernak` | Menyimpan banyak objek hewan, yaitu Ayam dan Sapi |

| Method | Penjelasan |
| --- | --- |
| `tambahHewan()` | Menambahkan Ayam atau Sapi ke daftar ternak |
| `unjukKepunyaanDaftarTernak()` | Menampilkan semua hewan yang dimiliki |
| Getter dan setter daerah peternakan | Membaca dan mengubah daerah peternakan |

## Penjelasan Desain Program

### Inheritance MakhlukHidup ke Manusia dan Hewan

`MakhlukHidup` menjadi class dasar karena manusia dan hewan sama-sama memiliki nama, usia, energi, serta jantung

`Manusia` dan `Hewan` mewarisi data serta method dari `MakhlukHidup`, sehingga keduanya dapat menggunakan method `bernapas()` tanpa menulis ulang proses yang sama

### Inheritance Hewan ke Ayam dan Sapi

`Ayam` dan `Sapi` merupakan jenis khusus dari `Hewan`

Keduanya tetap memiliki nama, usia, jenis makanan, berat, dan kemampuan berlari, tetapi masing-masing menambahkan data produksi yang berbeda

Method `tampilkanInfo()` diubah pada `Ayam` dan `Sapi` agar dapat menampilkan informasi khusus telur atau susu

### Inheritance Manusia ke Peternak

`Peternak` merupakan jenis khusus dari `Manusia`

Karena itu, peternak tetap memiliki nama, usia, gender, alamat, dan hobi, lalu mendapatkan tambahan daerah peternakan serta daftar hewan

### Komposisi MakhlukHidup dengan Jantung

Setiap objek `MakhlukHidup` membuat dan memiliki satu objek `Jantung`

Hubungan ini disebut komposisi karena jantung menjadi bagian dari makhluk hidup dan digunakan langsung ketika makhluk hidup bernapas

Saat method `bernapas()` dipanggil, `MakhlukHidup` meminta `Jantung` menjalankan method `pompa()`

### Agregasi Peternak dengan Ayam dan Sapi

`Peternak` memiliki daftar yang dapat menyimpan banyak objek `Ayam` dan `Sapi`

Hubungan ini disebut agregasi karena satu peternak dapat memiliki beberapa hewan, dan hewan tersebut disimpan sebagai objek yang dapat diperlakukan sebagai `Hewan`

Daftar ini juga menunjukkan polymorphism karena method `tampilkanInfo()` yang dipanggil akan mengikuti jenis objek sebenarnya, yaitu `Ayam` atau `Sapi`

## Penjelasan Alur Program

Alur berikut berlaku untuk implementasi Python, C++, dan Java:

1. Program membuat dua objek `Peternak`, yaitu Arlen dan Waguri
2. Program menampilkan daftar ternak awal yang masih kosong
3. Program membuat empat objek `Ayam` dan empat objek `Sapi`
4. Empat hewan pertama dimasukkan ke daftar ternak Arlen, sedangkan empat hewan lainnya dimasukkan ke daftar ternak Waguri
5. Program menampilkan daftar ternak setiap peternak
6. Saat daftar ditampilkan, setiap hewan menjalankan `tampilkanInfo()` sesuai jenis class-nya
7. Program menjalankan simulasi pada Sapi bernama Branz dan Ayam bernama Rembo
8. Setiap hewan bernapas, lalu berlari sehingga detak jantungnya bertambah 20 bpm, kemudian bernapas kembali
9. Hasil akhirnya menampilkan detak awal 70 bpm dan detak setelah berlari menjadi 90 bpm
