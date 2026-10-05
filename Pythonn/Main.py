# Saya Renaldi Arlen Purba dengan ini berjanji untuk keberkahanNya tidak akan melakukan kecurangan pada mata kuliah
# DPBO sesuai dengan bentuk kecurangan yang sudah dispesifikasikan.

from Peternak import Peternak
from Sapi import Sapi
from Ayam import Ayam


Arlen = Peternak("Arlen", 20, "laki-laki", "Jl.Desa", "Tidur", "Lembang")
Clar = Peternak("Clar", 20, "perempuan", "Jl.Desa", "Tidur", "Lembang")
sapi1 = Sapi("Bram", 5, 100, 20)
ayam1 = Ayam("Rembo", 3, 5, 10)
sapi2 = Sapi("sisil", 5, 100, 20)
ayam2 = Ayam("luoyi", 3, 5, 10)
Arlen.tambahHewan(sapi1)
Arlen.tambahHewan(ayam1)
Clar.tambahHewan(sapi2)
Clar.tambahHewan(ayam2)
Arlen.unjukKepunyaanDaftarTernak()
Clar.unjukKepunyaanDaftarTernak()
