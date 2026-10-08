char __thiscall sub_6D2580(int this, float a2, int a3, float *a4)
{
  int v6; // ecx

  if ( (*(_BYTE *)(this + 0xC) & 1) != 0 ) /*0x6d2587*/
    a2 = *(float *)(this + 0x20); /*0x6d258c*/
  if ( flt_A79F00 == a2 ) /*0x6d25a3*/
    return 0; /*0x6d25a7*/
  v6 = *(_DWORD *)(this + 0x18); /*0x6d25ad*/
  if ( v6 && (*(unsigned __int8 (__stdcall **)(_DWORD, int, int))(*(_DWORD *)v6 + 0x5C))(LODWORD(a2), a3, this + 0x30) ) /*0x6d25c7*/
  {
    *a4 = *(float *)(this + 0x30); /*0x6d25d4*/
    return 1; /*0x6d25d6*/
  }
  else
  {
    *(float *)(this + 0x30) = flt_A7C6B0; /*0x6d25e8*/
    *a4 = flt_A7C6B0; /*0x6d25f4*/
    return 0; /*0x6d25f2*/
  }
}
