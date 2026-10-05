from MakhlukHidup import MakhlukHidup

class Manusia(MakhlukHidup):
    def __init__(self, nama: str, usia: int, gender: str, alamat: str, hobi: str):
        super().__init__(nama, usia) # constructor parent
        self._gender = gender
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

    def getGender(self):
        return self._gender

    def setGender(self, gender): 
        self._gender = gender