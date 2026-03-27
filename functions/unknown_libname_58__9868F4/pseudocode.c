int __usercall unknown_libname_58@<eax>(int a1@<edi>, int a2@<esi>, char *Str1, char *Str2, size_t MaxCount)
{
  unsigned __int16 v5; // cx
  int v6; // ecx
  bool v7; // zf
  char v9; // cl
  unsigned __int16 v10; // dx
  char *v11; // edi
  int v12; // ecx
  int v13; // ecx
  unsigned __int16 v14; // dx
  int v15; // ecx
  bool v16; // cf
  size_t v17; // [esp-4h] [ebp-20h]
  _BYTE v18[4]; // [esp+4h] [ebp-18h] BYREF
  int v19; // [esp+8h] [ebp-14h]
  int v20; // [esp+Ch] [ebp-10h]
  char v21; // [esp+10h] [ebp-Ch]
  int v22; // [esp+14h] [ebp-8h]
  int v23; // [esp+18h] [ebp-4h]
  char *Str1a; // [esp+24h] [ebp+8h]
  int MaxCounta; // [esp+2Ch] [ebp+10h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v18, (struct localeinfo_struct *)HIDWORD(MaxCount));
  if ( !(_DWORD)MaxCount )
  {
    if ( v21 )
      *(_DWORD *)(v20 + 0x70) &= ~2u;
    goto LABEL_35;
  }
  if ( !*(_DWORD *)(v19 + 8) )
  {
    LODWORD(v17) = MaxCount;
    _strnicmp(Str1, Str2, v17);
    if ( v21 )
      *(_DWORD *)(v20 + 0x70) &= ~2u;
    goto LABEL_35;
  }
  if ( !Str1 )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, a1, a2);
    if ( v21 )
      *(_DWORD *)(v20 + 0x70) &= ~2u;
LABEL_35:
    JUMPOUT(0x986ADB);
  }
  if ( !Str2 )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, 0, a2);
    if ( v21 )
      *(_DWORD *)(v20 + 0x70) &= ~2u;
    JUMPOUT(0x986ADA);
  }
  v5 = (unsigned __int8)*Str1;
  MaxCounta = MaxCount - 1;
  Str1a = Str1 + 1;
  v22 = v5;
  if ( (*(_BYTE *)((unsigned __int8)v5 + v19 + 0x1D) & 4) != 0 )
  {
    if ( !MaxCounta )
    {
      v6 = (unsigned __int8)*Str2;
      v7 = (*(_BYTE *)(v6 + v19 + 0x1D) & 4) == 0;
      v22 = 0;
      if ( !v7 )
        JUMPOUT(0x986ACB);
      v6 = (unsigned __int16)v6;
      v23 = (unsigned __int16)v6;
      goto LABEL_20;
    }
    v9 = *Str1a;
    if ( *Str1a )
    {
      HIBYTE(v10) = v22;
      ++Str1a;
      LOBYTE(v10) = v9;
      v22 = v10;
    }
    else
    {
      v22 = 0;
    }
  }
  else
  {
    v12 = (unsigned __int16)v22 + v19;
    if ( (*(_BYTE *)(v12 + 0x1D) & 0x10) != 0 )
      v13 = *(unsigned __int8 *)(v12 + 0x11D);
    else
      v13 = (unsigned __int16)v22;
    v22 = v13;
  }
  v23 = (unsigned __int8)*Str2;
  v6 = (unsigned __int8)v23;
  v11 = Str2 + 1;
  if ( (*(_BYTE *)((unsigned __int8)v23 + v19 + 0x1D) & 4) == 0 )
    JUMPOUT(0x986AF0);
  if ( !MaxCounta || (--MaxCounta, !*v11) )
  {
    v23 = 0;
LABEL_20:
    LOWORD(v6) = v23;
    return unknown_libname_58_::unknown_libname_59(v6, Str1a, Str2, MaxCounta);
  }
  HIBYTE(v14) = v23;
  LOBYTE(v14) = *v11;
  v15 = v14;
  v16 = v14 < *(_WORD *)(v19 + 0x10);
  v23 = v14;
  if ( v16 || v14 > *(_WORD *)(v19 + 0x12) )
    JUMPOUT(0x986ADE);
  LOWORD(v15) = *(_WORD *)(v19 + 0x14) + v14;
  return unknown_libname_58_::unknown_libname_59(v15, Str1a, Str2, MaxCounta);
}
