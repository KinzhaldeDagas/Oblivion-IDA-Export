int __thiscall sub_6ABA60(_DWORD *this, int a2, int a3)
{
  __int16 v3; // si
  _DWORD *v4; // ecx
  float *v5; // ecx
  float v7; // [esp+0h] [ebp-8h]

  if ( bSoundEnabled_Audio ) /*0x6aba60*/
  {
    v3 = 0x2710; /*0x6aba73*/
    if ( (unsigned __int16)a3 <= 0x2710u ) /*0x6aba78*/
      v3 = a3; /*0x6aba7a*/
    v4 = (_DWORD *)*(this + 0xC0); /*0x6aba81*/
    a3 = 0; /*0x6aba8d*/
    NiTMap_GetAt(v4, a2, &a3); /*0x6aba95*/
    v5 = (float *)a3; /*0x6aba9a*/
    if ( a3 ) /*0x6abaa0*/
    {
      v7 = *(float *)(a3 + 0x3C); /*0x6abaa6*/
      *(_WORD *)(a3 + 0x44) = v3; /*0x6abaa9*/
      sub_6B6F20(v5, v7); /*0x6abaad*/
    }
  }
  return 0; /*0x6abab5*/
}
