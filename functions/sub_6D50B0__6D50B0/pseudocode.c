int __thiscall sub_6D50B0(_DWORD *this, _DWORD *a2, _DWORD *a3, _BYTE *a4)
{
  int v4; // eax

  v4 = *(this + 0x14); /*0x6d50b0*/
  if ( v4 ) /*0x6d50b5*/
  {
    *a2 = *(_DWORD *)(v4 + 8); /*0x6d50be*/
    *a3 = *(_DWORD *)(v4 + 0x10); /*0x6d50c7*/
    *a4 = *(_BYTE *)(v4 + 0x48); /*0x6d50d0*/
    return *(_DWORD *)(v4 + 0xC); /*0x6d50d2*/
  }
  else
  {
    *a2 = 0; /*0x6d50e4*/
    *a3 = 0; /*0x6d50ea*/
    *a4 = 0; /*0x6d50f0*/
    return 0; /*0x6d50f3*/
  }
}
