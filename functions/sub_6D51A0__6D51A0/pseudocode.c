int __thiscall sub_6D51A0(_DWORD *this, _DWORD *a2, _DWORD *a3, _BYTE *a4)
{
  int v4; // eax

  v4 = *(this + 0x14); /*0x6d51a0*/
  if ( v4 ) /*0x6d51a5*/
  {
    *a2 = *(_DWORD *)(v4 + 0x2C); /*0x6d51ae*/
    *a3 = *(_DWORD *)(v4 + 0x34); /*0x6d51b7*/
    *a4 = *(_BYTE *)(v4 + 0x4B); /*0x6d51c0*/
    return *(_DWORD *)(v4 + 0x30); /*0x6d51c2*/
  }
  else
  {
    *a2 = 0; /*0x6d51d4*/
    *a3 = 0; /*0x6d51da*/
    *a4 = 0; /*0x6d51e0*/
    return 0; /*0x6d51e3*/
  }
}
