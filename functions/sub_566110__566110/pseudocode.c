void __thiscall sub_566110(TESForm *this, int Dst, int a3)
{
  TESForm_LoadModifiedForm(this, Dst, a3);
  if ( (Dst & 0x10000000) != 0 )
    *((_DWORD *)this + 7) |= 0x8000u;
  if ( (Dst & 0x8000000) != 0 )
    *((_DWORD *)this + 7) |= 0x10000u;
}
