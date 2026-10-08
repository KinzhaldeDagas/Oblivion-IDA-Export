void __thiscall sub_566110(TESForm *this, int Dst, int a3)
{
  TESForm_LoadModifiedForm(this, Dst, a3); /*0x56611e*/
  if ( (Dst & 0x10000000) != 0 ) /*0x566129*/
    *((_DWORD *)this + 7) |= 0x8000u; /*0x56612b*/
  if ( (Dst & 0x8000000) != 0 ) /*0x566138*/
    *((_DWORD *)this + 7) |= 0x10000u; /*0x56613a*/
}
