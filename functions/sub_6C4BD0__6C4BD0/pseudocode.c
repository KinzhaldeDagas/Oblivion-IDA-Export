int __thiscall sub_6C4BD0(_WORD *this)
{
  unsigned int i; // edi
  int v3; // eax
  int v4; // esi

  for ( i = 0; i < (unsigned __int16)*(this + 0x23); ++i ) /*0x6c4bd6*/
  {
    v3 = *((_DWORD *)this + 0x10); /*0x6c4be0*/
    v4 = *(_DWORD *)(v3 + 4 * i); /*0x6c4be3*/
    if ( v4 ) /*0x6c4be8*/
    {
      sub_6CAC60(*(_DWORD **)(v3 + 4 * i)); /*0x6c4bec*/
      *(_DWORD *)(v4 + 0x40) = 0; /*0x6c4bf1*/
    }
  }
  sub_739670(this + 0x1E); /*0x6c4c07*/
  return NiTMap_Clear((_DWORD *)this + 0x16); /*0x6c4c0c*/
}
