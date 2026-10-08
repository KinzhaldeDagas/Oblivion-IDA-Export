int __cdecl _mbctolower_l(unsigned int a1, struct localeinfo_struct *a2)
{
  int result; // eax
  struct localeinfo_struct v3; // [esp+4h] [ebp-18h] BYREF
  int v4; // [esp+Ch] [ebp-10h]
  char v5; // [esp+10h] [ebp-Ch]
  int v6; // [esp+14h] [ebp-8h] BYREF
  int v7; // [esp+18h] [ebp-4h] BYREF

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v3, a2); /*0x992414*/
  if ( a1 <= 0xFF ) /*0x992422*/
  {
    if ( (v3.mbcinfo->mbctype[a1 + 1] & 0x10) != 0 ) /*0x99248e*/
      result = v3.mbcinfo->mbcasemap[a1]; /*0x992490*/
    else
      result = a1; /*0x992499*/
  }
  else
  {
    LOBYTE(v7) = BYTE1(a1); /*0x99242c*/
    BYTE1(v7) = a1; /*0x992432*/
    if ( (v3.mbcinfo->mbctype[BYTE1(a1) + 1] & 4) == 0 /*0x99246a*/
      || !__crtLCMapStringA(&v3, v3.mbcinfo->mblcid, 0x100u, (char *)&v7, 2, (CHAR *)&v6, 2, v3.mbcinfo->mbcodepage) )
    {
      if ( v5 ) /*0x992440*/
        *(_DWORD *)(v4 + 0x70) &= ~2u; /*0x992445*/
      return a1; /*0x99244b*/
    }
    result = BYTE1(v6) + ((unsigned __int8)v6 << 8); /*0x992481*/
  }
  if ( v5 ) /*0x99249f*/
    *(_DWORD *)(v4 + 0x70) &= ~2u; /*0x9924a4*/
  return result; /*0x9924a8*/
}
