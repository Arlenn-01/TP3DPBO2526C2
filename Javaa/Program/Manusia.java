// Manusia mewarisi perilaku dasar dari MakhlukHidup
public class Manusia extends MakhlukHidup {
    // Atribut tambahan khusus manusia
    protected String gender;
    protected String alamat;
    protected String hobi;

    // super memanggil constructor class induk sebelum atribut manusia diisi
    public Manusia(String nama, int usia, String gender, String alamat, String hobi) {
        super(nama, usia);
        this.gender = gender;
        this.alamat = alamat;
        this.hobi = hobi;
    }

    public String getAlamat() {
        return alamat;
    }

    public void setAlamat(String alamat) {
        this.alamat = alamat;
    }

    public String getHobi() {
        return hobi;
    }

    public void setHobi(String hobi) {
        this.hobi = hobi;
    }

    public String getGender() {
        return gender;
    }

    public void setGender(String gender) {
        this.gender = gender;
    }
}
