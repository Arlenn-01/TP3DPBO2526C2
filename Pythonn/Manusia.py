from MakhlukHidup import MakhlukHidup

class Manusia(MakhlukHidup):
    def __init__(self, nama: str, usia: int, alamat: str, hobi: str):
        super().__init__(nama, usia) # constructor parent
        self._alamat = alamat
        self._hobi = hobi

    def getAlamat(self):
        return self._alamat

    def setAlamat(self, alamat):
        self._alamat = alamat

    def getHobi(self):
        return self._hobi

    def setHobi(self, hobi): 
        self._hobi = hobi
    