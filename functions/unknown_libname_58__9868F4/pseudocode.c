unsigned int __usercall unknown_libname_58@<eax>(int a1@<edi>, int a2@<esi>, char *Str1, char *Str2, size_t MaxCount)
{
  unsigned __int16 v5; // cx
  int v6; // ecx
  bool v7; // zf
  unsigned __int16 v8; // si
  unsigned __int16 v10; // dx
  bool v11; // cf
  char *v12; // edi
  int v13; // ecx
  int v14; // ecx
  unsigned __int16 v15; // dx
  size_t v16; // [esp-4h] [ebp-20h]
  _BYTE v17[4]; // [esp+4h] [ebp-18h] BYREF
  int v18; // [esp+8h] [ebp-14h]
  int v19; // [esp+Ch] [ebp-10h]
  char v20; // [esp+10h] [ebp-Ch]
  int v21; // [esp+14h] [ebp-8h]
  int v22; // [esp+18h] [ebp-4h]
  int savedregs; // [esp+1Ch] [ebp+0h] BYREF
  char *Str1a; // [esp+24h] [ebp+8h]
  int MaxCounta; // [esp+2Ch] [ebp+10h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v17, (struct localeinfo_struct *)HIDWORD(MaxCount)); /*0x986901*/
  if ( !(_DWORD)MaxCount ) /*0x98690b*/
  {
    if ( v20 ) /*0x986910*/
      *(_DWORD *)(v19 + 0x70) &= ~2u; /*0x986915*/
    goto LABEL_41; /*0x986915*/
  }
  if ( !*(_DWORD *)(v18 + 8) ) /*0x986923*/
  {
    LODWORD(v16) = MaxCount; /*0x986928*/
    _strnicmp(Str1, Str2, v16); /*0x986931*/
    if ( v20 ) /*0x98693c*/
      *(_DWORD *)(v19 + 0x70) &= ~2u; /*0x986945*/
    goto LABEL_41; /*0x986949*/
  }
  if ( !Str1 ) /*0x986951*/
  {
    *_errno() = 0x16; /*0x98695d*/
    _invalid_parameter(0, a1, a2); /*0x986963*/
    if ( v20 ) /*0x98696e*/
      *(_DWORD *)(v19 + 0x70) &= ~2u; /*0x986973*/
LABEL_41:
    JUMPOUT(0x986ADB); /*0x986adb*/
  }
  if ( !Str2 ) /*0x986987*/
  {
    *_errno() = 0x16; /*0x986993*/
    _invalid_parameter(0, 0, a2); /*0x986999*/
    if ( v20 ) /*0x9869a4*/
      *(_DWORD *)(v19 + 0x70) &= ~2u; /*0x9869a9*/
    JUMPOUT(0x986ADA); /*0x986ada*/
  }
  v5 = (unsigned __int8)*Str1; /*0x9869bb*/
  MaxCounta = MaxCount - 1; /*0x9869bf*/
  Str1a = Str1 + 1; /*0x9869c2*/
  v21 = v5; /*0x9869c8*/
  if ( (*(_BYTE *)((unsigned __int8)v5 + v18 + 0x1D) & 4) == 0 ) /*0x9869d3*/
  {
    v13 = (unsigned __int16)v21 + v18; /*0x986a6d*/
    if ( (*(_BYTE *)(v13 + 0x1D) & 0x10) != 0 ) /*0x986a74*/
      v14 = *(unsigned __int8 *)(v13 + 0x11D); /*0x986a7e*/
    else
      v14 = (unsigned __int16)v21; /*0x986a8a*/
    v21 = v14; /*0x986a81*/
    goto LABEL_35; /*0x986a81*/
  }
  if ( !MaxCounta ) /*0x9869dc*/
  {
    v6 = (unsigned __int8)*Str2; /*0x9869de*/
    v7 = (*(_BYTE *)(v6 + v18 + 0x1D) & 4) == 0; /*0x9869e1*/
    v21 = 0; /*0x9869e6*/
    if ( !v7 ) /*0x9869e9*/
      JUMPOUT(0x986ACB); /*0x986acb*/
    v8 = 0; /*0x9869ef*/
    v22 = (unsigned __int16)v6; /*0x9869f5*/
    return unknown_libname_58_::unknown_libname_59(v22, 0, (int)&savedregs, v8); /*0x9869f5*/
  }
  if ( !*Str1a ) /*0x986a04*/
  {
    v21 = 0; /*0x986a0a*/
LABEL_35:
    v8 = v21; /*0x986a84*/
    goto LABEL_26; /*0x986a88*/
  }
  HIBYTE(v10) = v21; /*0x986a11*/
  LOBYTE(v10) = *Str1a; /*0x986a17*/
  v8 = v10; /*0x986a1c*/
  v11 = v10 < *(_WORD *)(v18 + 0x10); /*0x986a1f*/
  v21 = v10; /*0x986a23*/
  if ( v11 || v10 > *(_WORD *)(v18 + 0x12) ) /*0x986a2c*/
  {
    if ( v10 >= *(_WORD *)(v18 + 0x16) && v10 <= *(_WORD *)(v18 + 0x18) ) /*0x986a61*/
      v8 = *(_WORD *)(v18 + 0x1A) + v10; /*0x986a63*/
  }
  else
  {
    v8 = *(_WORD *)(v18 + 0x14) + v10; /*0x986a2e*/
  }
LABEL_26:
  v22 = (unsigned __int8)*Str2; /*0x986a34*/
  v12 = Str2 + 1; /*0x986a41*/
  if ( (*(_BYTE *)((unsigned __int8)v22 + v18 + 0x1D) & 4) == 0 ) /*0x986a47*/
    JUMPOUT(0x986AF0); /*0x986af0*/
  if ( !MaxCounta || !*v12 ) /*0x986a8f*/
  {
    v22 = 0; /*0x986a52*/
    return unknown_libname_58_::unknown_libname_59(v22, 0, (int)&savedregs, v8); /*0x9869fc*/
  }
  HIBYTE(v15) = v22; /*0x986a9a*/
  LOBYTE(v15) = *v12; /*0x986a9e*/
  v11 = v15 < *(_WORD *)(v18 + 0x10); /*0x986aa3*/
  v22 = v15; /*0x986aa7*/
  if ( v11 || v15 > *(_WORD *)(v18 + 0x12) ) /*0x986ab0*/
    JUMPOUT(0x986ADE); /*0x986ade*/
  return unknown_libname_58_::unknown_libname_59(*(_WORD *)(v18 + 0x14) + v15, 0, (int)&savedregs, v8);
}
