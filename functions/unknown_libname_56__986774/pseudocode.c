int __usercall unknown_libname_56@<eax>(int a1@<edi>, int a2@<esi>, char *Str1, char *Str2, size_t MaxCount)
{
  int v5; // edi
  unsigned __int8 v6; // cl
  char *v7; // eax
  size_t v9; // [esp-8h] [ebp-1Ch]
  _BYTE v10[4]; // [esp+4h] [ebp-10h] BYREF
  int v11; // [esp+8h] [ebp-Ch]
  int v12; // [esp+Ch] [ebp-8h]
  char v13; // [esp+10h] [ebp-4h]
  char *Str1a; // [esp+1Ch] [ebp+8h]
  int MaxCounta; // [esp+24h] [ebp+10h]

  if ( !(_DWORD)MaxCount )
    JUMPOUT(0x9868C6);
  HIDWORD(v9) = a1;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v10, (struct localeinfo_struct *)HIDWORD(MaxCount));
  v5 = v11;
  if ( !*(_DWORD *)(v11 + 8) )
  {
    LODWORD(v9) = MaxCount;
    strncmp(Str1, Str2, v9);
    if ( v13 )
      *(_DWORD *)(v12 + 0x70) &= ~2u;
    goto LABEL_24;
  }
  if ( !Str1 )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, v5, a2);
    if ( v13 )
      *(_DWORD *)(v12 + 0x70) &= ~2u;
LABEL_24:
    JUMPOUT(0x9868C5);
  }
  if ( !Str2 )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, v5, 0);
    if ( v13 )
      *(_DWORD *)(v12 + 0x70) &= ~2u;
    JUMPOUT(0x9868C4);
  }
  MaxCounta = MaxCount - 1;
  v6 = *Str1;
  v7 = Str1 + 1;
  Str1a = Str1 + 1;
  if ( (*(_BYTE *)(v6 + v11 + 0x1D) & 4) != 0 )
  {
    if ( !MaxCounta )
    {
      if ( (*(_BYTE *)((unsigned __int8)*Str2 + v11 + 0x1D) & 4) != 0 )
        JUMPOUT(0x9868B6);
      return unknown_libname_56_::unknown_libname_57(Str1a, Str2, MaxCounta);
    }
    if ( *v7 )
      ++Str1a;
  }
  if ( (*(_BYTE *)((unsigned __int8)*Str2 + v11 + 0x1D) & 4) != 0 )
  {
    if ( MaxCounta )
      --MaxCounta;
  }
  return unknown_libname_56_::unknown_libname_57(Str1a, Str2, MaxCounta);
}
