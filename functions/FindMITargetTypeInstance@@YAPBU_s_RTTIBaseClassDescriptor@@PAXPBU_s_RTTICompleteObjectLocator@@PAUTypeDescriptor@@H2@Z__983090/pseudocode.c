const struct _s_RTTIBaseClassDescriptor *__usercall FindMITargetTypeInstance@<eax>(
        int a1@<eax>,
        char *a2,
        const struct _s_RTTICompleteObjectLocator *a3,
        struct TypeDescriptor *a4,
        int a5)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // edi
  int v8; // esi
  const struct _s_RTTIBaseClassDescriptor *result; // eax
  int v10; // [esp+Ch] [ebp-14h]
  int v11; // [esp+10h] [ebp-10h]
  unsigned int v12; // [esp+14h] [ebp-Ch]
  unsigned int v13; // [esp+18h] [ebp-8h]
  unsigned int v14; // [esp+1Ch] [ebp-4h]

  v5 = *(_DWORD *)(a1 + 0x10); /*0x983096*/
  v13 = 0xFFFFFFFF; /*0x983099*/
  v6 = *(_DWORD *)(v5 + 8); /*0x98309e*/
  v7 = *(_DWORD *)(v5 + 0xC); /*0x9830a7*/
  v11 = 0; /*0x9830aa*/
  v10 = 0; /*0x9830ad*/
  v12 = 0; /*0x9830b0*/
  v14 = 0; /*0x9830b3*/
  if ( !v6 ) /*0x9830b6*/
    return 0; /*0x98318b*/
  while ( 1 ) /*0x9830bf*/
  {
    v8 = *(_DWORD *)(v7 + 4 * v14); /*0x9830bf*/
    if ( v14 - v13 > v12 && (*(_DWORD *)v8 == a5 || !strcmp((const char *)(*(_DWORD *)v8 + 8), (const char *)(a5 + 8))) ) /*0x9830db*/
    {
      if ( v10 ) /*0x9830eb*/
      {
        if ( (*(_BYTE *)(v8 + 0x14) & 3) == 0 && (*(_BYTE *)(v10 + 0x14) & 1) == 0 ) /*0x983147*/
          return (const struct _s_RTTIBaseClassDescriptor *)v8; /*0x98314b*/
        return 0; /*0x983147*/
      }
      v13 = v14; /*0x9830f0*/
      v11 = v8; /*0x9830f6*/
      v12 = *(_DWORD *)(v8 + 4); /*0x9830f9*/
    }
    if ( (*(const struct _s_RTTICompleteObjectLocator **)v8 == a3 /*0x983127*/
       || !strcmp((const char *)(*(_DWORD *)v8 + 8), (const char *)a3 + 8))
      && (struct TypeDescriptor *)PMDtoOffset((_DWORD *)(v8 + 8), a2) == a4 )
    {
      break; /*0x983127*/
    }
LABEL_12:
    if ( ++v14 >= v6 ) /*0x983139*/
      return 0; /*0x983139*/
  }
  result = (const struct _s_RTTIBaseClassDescriptor *)v11; /*0x983129*/
  if ( !v11 ) /*0x98312e*/
  {
    v10 = v8; /*0x983130*/
    goto LABEL_12; /*0x983130*/
  }
  if ( v14 - v13 > v12 )
  {
    if ( (*(_BYTE *)(v11 + 0x14) & 3) != 0 ) /*0x983189*/
      return 0; /*0x983189*/
  }
  else
  {
    if ( (*(_BYTE *)(v11 + 0x14) & 0x40) != 0 )
      return (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v11 + 0x18) + 0xC) + 4 * (v14 - v13)) + 0x14) & 1) == 0
           ? (const struct _s_RTTIBaseClassDescriptor *)v11
           : 0;
    if ( v13 ) /*0x983162*/
      return result; /*0x983162*/
  }
  if ( (*(_BYTE *)(v8 + 0x14) & 1) != 0 ) /*0x983168*/
    return 0; /*0x983168*/
  return result; /*0x98318d*/
}
