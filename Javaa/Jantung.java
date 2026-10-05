// Class Jantung menjadi komponen yang dimiliki oleh setiap objek MakhlukHidup
public class Jantung {
    // Atribut private menerapkan enkapsulasi pada data internal jantung
    private int detakPerMenit;
    private int kesehatan;
    private boolean isBekerja;

    // Constructor tanpa argumen memakai nilai awal yang sama seperti versi Python
    public Jantung() {
        this(70, 100, true);
    }

    // Constructor ini menerima nilai lengkap dari sebuah objek jantung
    public Jantung(int detakPerMenit, int kesehatan, boolean isBekerja) {
        this.detakPerMenit = detakPerMenit;
        this.kesehatan = kesehatan;
        this.isBekerja = isBekerja;
    }

    // Kondisi if memastikan jantung hanya memompa saat aktif dan sehat
    public String pompa() {
        if (isBekerja && kesehatan > 0) {
            return "lub-dub (" + detakPerMenit + " bpm)";
        }
        return "Jantung berhenti berdetak!";
    }

    // Operator += menambah detak saat hewan berlari
    public void pacuDetak(int tambahanBpm) {
        detakPerMenit += tambahanBpm;
    }

    public int getDetakPerMenit() {
        return detakPerMenit;
    }

    public void setDetakPerMenit(int detakPerMenit) {
        this.detakPerMenit = detakPerMenit;
    }

    public int getKesehatan() {
        return kesehatan;
    }

    public void setKesehatan(int kesehatan) {
        this.kesehatan = kesehatan;
    }

    public boolean getIsBekerja() {
        return isBekerja;
    }

    public void setIsBekerja(boolean isBekerja) {
        this.isBekerja = isBekerja;
    }
}
