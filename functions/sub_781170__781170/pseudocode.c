// Oblivion-authoritative HLSL compiler path: resolves the shader file, calls D3DXCompileShaderFromFileA with entry/profile and creator flags, returns a heap copy of bytecode plus the optional constant table, and reports compiler diagnostics.
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

  v19 = this; /*0x7811ad*/
  *a5 = 0; /*0x7811b8*/
  Src = a4; /*0x7811be*/
  v18 = a7; /*0x7811c2*/
  *(_DWORD *)a6 = 0; /*0x7811c6*/
  if ( !ArgList || !*ArgList ) /*0x7811d2*/
  {
    sub_738460(1, 0, "Invalid shader file name\n"); /*0x78132b*/
    return 0; /*0x78132b*/
  }
  LODWORD(v13) = 0x104; /*0x7811db*/
  if ( !sub_77EC60(ArgList, v20, v13) ) /*0x7811e6*/
  {
    sub_738460(1, 0, "Failed to find shader program file %s\n", ArgList); /*0x7811fc*/
    return 0; /*0x781333*/
  }
  if ( D3DXCompileShaderFromFileA_0((int)v20, 0, 0, (int)a3, (int)Src, unk_B428BC | v19[1], (int)&v16, (int)&v15, v18) < 0 )
  {
    v7 = 0; /*0x781246*/
    if ( v15 )
    {
      Src = (char *)(*(int (__stdcall **)(_DWORD *))(*v15 + 0xC))(v15); /*0x781256*/
      if ( Src )
      {
        v8 = (*(int (__stdcall **)(_DWORD *))(*v15 + 0x10))(v15); /*0x781268*/
        v7 = (char *)FormHeapAlloc(v8); /*0x781270*/
        sub_434900(v7, __PAIR64__((unsigned int)Src, v8)); /*0x781279*/
        sub_738460(1, 0, "Failed to compile shader %s in file %s\nError: %s\n", a3, ArgList, v7);
      }
      (*(void (__stdcall **)(_DWORD *))(*v15 + 8))(v15); /*0x78129c*/
    }
    else
    {
      sub_738460(1, 0, "Failed to compile shader %s in file %s\nError: NONE REPORTED\n", a3, ArgList);
    }
    FormHeapFree((unsigned int)v7); /*0x7812b4*/
    if ( v16 ) /*0x7812c2*/
      (*(void (__stdcall **)(_DWORD *))(*v16 + 8))(v16); /*0x7812ca*/
    return 0; /*0x7812cc*/
  }
  v9 = (*(int (__stdcall **)(_DWORD *))(*v16 + 0x10))(v16); /*0x7812d8*/
  *(_DWORD *)a6 = v9; /*0x7812db*/
  *a5 = (void *)FormHeapAlloc(v9); /*0x7812e2*/
  v10 = *(_DWORD *)a6; /*0x7812ed*/
  v11 = (const void *)(*(int (__stdcall **)(_DWORD *))(*v16 + 0xC))(v16); /*0x7812f3*/
  LODWORD(v14) = v10; /*0x7812f5*/
  memcpy(*a5, v11, v14); /*0x7812fa*/
  (*(void (__stdcall **)(_DWORD *))(*v16 + 8))(v16); /*0x78130c*/
  if ( v15 ) /*0x781314*/
    (*(void (__stdcall **)(_DWORD *))(*v15 + 8))(v15); /*0x78131c*/
  return 1; /*0x781335*/
}
