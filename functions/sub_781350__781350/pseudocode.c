char __userpurge sub_781350@<al>(
        int a1@<ecx>,
        int a2@<ebp>,
        int a3,
        int a4,
        const char *ArgList,
        int a6,
        void **a7,
        size_t *a8,
        int a9)
{
  void **v9; // esi
  size_t *v10; // edi
  char *v11; // esi
  int v12; // ebx
  unsigned int v13; // edi
  unsigned int v15; // eax
  unsigned int v16; // edi
  const void *v17; // eax

  v9 = a7; /*0x781357*/
  v10 = a8; /*0x78135c*/
  *a7 = 0; /*0x781360*/
  *(_DWORD *)v10 = 0; /*0x781366*/
  if ( a3 && a4 )
  {
    if ( D3DXCompileShader_0(a3, a4, 0, 0, (int)ArgList, a6, unk_B428BC | *(_DWORD *)(a1 + 4), (int)&a7, (int)&a8, a9) >= 0 )
    {
      v15 = (*((int (__stdcall **)(void **))*a7 + 4))(a7); /*0x78144b*/
      *(_DWORD *)v10 = v15; /*0x78144e*/
      *v9 = (void *)FormHeapAlloc(v15); /*0x781455*/
      v16 = *(_DWORD *)v10; /*0x781460*/
      v17 = (const void *)(*((int (__stdcall **)(void **))*a7 + 3))(a7); /*0x781466*/
      memcpy(*v9, v17, v16); /*0x78146d*/
      (*((void (__stdcall **)(void **))*a7 + 2))(a7); /*0x78147f*/
      if ( a8 ) /*0x781487*/
        (*(void (__stdcall **)(size_t *))(*(_DWORD *)a8 + 8))(a8); /*0x78148f*/
      return 1; /*0x781494*/
    }
    else
    {
      v11 = 0; /*0x7813ba*/
      if ( a8 )
      {
        v12 = (*(int (__stdcall **)(size_t *, int))(*(_DWORD *)a8 + 0xC))(a8, a2); /*0x7813c8*/
        if ( v12 )
        {
          v13 = (*(int (__stdcall **)(int))(*(_DWORD *)a9 + 0x10))(a9); /*0x7813da*/
          v11 = (char *)FormHeapAlloc(v13); /*0x7813e3*/
          sub_434900(v11, __PAIR64__(v12, v13)); /*0x7813e7*/
          sub_738460(1, 0, "Failed to assemble shader %s from memory\nError: %s\n", ArgList, v11);
        }
        (*(void (__cdecl **)(int))(*(_DWORD *)a9 + 8))(a9); /*0x781409*/
      }
      else
      {
        sub_738460(1, 0, "Failed to assemble shader %s from memory\nError: NONE REPORTED\n", ArgList);
      }
      FormHeapFree((unsigned int)v11); /*0x781420*/
      if ( a7 ) /*0x78142e*/
        (*((void (__stdcall **)(void **))*a7 + 2))(a7); /*0x781436*/
      return 0; /*0x78143b*/
    }
  }
  else
  {
    sub_738460(1, 0, "Invalid shader buffer\n"); /*0x7814a3*/
    return 0; /*0x7814ac*/
  }
}
