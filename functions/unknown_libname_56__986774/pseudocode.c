unsigned int __usercall unknown_libname_56@<eax>(int a1@<edi>, int a2@<esi>, char *Str1, char *Str2, size_t MaxCount)
{
  int v5; // edi
  unsigned __int16 v6; // cx
  int v7; // eax
  unsigned __int16 v9; // dx
  char *v10; // esi
  unsigned __int16 v11; // bx
  size_t v12; // [esp-8h] [ebp-1Ch]
  _BYTE v13[4]; // [esp+4h] [ebp-10h] BYREF
  int v14; // [esp+8h] [ebp-Ch]
  int v15; // [esp+Ch] [ebp-8h]
  char v16; // [esp+10h] [ebp-4h]
  int savedregs; // [esp+14h] [ebp+0h] BYREF
  int MaxCounta; // [esp+24h] [ebp+10h]

  if ( !(_DWORD)MaxCount ) /*0x986780*/
    JUMPOUT(0x9868C6); /*0x9868c6*/
  HIDWORD(v12) = a1; /*0x986789*/
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v13, (struct localeinfo_struct *)HIDWORD(MaxCount)); /*0x986790*/
  v5 = v14; /*0x986795*/
  if ( !*(_DWORD *)(v14 + 8) ) /*0x986798*/
  {
    LODWORD(v12) = MaxCount; /*0x98679d*/
    strncmp(Str1, Str2, v12); /*0x9867a6*/
    if ( v16 ) /*0x9867b1*/
      *(_DWORD *)(v15 + 0x70) &= ~2u; /*0x9867ba*/
    goto LABEL_26; /*0x9867be*/
  }
  if ( !Str1 ) /*0x9867c6*/
  {
    *_errno() = 0x16; /*0x9867d2*/
    _invalid_parameter(0, v5, a2); /*0x9867d8*/
    if ( v16 ) /*0x9867e3*/
      *(_DWORD *)(v15 + 0x70) &= ~2u; /*0x9867e8*/
LABEL_26:
    JUMPOUT(0x9868C5); /*0x9868c5*/
  }
  if ( !Str2 ) /*0x9867fc*/
  {
    *_errno() = 0x16; /*0x986808*/
    _invalid_parameter(0, v5, 0); /*0x98680e*/
    if ( v16 ) /*0x986819*/
      *(_DWORD *)(v15 + 0x70) &= ~2u; /*0x98681e*/
    JUMPOUT(0x9868C4); /*0x9868c4*/
  }
  MaxCounta = MaxCount - 1; /*0x986833*/
  v6 = (unsigned __int8)*Str1; /*0x986836*/
  if ( (*(_BYTE *)((unsigned __int8)v6 + v14 + 0x1D) & 4) != 0 ) /*0x986845*/
  {
    if ( !MaxCounta ) /*0x98684a*/
    {
      v7 = (unsigned __int8)*Str2; /*0x98684c*/
      v6 = 0; /*0x98684f*/
      if ( (*(_BYTE *)(v7 + v14 + 0x1D) & 4) != 0 ) /*0x986856*/
        JUMPOUT(0x9868B6); /*0x9868b6*/
      return unknown_libname_56_::unknown_libname_57(v7, v6, 0, (int)&savedregs); /*0x986856*/
    }
    if ( Str1[1] ) /*0x98685d*/
    {
      HIBYTE(v9) = *Str1; /*0x98686c*/
      LOBYTE(v9) = Str1[1]; /*0x98686e*/
      v6 = v9; /*0x986870*/
    }
    else
    {
      v6 = 0; /*0x986863*/
    }
  }
  LOWORD(v7) = (unsigned __int8)*Str2; /*0x986877*/
  v10 = Str2 + 1; /*0x98687d*/
  if ( (*(_BYTE *)((unsigned __int8)v7 + v14 + 0x1D) & 4) == 0 ) /*0x986883*/
    return unknown_libname_56_::unknown_libname_57(v7, v6, 0, (int)&savedregs); /*0x98685b*/
  if ( !MaxCounta || !*v10 ) /*0x98688e*/
    return unknown_libname_56_::unknown_libname_57(0, v6, 0, (int)&savedregs); /*0x98688c*/
  HIBYTE(v11) = *Str2; /*0x986899*/
  LOBYTE(v11) = *v10; /*0x98689c*/
  return unknown_libname_56_::unknown_libname_57(v11, v6, 0, (int)&savedregs);
}
