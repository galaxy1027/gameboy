

namespace Gameboy;

class CPU {

    private byte B;
    private byte A;
    private byte C;
    private byte D;
    private byte E;
    private byte F;
    private byte H;
    private byte L;

    bool zero;
    bool subtract;
    bool halfCarry;
    bool carry;

    public ushort getAF() {
        return (ushort)((this.A << 8) | this.F);
    }
    public ushort getBC() {
        return (ushort)((this.B << 8) | this.C);
    }
    public ushort getDE() {
            return (ushort)((this.D << 8) | this.E);
    }
    public ushort getHL() {
            return (ushort)((this.H << 8) | this.L);
    }


    public void setAF(ushort val) {
        this.A = (byte)((val >> 8) & 0xFF);
        this.F = (byte)(val & 0xFF);
    }
    public void setBC(ushort val) {
        this.B = (byte)((val >> 8) & 0xFF);
        this.C = (byte)(val & 0xFF);
    }
    public void setDE(ushort val) {
        this.D = (byte)((val >> 8) & 0xFF);
        this.E = (byte)(val & 0xFF);
    }
    public void setHL(ushort val) {
        this.H = (byte)((val >> 8) & 0xFF);
        this.L = (byte)(val & 0xFF);
    }
}