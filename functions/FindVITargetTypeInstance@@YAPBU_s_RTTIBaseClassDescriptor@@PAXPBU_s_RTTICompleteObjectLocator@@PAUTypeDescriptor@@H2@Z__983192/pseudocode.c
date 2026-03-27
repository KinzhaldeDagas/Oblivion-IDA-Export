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

  v5 = *(_DWORD *)(a1 + 0x10);
  v18 = 0xFFFFFFFF;
  v15 = 0xFFFFFFFF;
  v6 = *(_DWORD *)(v5 + 8);
  v7 = 0;
  v16 = 0;
  v14 = 0;
  v13 = 0;
  v12 = *(_DWORD *)(v5 + 0xC);
  v17 = 0;
  v20 = 1;
  v19 = 0;
  if ( !v6 )
    return 0;
  do
  {
    v8 = *(_DWORD *)(v12 + 4 * v19);
    if ( v19 - v18 > v17 && (*(_DWORD *)v8 == a5 || !strcmp((const char *)(*(_DWORD *)v8 + 8), (const char *)(a5 + 8))) )
    {
      if ( (*(_BYTE *)(v8 + 0x14) & 3) == 0 )
        v13 = (const struct _s_RTTIBaseClassDescriptor *)v8;
      v18 = v19;
      v7 = v8;
      v17 = *(_DWORD *)(v8 + 4);
    }
    if ( (*(const struct _s_RTTICompleteObjectLocator **)v8 == a3
       || !strcmp((const char *)(*(_DWORD *)v8 + 8), (const char *)a3 + 8))
      && (struct TypeDescriptor *)PMDtoOffset((_DWORD *)(v8 + 8), a2) == a4 )
    {
      if ( v19 - v18 > v17 )
      {
        if ( (*(_BYTE *)(v8 + 0x14) & 5) == 0 )
          v14 = v8;
      }
      else if ( v20 )
      {
        if ( (*(_BYTE *)(v7 + 0x14) & 0x40) != 0 )
        {
          if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v7 + 0x18) + 0xC) + 4 * (v19 - v18)) + 0x14) & 1) != 0 )
            v20 = 0;
          v9 = (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v7 + 0x18) + 0xC) + 4 * (v19 - v18)) + 0x14) & 4) == 0;
        }
        else
        {
          if ( !v18 && (*(_BYTE *)(v8 + 0x14) & 1) != 0 )
            v20 = 0;
          v9 = 1;
        }
        if ( v20 && v9 )
        {
          v10 = PMDtoOffset((_DWORD *)(v7 + 8), a2);
          if ( v16 && v15 != v10 )
            return 0;
          v16 = (const struct _s_RTTIBaseClassDescriptor *)v7;
          v15 = v10;
        }
      }
    }
    ++v19;
  }
  while ( v19 < v6 );
  if ( !v20 || (result = v16) == 0 )
  {
    if ( !v14 )
      return 0;
    result = v13;
    if ( !v13 )
      return 0;
  }
  return result;
}
