unsigned __int16 __thiscall sub_75D660(unsigned __int16 *this)
{
  unsigned int v1; // esi
  unsigned int v2; // eax
  int v3; // edx
  int v4; // eax

  v1 = *(this + 0x33); /*0x75d669*/
  v2 = v1; /*0x75d66c*/
  if ( (int)v2 < (int)(v2 + *(this + 0x32)) ) /*0x75d673*/
  {
    do /*0x75d6b3*/
    {
      v3 = *((_DWORD *)this + 0x1A); /*0x75d680*/
      if ( *(unsigned __int16 *)(v3 + 0xB6) > v2 ) /*0x75d68c*/
      {
        v4 = *(_DWORD *)(*(_DWORD *)(v3 + 0xB0) + 4 * v2); /*0x75d694*/
        if ( v4 ) /*0x75d699*/
          *(_WORD *)(v4 + 0x18) &= ~1u; /*0x75d69b*/
      }
      v2 = (unsigned __int16)++v1; /*0x75d6ac*/
    }
    while ( (unsigned __int16)v1 < *(this + 0x32) + *(this + 0x33) ); /*0x75d6b3*/
  }
  return sub_7598C0(this); /*0x75d6b6*/
}
