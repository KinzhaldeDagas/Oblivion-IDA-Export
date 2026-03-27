bool __thiscall sub_6DA2D0(int this, int a2)
{
  return !*(_DWORD *)(this + 0x18)
      && (*(float *)&dword_B24FC8 != *(float *)(this + 0xC)
       || *(float *)&dword_B24FCC != *(float *)(this + 0x10)
       || *(float *)&dword_B24FD0 != *(float *)(this + 0x14));
}
