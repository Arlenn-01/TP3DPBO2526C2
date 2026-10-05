from Hewan import Hewan

class Ayam(Hewan):
    def __init__(self, nama: str, usia: int, berat_kg: int, produksi_telur_butir):
        super().__init__(nama, usia, jenis_makanan="biji bijian", berat_kg=berat_kg)
        self._produksi_telur_butir = produksi_telur_butir

    def tampilkanInfo(self):
        # super disini agar jelas bahwa tampilkan_info yang dipanggil itu milik ortu dan bukan miliknya sendiri
        super().tampilkanInfo() # berguna agar tidak perlu menulis ulang kode print yang sudah ada di induk
        #override disini melebarkan kemampuan dari class Hewan tadi yang dimodifikasi dan ditambahkan dengan atribut dari class ayam ini
        print(f" | Telur: {self._produksi_telur_butir} butir/hari") 
        
    def getProduksiTelurButir(self):
        return self._produksi_telur_butir

    def setProduksiTelurButir(self):
        self._produksi_telur_butir = self._produksi_telur_butir