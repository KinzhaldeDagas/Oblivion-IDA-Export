volatile LONG ***__thiscall sub_4781D0(_DWORD *this, volatile LONG ***a2, unsigned __int8 a3, volatile LONG *a4)
{
  int v4; // eax

  v4 = *(this + 0x18); /*0x4781d1*/
  if ( !v4 || v4 == 0xFFFFFFFF ) /*0x4781e2*/
  {
    *a2 = 0; /*0x47820b*/
    return a2; /*0x478207*/
  }
  else
  {
    sub_43BAF0((_DWORD **)MEMORY[0xB33A1C], a2, (UInt32)this, a3, a4); /*0x4781fb*/
    return a2; /*0x478200*/
  }
}
