const struct _s_RTTIBaseClassDescriptor *__usercall FindSITargetTypeInstance@<eax>(
        int a1@<eax>,
        const struct _s_RTTICompleteObjectLocator *a2,
        struct TypeDescriptor *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // esi
  int v6; // edi
  int *v8; // eax
  int v9; // eax
  int v10; // [esp+Ch] [ebp-4h]

  v3 = *(_DWORD *)(a1 + 0x10);
  v4 = *(_DWORD *)(v3 + 8);
  v5 = 0;
  v6 = *(_DWORD *)(v3 + 0xC);
  if ( v4 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(v6 + 4 * v5);
      if ( *(struct TypeDescriptor **)v10 == a3 || !strcmp((const char *)(*(_DWORD *)v10 + 8), a3->name) )
        break;
      if ( ++v5 >= v4 )
        return 0;
    }
    while ( ++v5 < v4 )
    {
      v8 = *(int **)(v6 + 4 * v5);
      if ( (v8[5] & 4) != 0 )
        break;
      v9 = *v8;
      if ( (const struct _s_RTTICompleteObjectLocator *)v9 == a2
        || !strcmp((const char *)(v9 + 8), (const char *)a2 + 8) )
      {
        return (const struct _s_RTTIBaseClassDescriptor *)v10;
      }
    }
  }
  return 0;
}
