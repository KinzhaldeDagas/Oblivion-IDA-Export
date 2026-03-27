int __cdecl _mbbtype_l(unsigned __int8 a1, int a2, struct localeinfo_struct *a3)
{
  char v3; // cl
  int v5; // [esp+0h] [ebp-10h] BYREF
  int v6; // [esp+4h] [ebp-Ch]
  int v7; // [esp+8h] [ebp-8h]
  char v8; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v5, a3);
  if ( a2 != 1 )
  {
    v3 = *(_BYTE *)(a1 + v6 + 0x1D);
    if ( (v3 & 4) != 0 )
    {
      if ( v8 )
        *(_DWORD *)(v7 + 0x70) &= ~2u;
      return 1;
    }
    if ( (*(_WORD *)(*(_DWORD *)(v5 + 0xC8) + 2 * a1) & 0x157) != 0 || (v3 & 3) != 0 )
    {
      if ( v8 )
        *(_DWORD *)(v7 + 0x70) &= ~2u;
      return 0;
    }
    goto LABEL_15;
  }
  if ( (*(_BYTE *)(a1 + v6 + 0x1D) & 8) == 0 )
  {
LABEL_15:
    if ( v8 )
      *(_DWORD *)(v7 + 0x70) &= ~2u;
    return 0xFFFFFFFF;
  }
  if ( v8 )
    *(_DWORD *)(v7 + 0x70) &= ~2u;
  return 2;
}
