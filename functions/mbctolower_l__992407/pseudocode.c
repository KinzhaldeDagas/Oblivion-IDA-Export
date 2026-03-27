int __cdecl _mbctolower_l(unsigned int a1, struct localeinfo_struct *a2)
{
  int result; // eax
  struct localeinfo_struct v3; // [esp+4h] [ebp-18h] BYREF
  int v4; // [esp+Ch] [ebp-10h]
  char v5; // [esp+10h] [ebp-Ch]
  int v6; // [esp+14h] [ebp-8h] BYREF
  int v7; // [esp+18h] [ebp-4h] BYREF

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v3, a2);
  if ( a1 <= 0xFF )
  {
    if ( (v3.mbcinfo->mbctype[a1 + 1] & 0x10) != 0 )
      result = v3.mbcinfo->mbcasemap[a1];
    else
      result = a1;
  }
  else
  {
    LOBYTE(v7) = BYTE1(a1);
    BYTE1(v7) = a1;
    if ( (v3.mbcinfo->mbctype[BYTE1(a1) + 1] & 4) == 0
      || !__crtLCMapStringA(&v3, v3.mbcinfo->mblcid, 0x100u, &v7, 2, (int)&v6, 2, v3.mbcinfo->mbcodepage) )
    {
      if ( v5 )
        *(_DWORD *)(v4 + 0x70) &= ~2u;
      return a1;
    }
    result = BYTE1(v6) + ((unsigned __int8)v6 << 8);
  }
  if ( v5 )
    *(_DWORD *)(v4 + 0x70) &= ~2u;
  return result;
}
