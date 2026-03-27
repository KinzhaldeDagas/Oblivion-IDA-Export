_LocaleUpdate *__thiscall _LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this, struct localeinfo_struct *a2)
{
  _DWORD *v3; // eax
  int v4; // eax

  *((_BYTE *)this + 0xC) = 0;
  if ( a2 )
  {
    *(struct localeinfo_struct *)this = *a2;
  }
  else
  {
    v3 = (_DWORD *)_getptd();
    *((_DWORD *)this + 2) = v3;
    *(_DWORD *)this = v3[0x1B];
    *((_DWORD *)this + 1) = v3[0x1A];
    if ( *(_UNKNOWN **)this != off_B31998 && (dword_B318B0 & v3[0x1C]) == 0 )
      *(_DWORD *)this = __updatetlocinfo();
    if ( *((volatile LONG **)this + 1) != lpAddend && (dword_B318B0 & *(_DWORD *)(*((_DWORD *)this + 2) + 0x70)) == 0 )
      *((_DWORD *)this + 1) = __updatetmbcinfo();
    v4 = *((_DWORD *)this + 2);
    if ( (*(_BYTE *)(v4 + 0x70) & 2) == 0 )
    {
      *(_DWORD *)(v4 + 0x70) |= 2u;
      *((_BYTE *)this + 0xC) = 1;
    }
  }
  return this;
}
