from Manusia import Manusia

class Peternak(Manusia):
    def __init__(self, nama: str, usia: int, alamat: str, hobi: str, daerah_peternakan: str):
        super().__init__(nama, usia, alamat, hobi)
        self.__daerah_peternakan = daerah_peternakan
        self.__daftar_ternak = [] # peternak memiliki list hewan yang utamanya adalah sapi dan ayam

    def getDaerahPeternakan(self):
        return self.__daerah_peternakan

    def setDaerahPeternakan(self, daerah_peternakan):
        self.__daerah_peternakan = daerah_peternakan

    