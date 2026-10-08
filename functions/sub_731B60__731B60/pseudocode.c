_DWORD *__thiscall sub_731B60(_BYTE *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi

  v2 = (_DWORD *)FormHeapAlloc(0x20u); /*0x731b67*/
  v3 = v2; /*0x731b6c*/
  if ( v2 ) /*0x731b75*/
  {
    *v2 = &NiRefObject::`vftable'; /*0x731b7c*/
    v2[1] = 0; /*0x731b82*/
    InterlockedIncrement(&MEMORY[0xB3FD64]); /*0x731b85*/
    *v3 = &NiDynamicEffectState::`vftable'; /*0x731b8b*/
    *((_BYTE *)v3 + 8) = 0; /*0x731b91*/
    v3[3] = 0; /*0x731b94*/
    v3[4] = 0; /*0x731b97*/
    v3[5] = 0; /*0x731b9a*/
    v3[6] = 0; /*0x731b9d*/
    v3[7] = 0; /*0x731ba0*/
  }
  else
  {
    v3 = 0; /*0x731ba5*/
  }
  *((_BYTE *)v3 + 8) = *(this + 8); /*0x731bad*/
  sub_731A90(*((_DWORD **)this + 3), v3 + 3); /*0x731bb5*/
  sub_731A90(*((_DWORD **)this + 4), v3 + 4); /*0x731bc2*/
  sub_731A90(*((_DWORD **)this + 5), v3 + 5); /*0x731bcf*/
  v3[6] = *((_DWORD *)this + 6); /*0x731bda*/
  v3[7] = *((_DWORD *)this + 7); /*0x731be1*/
  return v3; /*0x731be0*/
}
