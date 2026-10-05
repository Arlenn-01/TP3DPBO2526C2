from MakhlukHidup import MakhlukHidup

class Hewan(MakhlukHidup):
    def __init__(self, nama: str, usia: int, jenis_makanan: str, berat_kg: int):
        super().__init__(nama, usia) #constructor orang tua
        self._jenis_makanan = jenis_makanan
        self._berat_kg = berat_kg

    # nantinya method ini akan ditimpa (override oleh class anaknya)
    def tampilkanInfo(self):
        # Cetakan standar hewan
        # self.__clas__.__name__ akan menunjukkan objek saat ini classnya apa (entah hewan atau sapi atau ayam)
        print(
            f"  - [{self.__class__.__name__}] Nama: {self._nama} | Usia: {self._usia} thn | Jenis Makanan: {self._jenis_makanan} | Berat: {self._berat_kg} kg",
            end="",
        ) # end="" untuk mematikan \n otomatis pada print. Lalu koma di akhir hanya aturan tidak wajib 
        # aturan tersebut untuk memudahkan jika setelah end ada parameter lain lagi, kalau end ditaruh di one line tidak perlu pake koma

    def berlari(self):
        print(f"{self._nama} berlari kencang!")
        self._jantung.pacu_detak(20)  # Interaksi alami komposisi

    def getJenisMakanan(self):
        return self._jenis_makanan

    def setJenisMakanan(self, jenis_makanan):
        self._jenis_makanan = jenis_makanan

    def getBeratKG(self):
        return self._berat_kg

    def setBeratKG(self, berat_kg):
        self._berat_kg = berat_kg