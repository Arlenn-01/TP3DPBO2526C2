from Hewan import Hewan

class Ayam(Hewan):
    def __init__(self, nama: str, usia: int, berat_kg: int, produksi_telur_butir):
        super().__init__(nama, usia, jenis_makanan="biji bijian", berat_kg=berat_kg)
        self._produksi_telur_butir = produksi_telur_butir

    def getProduksiTelurButir(self):
        return self._produksi_telur_butir

    def setProduksiTelurButir(self):
        self._produksi_telur_butir = self._produksi_telur_butir