int __thiscall sub_781670(
        void *this,
        int a2,
        int a3,
        const char *ArgList,
        const char *a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  int v10; // esi
  int v12; // ebx
  int v13; // edi
  int v14; // [esp+2Ch] [ebp-Ch] BYREF
  int v15; // [esp+30h] [ebp-8h] BYREF
  int v16; // [esp+34h] [ebp-4h] BYREF

  v10 = FormHeapAlloc(0x44u); /*0x78167f*/
  if ( !v10 ) /*0x781688*/
    return 0; /*0x781688*/
  NiD3DShaderProgram::NiD3DShaderProgram((NiD3DShaderProgram *)v10, unk_B428C4); /*0x781696*/
  *(_BYTE *)(v10 + 0x28) = 0; /*0x78169f*/
  *(_DWORD *)(v10 + 0x2C) = 0; /*0x7816a3*/
  *(_DWORD *)(v10 + 0x30) = 0; /*0x7816a6*/
  *(_DWORD *)(v10 + 0x34) = 0; /*0x7816a9*/
  *(_DWORD *)v10 = &NiD3DHLSLVertexShader::`vftable'; /*0x7816ac*/
  *(_DWORD *)(v10 + 0x38) = 0; /*0x7816b2*/
  *(_DWORD *)(v10 + 0x3C) = 0; /*0x7816b5*/
  *(_DWORD *)(v10 + 0x40) = 0; /*0x7816b8*/
  v16 = 0; /*0x7816bb*/
  v14 = 0; /*0x7816bf*/
  v15 = 0; /*0x7816c3*/
  if ( !a5 ) /*0x7816c7*/
    a5 = "main"; /*0x7816c9*/
  if ( !a6 ) /*0x7816d5*/
    a6 = D3DXGetVertexShaderProfile_0(g_ShaderD3DDevice); /*0x7816e3*/
  if ( !sub_781350((int)this, (int)this, a2, a3, a5, a6, (void **)&v14, (size_t *)&v16, (int)&v15) ) /*0x78170c*/
  {
    (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x78171d*/
    return 0; /*0x781727*/
  }
  v12 = a9; /*0x781733*/
  v13 = NiDX9Renderer__CreateVertexShader(v14, (int)&a7, a8, 0, 0, a9); /*0x781748*/
  if ( v13 ) /*0x781751*/
  {
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v10 + 8))(v10, ArgList); /*0x781780*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v10 + 0x10))(v10, 0); /*0x78178b*/
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v10 + 0x1C))(v10, v16, v14); /*0x78179e*/
    (*(void (__thiscall **)(int, void *))(*(_DWORD *)v10 + 0x24))(v10, this); /*0x7817a8*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 0x44))(v10, v13); /*0x7817b2*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 0x3C))(v10, a8); /*0x7817c0*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 0x54))(v10, v12); /*0x7817ca*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v10 + 0x64))(v10, a5); /*0x7817d8*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 0x6C))(v10, a6); /*0x7817e6*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 0x74))(v10, v15); /*0x7817f4*/
    if ( v15 ) /*0x7817fc*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v15 + 8))(v15); /*0x781804*/
    return v10; /*0x781808*/
  }
  else
  {
    sub_738460(1, 0, "Failed CreateVertexShader call on %s\n", ArgList); /*0x78175b*/
    (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x78176b*/
    return 0; /*0x781770*/
  }
}
