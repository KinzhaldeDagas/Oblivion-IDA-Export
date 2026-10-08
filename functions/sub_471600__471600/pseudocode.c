int __thiscall sub_471600(int this)
{
  unsigned int v1; // edx
  int v2; // eax
  _DWORD *v3; // esi
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 0x6C) ) /*0x471600*/
    return 0; /*0x471600*/
  v1 = *(unsigned __int16 *)(this + 0x46); /*0x471607*/
  v2 = 0; /*0x47160b*/
  if ( !*(_WORD *)(this + 0x46) ) /*0x471607*/
    return 0; /*0x471625*/
  v3 = *(_DWORD **)(this + 0x40); /*0x471611*/
  for ( i = v3; !*i; ++i ) /*0x471614*/
  {
    if ( ++v2 >= v1 ) /*0x471623*/
      return 0; /*0x471623*/
  }
  return *(_DWORD *)(v3[v2] + 0x60); /*0x471627*/
}
