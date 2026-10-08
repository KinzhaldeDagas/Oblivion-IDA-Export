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

  v3 = *(_DWORD *)(a1 + 0x10); /*0x983000*/
  v4 = *(_DWORD *)(v3 + 8); /*0x983004*/
  v5 = 0; /*0x983008*/
  v6 = *(_DWORD *)(v3 + 0xC); /*0x98300d*/
  if ( v4 ) /*0x983010*/
  {
    while ( 1 ) /*0x983018*/
    {
      v10 = *(_DWORD *)(v6 + 4 * v5); /*0x983018*/
      if ( *(struct TypeDescriptor **)v10 == a3 || !strcmp((const char *)(*(_DWORD *)v10 + 8), a3->name) ) /*0x983029*/
        break; /*0x983029*/
      if ( ++v5 >= v4 ) /*0x983037*/
        return 0; /*0x983037*/
    }
    while ( ++v5 < v4 ) /*0x983065*/
    {
      v8 = *(int **)(v6 + 4 * v5); /*0x983040*/
      if ( (v8[5] & 4) != 0 ) /*0x983047*/
        break; /*0x983047*/
      v9 = *v8; /*0x983049*/
      if ( (const struct _s_RTTICompleteObjectLocator *)v9 == a2 /*0x98305a*/
        || !strcmp((const char *)(v9 + 8), (const char *)a2 + 8) )
      {
        return (const struct _s_RTTIBaseClassDescriptor *)v10; /*0x98306c*/
      }
    }
  }
  return 0; /*0x98303b*/
}
