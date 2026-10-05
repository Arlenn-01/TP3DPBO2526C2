from Manusia import Manusia
from Hewan import Hewan

class Peternak(Manusia):
    def __init__(self, nama: str, usia: int, gender: str, alamat: str, hobi: str, daerah_peternakan: str):
        super().__init__(nama, usia, gender, alamat, hobi)
        self.__daerah_peternakan = daerah_peternakan
        self.__daftar_ternak = [] # peternak memiliki list hewan yang utamanya adalah sapi dan ayam

    def getDaerahPeternakan(self):
        return self.__daerah_peternakan 

    def setDaerahPeternakan(self, daerah_peternakan):
        self.__daerah_peternakan = daerah_peternakan

    def tambahHewan(self, hewan: Hewan): # hewan tipe hinting nya adalah Hewan yang merupakan sebuah class
        self.__daftar_ternak.append(hewan) # polimorfis, nantinya hewan ini bisa menerima sapi atau ayam karena masih anak dari class Hewan

    def unjukKepunyaanDaftarTernak(self):
        # jika list kosong 
        if not self.__daftar_ternak:
            print("Tidak ada data hewan ternak apapun")
            return

        # jika list berisi
        if self._gender == "laki-laki":
            print(f"== Daftar Ternak Pak {self._nama} ==")
        else:
            print(f"== Daftar Ternak Bu {self._nama} ==")
            #print
        for h in self.__daftar_ternak: # h merepresentasikan objek Hewan (sapi/ayam)
            h.tampilkanInfo()
        