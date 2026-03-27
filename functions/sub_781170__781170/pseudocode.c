char __thiscall sub_781170(_DWORD *this, char *ArgList, const char *a3, char *a4, void **a5, size_t *a6, int a7)
{
  char *v7; // esi
  unsigned int v8; // edi
  unsigned int v9; // eax
  int v10; // edi
  const void *v11; // eax
  rsize_t v13; // [esp+1Ch] [ebp-130h]
  size_t v14; // [esp+1Ch] [ebp-130h]
  _DWORD *v15; // [esp+30h] [ebp-11Ch] BYREF
  _DWORD *v16; // [esp+34h] [ebp-118h] BYREF
  char *Src; // [esp+38h] [ebp-114h]
  int v18; // [esp+3Ch] [ebp-110h]
  _DWORD *v19; // [esp+40h] [ebp-10Ch]
  char v20[260]; // [esp+44h] [ebp-108h] BYREF

  v19 = this;
  *a5 = 0;
  Src = a4;
  v18 = a7;
  *(_DWORD *)a6 = 0;
  if ( !ArgList || !*ArgList )
  {
    sub_738460(1, 0, "Invalid shader file name\n");
    return 0;
  }
  LODWORD(v13) = 0x104;
  if ( !sub_77EC60(ArgList, v20, v13) )
  {
    sub_738460(1, 0, "Failed to find shader program file %s\n", ArgList);
    return 0;
  }
  if ( D3DXCompileShaderFromFileA_0(v20, 0, 0, a3, Src, dword_B428BC | v19[1], &v16, &v15, v18) < 0 )
  {
    v7 = 0;
    if ( v15 )
    {
      Src = (char *)(*(int (__stdcall **)(_DWORD *))(*v15 + 0xC))(v15);
      if ( Src )
      {
        v8 = (*(int (__stdcall **)(_DWORD *))(*v15 + 0x10))(v15);
        v7 = (char *)FormHeapAlloc(v8);
        sub_434900(v7, __PAIR64__((unsigned int)Src, v8));
        sub_738460(1, 0, "Failed to compile shader %s in file %s\nError: %s\n", a3, ArgList, v7);
      }
      (*(void (__stdcall **)(_DWORD *))(*v15 + 8))(v15);
    }
    else
    {
      sub_738460(1, 0, "Failed to compile shader %s in file %s\nError: NONE REPORTED\n", a3, ArgList);
    }
    FormHeapFree((unsigned int)v7);
    if ( v16 )
      (*(void (__stdcall **)(_DWORD *))(*v16 + 8))(v16);
    return 0;
  }
  v9 = (*(int (__stdcall **)(_DWORD *))(*v16 + 0x10))(v16);
  *(_DWORD *)a6 = v9;
  *a5 = (void *)FormHeapAlloc(v9);
  v10 = *(_DWORD *)a6;
  v11 = (const void *)(*(int (__stdcall **)(_DWORD *))(*v16 + 0xC))(v16);
  LODWORD(v14) = v10;
  memcpy(*a5, v11, v14);
  (*(void (__stdcall **)(_DWORD *))(*v16 + 8))(v16);
  if ( v15 )
    (*(void (__stdcall **)(_DWORD *))(*v15 + 8))(v15);
  return 1;
}
