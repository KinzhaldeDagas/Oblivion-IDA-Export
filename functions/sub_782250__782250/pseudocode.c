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
  int v16; // edi
  const void *v17; // eax
  size_t v18; // [esp+8h] [ebp-10h]

  v7 = a6;
  v8 = a7;
  v9 = a4;
  v10 = a5;
  *a4 = 0;
  *(_DWORD *)v10 = 0;
  *v7 = 0;
  *v8 = 0;
  if ( !a2 || !a3 )
  {
    sub_738460(1, 0, "Invalid shader buffer\n");
    return 0;
  }
  if ( D3DXAssembleShader_0(a2, a3, 0, 0, (dword_B428BC | *(this + 1)) & 3, &a4, &a5) < 0 )
  {
    v11 = 0;
    if ( a5 )
    {
      v12 = (*(int (__stdcall **)(size_t *))(*(_DWORD *)a5 + 0xC))(a5);
      if ( v12 )
      {
        v13 = (*(int (__stdcall **)(size_t *))(*(_DWORD *)a5 + 0x10))(a5);
        v11 = (char *)FormHeapAlloc(v13);
        sub_434900(v11, __PAIR64__(v12, v13));
        sub_738460(1, 0, "Failed to assemble shader from memory\nError: %s\n", v11);
      }
      (*(void (__stdcall **)(size_t *))(*(_DWORD *)a5 + 8))(a5);
    }
    else
    {
      sub_738460(1, 0, "Failed to assemble shader from memory\nError: NONE REPORTED\n");
    }
    FormHeapFree((unsigned int)v11);
    if ( a4 )
    {
      (*((void (__stdcall **)(void **))*a4 + 2))(a4);
      return 0;
    }
    return 0;
  }
  v15 = (*((int (__stdcall **)(void **))*a4 + 4))(a4);
  *(_DWORD *)v10 = v15;
  *v9 = (void *)FormHeapAlloc(v15);
  v16 = *(_DWORD *)v10;
  v17 = (const void *)(*((int (__stdcall **)(void **))*a4 + 3))(a4);
  LODWORD(v18) = v16;
  memcpy(*v9, v17, v18);
  (*((void (__stdcall **)(void **))*a4 + 2))(a4);
  if ( a5 )
    (*(void (__stdcall **)(size_t *))(*(_DWORD *)a5 + 8))(a5);
  return 1;
}
