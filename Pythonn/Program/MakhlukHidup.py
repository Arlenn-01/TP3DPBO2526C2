from Jantung import Jantung

class MakhlukHidup :

    def __init__(self, nama: str, usia: int, energi: int=100):
        #protected
        self._nama = nama
        self._usia = usia
        self._energi = energi # energi kehidupan, kalau 0 mati
        self._jantung = Jantung() #komposisi karena makhluk hidup pasti punya jantung

    # Delegasi method: MakhlukHidup menyuruh jantungnya memompa
    def bernapas(self):
        status_jantung = self._jantung.pompa()
        print(f"{self._nama} sedang bernapas... Jantung: {status_jantung}")

    #enkapsulasi
    def getNama(self):
        return self._nama

    def setNama(self, nama):
        self.__nama = nama

    def getUsia(self, usia):
        return self._usia

    def setUsia(self, usia):
        self._usia = usia

    def getEnergi(self):
        return self._energi

    def setEnergi(self, energi):
        self._energi = energi