void __thiscall sub_5303E0(TESForm *this, int Dst, int a3)
{
  TESForm_LoadModifiedForm(this, Dst, a3);
  if ( (Dst & 0x10000000) != 0 )
    *((_BYTE *)this + 0x22) = 1;
}
