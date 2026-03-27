char *__cdecl _mbsnbcpy_l(char *Dest, char *Source, size_t Count)
{
  char *v3; // esi
  char *result; // eax
  char *v5; // ecx
  int v6; // edx
  char v7; // al
  bool v8; // zf
  char *v9; // esi
  char *v10; // ecx
  char v11; // al
  size_t v12; // [esp-4h] [ebp-1Ch]
  _BYTE v13[4]; // [esp+8h] [ebp-10h] BYREF
  int v14; // [esp+Ch] [ebp-Ch]
  int v15; // [esp+10h] [ebp-8h]
  char v16; // [esp+14h] [ebp-4h]

  v3 = Dest;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v13, (struct localeinfo_struct *)HIDWORD(Count));
  if ( !Dest && (_DWORD)Count || (v5 = Source) == 0 && (_DWORD)Count )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, 0, 0, 0, 0);
    if ( v16 )
      *(_DWORD *)(v15 + 0x70) &= ~2u;
    return 0;
  }
  v6 = v14;
  if ( !*(_DWORD *)(v14 + 8) )
  {
    LODWORD(v12) = Count;
    result = strncpy(Dest, Source, v12);
    if ( v16 )
      *(_DWORD *)(v15 + 0x70) &= ~2u;
    return result;
  }
  if ( !(_DWORD)Count )
    goto LABEL_18;
  while ( 1 )
  {
    v7 = *v5;
    LODWORD(Count) = Count - 1;
    v8 = (*(_BYTE *)((unsigned __int8)*v5 + v6 + 0x1D) & 4) == 0;
    *v3 = *v5;
    if ( !v8 )
      break;
    ++v3;
    ++v5;
    if ( !v7 )
      goto LABEL_16;
LABEL_23:
    if ( !(_DWORD)Count )
      goto LABEL_18;
  }
  v9 = v3 + 1;
  v10 = v5 + 1;
  if ( !(_DWORD)Count )
  {
    v9[0xFFFFFFFF] = 0;
    goto LABEL_18;
  }
  v11 = *v10;
  LODWORD(Count) = Count - 1;
  *v9 = *v10;
  v3 = v9 + 1;
  v5 = v10 + 1;
  if ( v11 )
    goto LABEL_23;
  v3[0xFFFFFFFE] = 0;
LABEL_16:
  if ( (_DWORD)Count )
    _memset((int)v3, 0, Count);
LABEL_18:
  if ( v16 )
    *(_DWORD *)(v15 + 0x70) &= ~2u;
  return Dest;
}
