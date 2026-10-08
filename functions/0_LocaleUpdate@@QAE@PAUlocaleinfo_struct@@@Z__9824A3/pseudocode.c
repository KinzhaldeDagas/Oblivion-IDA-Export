_LocaleUpdate *__thiscall _LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this, struct localeinfo_struct *a2)
{
  DWORD *v3; // eax
  int v4; // eax

  *((_BYTE *)this + 0xC) = 0; /*0x9824ac*/
  if ( a2 ) /*0x9824b0*/
  {
    *(struct localeinfo_struct *)this = *a2; /*0x982517*/
  }
  else
  {
    v3 = _getptd(); /*0x9824b2*/
    *((_DWORD *)this + 2) = v3; /*0x9824b7*/
    *(_DWORD *)this = v3[0x1B]; /*0x9824bd*/
    *((_DWORD *)this + 1) = v3[0x1A]; /*0x9824c2*/
    if ( *(_UNKNOWN **)this != off_B31998 && (dword_B318B0 & v3[0x1C]) == 0 ) /*0x9824d8*/
      *(_DWORD *)this = __updatetlocinfo(); /*0x9824df*/
    if ( *((volatile LONG **)this + 1) != lpAddend && (dword_B318B0 & *(_DWORD *)(*((_DWORD *)this + 2) + 0x70)) == 0 ) /*0x9824f8*/
      *((_DWORD *)this + 1) = __updatetmbcinfo(); /*0x9824ff*/
    v4 = *((_DWORD *)this + 2); /*0x982502*/
    if ( (*(_BYTE *)(v4 + 0x70) & 2) == 0 ) /*0x982509*/
    {
      *(_DWORD *)(v4 + 0x70) |= 2u; /*0x98250b*/
      *((_BYTE *)this + 0xC) = 1; /*0x98250f*/
    }
  }
  return this; /*0x982521*/
}
