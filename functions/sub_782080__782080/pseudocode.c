char __thiscall sub_782080(_DWORD *this, char *ArgList, void **a3, size_t *a4, _DWORD *a5, _DWORD *a6)
{
  char *v7; // esi
  int v8; // ebp
  unsigned int v9; // edi
  unsigned int v10; // eax
  int v11; // edi
  const void *v12; // eax
  rsize_t v14; // [esp+10h] [ebp-124h]
  size_t v15; // [esp+10h] [ebp-124h]
  _DWORD *v16; // [esp+24h] [ebp-110h] BYREF
  _DWORD *v17; // [esp+28h] [ebp-10Ch] BYREF
  char v18[260]; // [esp+2Ch] [ebp-108h] BYREF

  *a3 = 0;
  *(_DWORD *)a4 = 0;
  *a5 = 0;
  *a6 = 0;
  if ( !ArgList || !*ArgList )
  {
    sub_738460(1, 0, "Invalid shader file name\n");
    return 0;
  }
  LODWORD(v14) = 0x104;
  if ( !sub_77EC60(ArgList, v18, v14) )
  {
    sub_738460(1, 0, "Failed to find shader program file %s\n", ArgList);
    return 0;
  }
  if ( D3DXAssembleShaderFromFileA_0(v18, 0, 0, (dword_B428BC | *(this + 1)) & 3, &v17, &v16) < 0 )
  {
    v7 = 0;
    if ( v16 )
    {
      v8 = (*(int (__stdcall **)(_DWORD *))(*v16 + 0xC))(v16);
      if ( v8 )
      {
        v9 = (*(int (__stdcall **)(_DWORD *))(*v16 + 0x10))(v16);
        v7 = (char *)FormHeapAlloc(v9);
        sub_434900(v7, __PAIR64__(v8, v9));
        sub_738460(1, 0, "Failed to assemble shader %s\nError: %s\n", ArgList, v7);
      }
      (*(void (__stdcall **)(_DWORD *))(*v16 + 8))(v16);
    }
    else
    {
      sub_738460(1, 0, "Failed to assemble shader %s\nError: NONE REPORTED\n", ArgList);
    }
    FormHeapFree((unsigned int)v7);
    if ( v17 )
      (*(void (__stdcall **)(_DWORD *))(*v17 + 8))(v17);
    return 0;
  }
  v10 = (*(int (__stdcall **)(_DWORD *))(*v17 + 0x10))(v17);
  *(_DWORD *)a4 = v10;
  *a3 = (void *)FormHeapAlloc(v10);
  v11 = *(_DWORD *)a4;
  v12 = (const void *)(*(int (__stdcall **)(_DWORD *))(*v17 + 0xC))(v17);
  LODWORD(v15) = v11;
  memcpy(*a3, v12, v15);
  (*(void (__stdcall **)(_DWORD *))(*v17 + 8))(v17);
  if ( v16 )
    (*(void (__stdcall **)(_DWORD *))(*v16 + 8))(v16);
  return 1;
}
