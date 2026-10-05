from MakhlukHidup import MakhlukHidup

class Hewan(MakhlukHidup):
    def __init__(self, nama: str, usia: int, jenis_makanan: str, berat_kg: int):
        super().__init__(nama, usia) #constructor orang tua
        self._jenis_makanan = jenis_makanan
        self._berat_kg = berat_kg

    def getJenisMakanan(self):
        return self._jenis_makanan

    def setJenisMakanan(self, jenis_makanan):
        self._jenis_makanan = jenis_makanan

    def getBeratKG(self):
        return self._berat_kg

    def setBeratKG(self, berat_kg):
        self._berat_kg = berat_kg

