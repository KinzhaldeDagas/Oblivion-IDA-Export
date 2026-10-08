const struct _s_RTTIBaseClassDescriptor *__usercall FindVITargetTypeInstance@<eax>(
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
  bool v9; // al
  int v10; // eax
  const struct _s_RTTIBaseClassDescriptor *result; // eax
  int v12; // [esp+Ch] [ebp-24h]
  const struct _s_RTTIBaseClassDescriptor *v13; // [esp+10h] [ebp-20h]
  int v14; // [esp+14h] [ebp-1Ch]
  unsigned int v15; // [esp+18h] [ebp-18h]
  const struct _s_RTTIBaseClassDescriptor *v16; // [esp+1Ch] [ebp-14h]
  unsigned int v17; // [esp+20h] [ebp-10h]
  unsigned int v18; // [esp+24h] [ebp-Ch]
  unsigned int v19; // [esp+28h] [ebp-8h]
  char v20; // [esp+2Fh] [ebp-1h]

  v5 = *(_DWORD *)(a1 + 0x10); /*0x983198*/
  v18 = 0xFFFFFFFF; /*0x98319e*/
  v15 = 0xFFFFFFFF; /*0x9831a2*/
  v6 = *(_DWORD *)(v5 + 8); /*0x9831a7*/
  v7 = 0; /*0x9831ac*/
  v16 = 0; /*0x9831b0*/
  v14 = 0; /*0x9831b3*/
  v13 = 0; /*0x9831b6*/
  v12 = *(_DWORD *)(v5 + 0xC); /*0x9831b9*/
  v17 = 0; /*0x9831bc*/
  v20 = 1; /*0x9831bf*/
  v19 = 0; /*0x9831c3*/
  if ( !v6 ) /*0x9831c6*/
    return 0; /*0x9831c6*/
  do /*0x9832bf*/
  {
    v8 = *(_DWORD *)(v12 + 4 * v19); /*0x9831d2*/
    if ( v19 - v18 > v17 && (*(_DWORD *)v8 == a5 || !strcmp((const char *)(*(_DWORD *)v8 + 8), (const char *)(a5 + 8))) ) /*0x9831ee*/
    {
      if ( (*(_BYTE *)(v8 + 0x14) & 3) == 0 ) /*0x9831fd*/
        v13 = (const struct _s_RTTIBaseClassDescriptor *)v8; /*0x9831ff*/
      v18 = v19; /*0x983205*/
      v7 = v8; /*0x98320b*/
      v17 = *(_DWORD *)(v8 + 4); /*0x98320d*/
    }
    if ( (*(const struct _s_RTTICompleteObjectLocator **)v8 == a3 /*0x98323f*/
       || !strcmp((const char *)(*(_DWORD *)v8 + 8), (const char *)a3 + 8))
      && (struct TypeDescriptor *)PMDtoOffset((_DWORD *)(v8 + 8), a2) == a4 )
    {
      if ( v19 - v18 > v17 ) /*0x98324a*/
      {
        if ( (*(_BYTE *)(v8 + 0x14) & 5) == 0 ) /*0x9832b4*/
          v14 = v8; /*0x9832b6*/
      }
      else if ( v20 ) /*0x983250*/
      {
        if ( (*(_BYTE *)(v7 + 0x14) & 0x40) != 0 ) /*0x983256*/
        {
          if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v7 + 0x18) + 0xC) + 4 * (v19 - v18)) + 0x14) & 1) != 0 ) /*0x98327a*/
            v20 = 0; /*0x98327c*/
          v9 = (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v7 + 0x18) + 0xC) + 4 * (v19 - v18)) + 0x14) & 4) == 0; /*0x983285*/
        }
        else
        {
          if ( !v18 && (*(_BYTE *)(v8 + 0x14) & 1) != 0 ) /*0x983262*/
            v20 = 0; /*0x983264*/
          v9 = 1; /*0x983268*/
        }
        if ( v20 && v9 ) /*0x98328f*/
        {
          v10 = PMDtoOffset((_DWORD *)(v7 + 8), a2); /*0x983297*/
          if ( v16 && v15 != v10 ) /*0x9832a6*/
            return 0; /*0x9832a6*/
          v16 = (const struct _s_RTTIBaseClassDescriptor *)v7; /*0x9832a8*/
          v15 = v10; /*0x9832ab*/
        }
      }
    }
    ++v19; /*0x9832b9*/
  }
  while ( v19 < v6 ); /*0x9832bf*/
  if ( !v20 || (result = v16) == 0 ) /*0x9832d0*/
  {
    if ( !v14 ) /*0x9832d6*/
      return 0; /*0x9832d6*/
    result = v13; /*0x9832d8*/
    if ( !v13 ) /*0x9832dd*/
      return 0; /*0x9832df*/
  }
  return result; /*0x9832e1*/
}
