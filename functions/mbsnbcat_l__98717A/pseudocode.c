char *__usercall _mbsnbcat_l@<eax>(int a1@<edi>, char *Dest, char *Source, size_t Count)
{
  char *result; // eax
  char *v5; // edi
  char *v6; // esi
  char v7; // al
  bool v8; // zf
  char *v9; // edi
  char v10; // al
  int v11; // edi
  size_t v12; // [esp-Ch] [ebp-24h]
  struct localeinfo_struct v13; // [esp+4h] [ebp-14h] BYREF
  int v14; // [esp+Ch] [ebp-Ch]
  char v15; // [esp+10h] [ebp-8h]
  int v16; // [esp+14h] [ebp-4h]

  if ( !(_DWORD)Count ) /*0x987186*/
    return Dest; /*0x98718b*/
  if ( !Dest ) /*0x987196*/
  {
    *_errno() = 0x16; /*0x9871a2*/
    _invalid_parameter(0, a1, 0); /*0x9871a8*/
    return 0; /*0x9871b2*/
  }
  HIDWORD(v12) = a1; /*0x9871b7*/
  v5 = Source; /*0x9871b8*/
  if ( !Source ) /*0x9871bd*/
  {
    *_errno() = 0x16; /*0x9871c9*/
    _invalid_parameter(0, 0, (int)Dest); /*0x9871cf*/
    return 0; /*0x9871d9*/
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v13, (struct localeinfo_struct *)HIDWORD(Count)); /*0x9871e4*/
  if ( !v13.mbcinfo->ismbcodepage ) /*0x9871ec*/
  {
    LODWORD(v12) = Count; /*0x9871f1*/
    result = strncat(Dest, Source, v12); /*0x9871f6*/
    if ( v15 ) /*0x987201*/
      *(_DWORD *)(v14 + 0x70) &= ~2u; /*0x98720a*/
    return result; /*0x98720e*/
  }
  v16 = (int)Dest; /*0x987215*/
  v6 = &Dest[strlen(Dest)]; /*0x98721f*/
  if ( v6 != Dest && _mbsbtype_l((int)Source, Dest, v6 - Dest - 1, &v13) == 1 ) /*0x98723a*/
    --v6; /*0x98723c*/
  while ( 1 ) /*0x98723d*/
  {
    v7 = *v5; /*0x98723d*/
    LODWORD(Count) = Count - 1; /*0x987242*/
    v8 = (v13.mbcinfo->mbctype[(unsigned __int8)*v5 + 1] & 4) == 0; /*0x987248*/
    *v6 = *v5; /*0x98724d*/
    if ( v8 ) /*0x98724f*/
    {
      ++v6; /*0x98728c*/
      ++v5; /*0x98728d*/
      if ( !v7 ) /*0x987290*/
        goto LABEL_17; /*0x987290*/
      goto LABEL_21; /*0x987290*/
    }
    ++v6; /*0x987251*/
    v9 = v5 + 1; /*0x987252*/
    if ( !(_DWORD)Count ) /*0x987256*/
      break; /*0x987256*/
    v10 = *v9; /*0x987258*/
    LODWORD(Count) = Count - 1; /*0x98725a*/
    *v6++ = *v9; /*0x98725d*/
    v5 = v9 + 1; /*0x987260*/
    if ( !v10 ) /*0x987263*/
    {
      v6[0xFFFFFFFE] = 0; /*0x987265*/
      goto LABEL_17; /*0x987265*/
    }
LABEL_21:
    if ( !(_DWORD)Count ) /*0x987295*/
      goto LABEL_17; /*0x987295*/
  }
  v6[0xFFFFFFFF] = 0; /*0x987299*/
LABEL_17:
  v11 = v16; /*0x987268*/
  if ( v6 == (char *)v16 || _mbsbtype_l(v16, (char *)v16, (int)&v6[-v16 - 1], &v13) != 1 ) /*0x987285*/
    *v6 = 0; /*0x98729e*/
  else
    v6[0xFFFFFFFF] = 0; /*0x987287*/
  if ( v15 ) /*0x9872a3*/
    *(_DWORD *)(v14 + 0x70) &= ~2u; /*0x9872a8*/
  return (char *)v11; /*0x9872b0*/
}
