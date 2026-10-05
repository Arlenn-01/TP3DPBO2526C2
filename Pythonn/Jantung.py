class Jantung:
    def __init__(self, detak_per_menit: int=70, kesehatan: int=100, is_bekerja=True):
        #private karena class lain tidak memiliki kepentingan merubah atribut Jantung
        self.__detak_per_menit = detak_per_menit
        self.__kesehatan = kesehatan
        self.__is_bekerja = is_bekerja
    
    # Enkapsulasi
    def getDetakPerMenit(self):
        return self.__detak_per_menit

    def setDetakPerMenit(self, detak_per_menit):
        self.__detak_per_menit = detak_per_menit

    def getKesehatan(self):
        return self.__kesehatan

    def setKesehatan(self, kesehatan):
        self.__kesehatan = kesehatan

    def getIsBekerja(self):
        return self.__is_bekerja

    def setIsBekerja(self, is_bekerja):
        self.__is_bekerja = is_bekerja

    