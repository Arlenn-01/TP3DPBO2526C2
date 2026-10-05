from Hewan import Hewan

class Sapi(Hewan):
    def __init__(self, nama: str, usia: int, berat_kg: int, produksi_susu_liter: int):
        super().__init__(nama, usia, jenis_makanan="rumput", berat_kg=berat_kg) #rumput itu adalah jenis makanan, karena sudah jelas sapi makan rumput
        # berat_kg = berat_kg, itu karena aturan di py yang memiliki nilai harus dikanan, karena jenis_makanan ada nilai maka
        # otomatis berat_kg juga harus memiliki nilai dan bisa diakalin dengan sintaks diatas yang artinya parameter kiri akan menerima dari masukan init
        self._produksi_susu_liter = produksi_susu_liter

    # override
    def tampilkanInfo(self):
        super().tampilkanInfo()
        print(f" | Produksi susu: {self._produksi_susu_liter}L/hari")

    def getProduksiSusu(self):
        return self._produksi_susu_liter

    def setProduksiSusu(self, produksi_susu_liter):
        self._produksi_susu_liter = produksi_susu_liter


