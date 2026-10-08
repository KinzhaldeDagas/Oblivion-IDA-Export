char __thiscall sub_6EB570(int this, float a2, int a3, _BYTE *a4)
{
  if ( (*(_BYTE *)(this + 0xC) & 1) != 0 ) /*0x6eb577*/
    a2 = *(float *)(this + 0x20); /*0x6eb57c*/
  if ( flt_A79F00 == a2 ) /*0x6eb593*/
    return 0; /*0x6eb597*/
  if ( (*(unsigned __int8 (__stdcall **)(_DWORD, int, _BYTE *))(**(_DWORD **)(this + 0x18) + 0x60))(LODWORD(a2), a3, a4) ) /*0x6eb5b4*/
  {
    *(_BYTE *)(this + 0x30) = *a4; /*0x6eb5bd*/
    return 1; /*0x6eb5c0*/
  }
  else
  {
    *a4 = 0; /*0x6eb5c6*/
    *(_BYTE *)(this + 0x30) = byte_A7C6AC; /*0x6eb5d0*/
    return 0; /*0x6eb5d3*/
  }
}
