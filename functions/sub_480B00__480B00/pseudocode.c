double __usercall sub_480B00@<st0>(int a1@<edi>, int a2, int a3, char *Str2)
{
  NiObject *v5; // eax
  int v6; // eax
  int v7; // edi
  unsigned int v8; // ebx
  unsigned int v9; // ebp
  int v10; // esi
  const char **i; // edi
  size_t v12; // [esp-14h] [ebp-14h]

  if ( !a2 ) /*0x480b06*/
    return 0.0; /*0x480b08*/
  HIDWORD(v12) = a1; /*0x480b11*/
  v5 = NiRTTI_Cast((BSStringT *)&stru_B3CAC0, *(NiObject **)(a2 + 0xC)); /*0x480b18*/
  if ( !v5 ) /*0x480b22*/
    return 0.0; /*0x480b22*/
  if ( !NiTMap_GetAt(&v5[0xB].__vftable, a3, &a2) ) /*0x480b31*/
    return 0.0; /*0x480b31*/
  if ( !a2 ) /*0x480b40*/
    return 0.0; /*0x480b40*/
  v6 = *(_DWORD *)(a2 + 0x20); /*0x480b42*/
  v7 = *(_DWORD *)(v6 + 0x10); /*0x480b45*/
  v8 = *(_DWORD *)(v6 + 0xC); /*0x480b48*/
  a2 = v7; /*0x480b4f*/
  v9 = strlen(Str2); /*0x480b53*/
  if ( !v9 ) /*0x480b63*/
    return 0.0; /*0x480b63*/
  v10 = 0; /*0x480b65*/
  if ( !v8 ) /*0x480b69*/
    return 0.0; /*0x480b93*/
  for ( i = (const char **)(v7 + 4); ; i += 2 ) /*0x480b6b*/
  {
    if ( *i ) /*0x480b70*/
    {
      LODWORD(v12) = v9; /*0x480b7a*/
      if ( !_strnicmp(*i, Str2, v12) ) /*0x480b7d*/
        break; /*0x480b7d*/
    }
    if ( ++v10 >= v8 ) /*0x480b91*/
      return 0.0; /*0x480b91*/
  }
  return *(float *)(a2 + 8 * v10); /*0x480b0a*/
}
