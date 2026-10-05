from Peternak import Peternak
from Ayam import Ayam
from Sapi import Sapi

# Siapkan objek peternak awal
Arlen = Peternak("Arlen", 20, "laki-laki", "Jl.Desa", "Coding", "Lembang")
WaguriMyBubub = Peternak("Waguri", 18, "perempuan", "Jl.Desa", "Membaca", "Greenland")

# Ketika list data hewan ternak masih kosong
print("Sebelum Tambah data")
Arlen.unjukKepunyaanDaftarTernak()
WaguriMyBubub.unjukKepunyaanDaftarTernak()

# Siapkan data
ayam1 = Ayam("Rembo", 2, 2, 20)
ayam2 = Ayam("Black", 3, 3, 23)
ayam3 = Ayam("SiJago", 4, 2, 35)
ayam4 = Ayam("Kikis", 1, 1, 10)


sapi1 = Sapi("Branz", 4, 150, 20)
sapi2 = Sapi("Culcol", 5, 250, 30)
sapi3 = Sapi("Cow", 6, 400, 35)
sapi4 = Sapi("Roar", 7, 600, 45)

# Masukkan data
Arlen.tambahHewan(ayam1)
Arlen.tambahHewan(ayam2)
Arlen.tambahHewan(sapi1)
Arlen.tambahHewan(sapi2)

WaguriMyBubub.tambahHewan(ayam3)
WaguriMyBubub.tambahHewan(ayam4)
WaguriMyBubub.tambahHewan(sapi3)
WaguriMyBubub.tambahHewan(sapi4)


print("\nSetelah tambah data")
Arlen.unjukKepunyaanDaftarTernak()
print()
WaguriMyBubub.unjukKepunyaanDaftarTernak()

print("\n=== SIMULASI INTERAKSI ORGAN (KOMPOSISI) ===")
# Panggilan bernapas/berlari akan memicu kerja Jantung di dalam secara alami
sapi1.bernapas()
sapi1.berlari()
sapi1.bernapas()
print()
ayam1.bernapas()
ayam1.berlari()
ayam1.bernapas()

