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
  int v16; // edi
  const void *v17; // eax
  size_t v18; // [esp+8h] [ebp-14h]

  v9 = a7;
  v10 = a8;
  *a7 = 0;
  *(_DWORD *)v10 = 0;
  if ( a3 && a4 )
  {
    HIDWORD(v18) = a2;
    if ( D3DXCompileShader_0(a3, a4, 0, 0, (int)ArgList, a6, dword_B428BC | *(_DWORD *)(a1 + 4), (int)&a7, (int)&a8, a9) >= 0 )
    {
      v15 = (*((int (__stdcall **)(void **))*a7 + 4))(a7);
      *(_DWORD *)v10 = v15;
      *v9 = (void *)FormHeapAlloc(v15);
      v16 = *(_DWORD *)v10;
      v17 = (const void *)(*((int (__stdcall **)(void **))*a7 + 3))(a7);
      LODWORD(v18) = v16;
      memcpy(*v9, v17, v18);
      (*((void (__stdcall **)(void **))*a7 + 2))(a7);
      if ( a8 )
        (*(void (__stdcall **)(size_t *))(*(_DWORD *)a8 + 8))(a8);
      return 1;
    }
    else
    {
      v11 = 0;
      if ( a8 )
      {
        v12 = (*(int (__stdcall **)(size_t *, int))(*(_DWORD *)a8 + 0xC))(a8, a2);
        if ( v12 )
        {
          v13 = (*(int (__stdcall **)(int))(*(_DWORD *)a9 + 0x10))(a9);
          v11 = (char *)FormHeapAlloc(v13);
          sub_434900(v11, __PAIR64__(v12, v13));
          sub_738460(1, 0, "Failed to assemble shader %s from memory\nError: %s\n", ArgList, v11);
        }
        (*(void (__cdecl **)(int))(*(_DWORD *)a9 + 8))(a9);
      }
      else
      {
        sub_738460(1, 0, "Failed to assemble shader %s from memory\nError: NONE REPORTED\n", ArgList);
      }
      FormHeapFree((unsigned int)v11);
      if ( a7 )
        (*((void (__stdcall **)(void **))*a7 + 2))(a7);
      return 0;
    }
  }
  else
  {
    sub_738460(1, 0, "Invalid shader buffer\n");
    return 0;
  }
}
