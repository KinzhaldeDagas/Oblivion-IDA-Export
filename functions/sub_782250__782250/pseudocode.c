char __thiscall sub_782250(_DWORD *this, int a2, int a3, void **a4, size_t *a5, _DWORD *a6, _DWORD *a7)
{
  _DWORD *v7; // eax
  _DWORD *v8; // edx
  void **v9; // esi
  size_t *v10; // edi
  char *v11; // esi
  int v12; // ebx
  unsigned int v13; // edi
  unsigned int v15; // eax
  unsigned int v16; // edi
  const void *v17; // eax

  v7 = a6; /*0x782250*/
  v8 = a7; /*0x782254*/
  v9 = a4; /*0x78225a*/
  v10 = a5; /*0x78225f*/
  *a4 = 0; /*0x782263*/
  *(_DWORD *)v10 = 0; /*0x782269*/
  *v7 = 0; /*0x78226f*/
  *v8 = 0; /*0x782275*/
  if ( !a2 || !a3 ) /*0x78228d*/
  {
    sub_738460(1, 0, "Invalid shader buffer\n"); /*0x7823a6*/
    return 0; /*0x7823b0*/
  }
  if ( D3DXAssembleShader_0(a2, a3, 0, 0, (unk_B428BC | *(this + 1)) & 3, (int)&a4, (int)&a5) < 0 )
  {
    v11 = 0; /*0x7822c1*/
    if ( a5 )
    {
      v12 = (*(int (__stdcall **)(size_t *))(*(_DWORD *)a5 + 0xC))(a5); /*0x7822cf*/
      if ( v12 )
      {
        v13 = (*(int (__stdcall **)(size_t *))(*(_DWORD *)a5 + 0x10))(a5); /*0x7822e1*/
        v11 = (char *)FormHeapAlloc(v13); /*0x7822ea*/
        sub_434900(v11, __PAIR64__(v12, v13)); /*0x7822ee*/
        sub_738460(1, 0, "Failed to assemble shader from memory\nError: %s\n", v11);
      }
      (*(void (__stdcall **)(size_t *))(*(_DWORD *)a5 + 8))(a5); /*0x78230f*/
    }
    else
    {
      sub_738460(1, 0, "Failed to assemble shader from memory\nError: NONE REPORTED\n");
    }
    FormHeapFree((unsigned int)v11); /*0x782325*/
    if ( a4 ) /*0x782333*/
    {
      (*((void (__stdcall **)(void **))*a4 + 2))(a4); /*0x78233b*/
      return 0; /*0x782342*/
    }
    return 0; /*0x782333*/
  }
  v15 = (*((int (__stdcall **)(void **))*a4 + 4))(a4); /*0x78234f*/
  *(_DWORD *)v10 = v15; /*0x782352*/
  *v9 = (void *)FormHeapAlloc(v15); /*0x782359*/
  v16 = *(_DWORD *)v10; /*0x782364*/
  v17 = (const void *)(*((int (__stdcall **)(void **))*a4 + 3))(a4); /*0x78236a*/
  memcpy(*v9, v17, v16); /*0x782371*/
  (*((void (__stdcall **)(void **))*a4 + 2))(a4); /*0x782383*/
  if ( a5 ) /*0x78238b*/
    (*(void (__stdcall **)(size_t *))(*(_DWORD *)a5 + 8))(a5); /*0x782393*/
  return 1; /*0x78233d*/
}
