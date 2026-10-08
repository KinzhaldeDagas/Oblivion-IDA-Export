_DWORD **__thiscall sub_8BC2E0(_DWORD *this)
{
  _DWORD **result; // eax
  _DWORD *v3; // ecx

  result = (_DWORD **)*(this + 4); /*0x8bc2e3*/
  *this = &off_A98330; /*0x8bc2e8*/
  if ( !result ) /*0x8bc2ee*/
  {
    v3 = (_DWORD *)*(this + 2); /*0x8bc2f0*/
    if ( v3 ) /*0x8bc2f5*/
      result = sub_8BC310(v3, 1); /*0x8bc2f9*/
  }
  *this = &hkBaseObject::`vftable'; /*0x8bc2fe*/
  return result; /*0x8bc304*/
}
