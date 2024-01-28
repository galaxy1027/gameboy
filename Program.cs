using Raylib_cs;

namespace Gameboy;

class Program {
    public static void Main() {
        CPU cpu = new CPU();

        cpu.setAF(0x1234);
        cpu.setBC(0x5678);
        cpu.setDE(0x9ABC);
        cpu.setHL(0xDEF0);

        Console.WriteLine("0x{0:X}", cpu.getAF());
        Console.WriteLine("0x{0:X}", cpu.getBC());
        Console.WriteLine("0x{0:X}", cpu.getDE());
        Console.WriteLine("0x{0:X}", cpu.getHL());
    }
}