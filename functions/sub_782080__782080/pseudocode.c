char __thiscall sub_782080(_DWORD *this, char *ArgList, void **a3, size_t *a4, _DWORD *a5, _DWORD *a6)
{
  char *v7; // esi
  int v8; // ebp
  unsigned int v9; // edi
  unsigned int v10; // eax
  unsigned int v11; // edi
  const void *v12; // eax
  rsize_t v14; // [esp+10h] [ebp-124h]
  _DWORD *v15; // [esp+24h] [ebp-110h] BYREF
  _DWORD *v16; // [esp+28h] [ebp-10Ch] BYREF
  char v17[260]; // [esp+2Ch] [ebp-108h] BYREF

  *a3 = 0; /*0x7820b6*/
  *(_DWORD *)a4 = 0; /*0x7820c5*/
  *a5 = 0; /*0x7820cb*/
  *a6 = 0; /*0x7820d1*/
  if ( !ArgList || !*ArgList ) /*0x7820dd*/
  {
    sub_738460(1, 0, "Invalid shader file name\n"); /*0x782222*/
    return 0; /*0x782222*/
  }
  LODWORD(v14) = 0x104; /*0x7820e6*/
  if ( !sub_77EC60(ArgList, v17, v14) ) /*0x7820f1*/
  {
    sub_738460(1, 0, "Failed to find shader program file %s\n", ArgList); /*0x782107*/
    return 0; /*0x78222a*/
  }
  if ( D3DXAssembleShaderFromFileA_0((int)v17, 0, 0, (unk_B428BC | *(this + 1)) & 3, (int)&v16, (int)&v15) < 0 )
  {
    v7 = 0; /*0x782145*/
    if ( v15 )
    {
      v8 = (*(int (__stdcall **)(_DWORD *))(*v15 + 0xC))(v15); /*0x782153*/
      if ( v8 )
      {
        v9 = (*(int (__stdcall **)(_DWORD *))(*v15 + 0x10))(v15); /*0x782165*/
        v7 = (char *)FormHeapAlloc(v9); /*0x78216e*/
        sub_434900(v7, __PAIR64__(v8, v9)); /*0x782172*/
        sub_738460(1, 0, "Failed to assemble shader %s\nError: %s\n", ArgList, v7);
      }
      (*(void (__stdcall **)(_DWORD *))(*v15 + 8))(v15); /*0x782194*/
    }
    else
    {
      sub_738460(1, 0, "Failed to assemble shader %s\nError: NONE REPORTED\n", ArgList);
    }
    FormHeapFree((unsigned int)v7); /*0x7821ab*/
    if ( v16 ) /*0x7821b9*/
      (*(void (__stdcall **)(_DWORD *))(*v16 + 8))(v16); /*0x7821c1*/
    return 0; /*0x7821c3*/
  }
  v10 = (*(int (__stdcall **)(_DWORD *))(*v16 + 0x10))(v16); /*0x7821cf*/
  *(_DWORD *)a4 = v10; /*0x7821d2*/
  *a3 = (void *)FormHeapAlloc(v10); /*0x7821d9*/
  v11 = *(_DWORD *)a4; /*0x7821e4*/
  v12 = (const void *)(*(int (__stdcall **)(_DWORD *))(*v16 + 0xC))(v16); /*0x7821ea*/
  memcpy(*a3, v12, v11); /*0x7821f1*/
  (*(void (__stdcall **)(_DWORD *))(*v16 + 8))(v16); /*0x782203*/
  if ( v15 ) /*0x78220b*/
    (*(void (__stdcall **)(_DWORD *))(*v15 + 8))(v15); /*0x782213*/
  return 1; /*0x78222c*/
}
