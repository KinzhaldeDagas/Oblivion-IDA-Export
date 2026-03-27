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

  if ( !a2 )
    return 0.0;
  HIDWORD(v12) = a1;
  v5 = NiRTTI_Cast(&stru_B3CAC0, *(NiObject **)(a2 + 0xC));
  if ( !v5 )
    return 0.0;
  if ( !NiTMap_GetAt(&v5[0xB].__vftable, a3, &a2) )
    return 0.0;
  if ( !a2 )
    return 0.0;
  v6 = *(_DWORD *)(a2 + 0x20);
  v7 = *(_DWORD *)(v6 + 0x10);
  v8 = *(_DWORD *)(v6 + 0xC);
  a2 = v7;
  v9 = strlen(Str2);
  if ( !v9 )
    return 0.0;
  v10 = 0;
  if ( !v8 )
    return 0.0;
  for ( i = (const char **)(v7 + 4); ; i += 2 )
  {
    if ( *i )
    {
      LODWORD(v12) = v9;
      if ( !_strnicmp(*i, Str2, v12) )
        break;
    }
    if ( ++v10 >= v8 )
      return 0.0;
  }
  return *(float *)(a2 + 8 * v10);
}
