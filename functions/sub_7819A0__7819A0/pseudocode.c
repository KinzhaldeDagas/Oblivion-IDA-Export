NiD3DShaderProgram *__userpurge sub_7819A0@<eax>(
        int a1@<ecx>,
        int a2@<ebp>,
        int a3,
        int a4,
        const char *ArgList,
        const char *a6,
        int a7)
{
  NiD3DShaderProgram *v8; // esi
  int v10; // ebp
  int v11; // edi
  int v12; // [esp+28h] [ebp-Ch] BYREF
  int v13; // [esp+2Ch] [ebp-8h] BYREF
  int v14; // [esp+30h] [ebp-4h] BYREF

  v8 = (NiD3DShaderProgram *)FormHeapAlloc(0x38u); /*0x7819af*/
  if ( !v8 ) /*0x7819b8*/
    return 0; /*0x7819b8*/
  NiD3DShaderProgram::NiD3DShaderProgram(v8, unk_B428C4); /*0x7819c6*/
  *((_DWORD *)v8 + 0xA) = 0; /*0x7819cf*/
  *(_DWORD *)v8 = &NiD3DHLSLPixelShader::`vftable'; /*0x7819d2*/
  *((_DWORD *)v8 + 0xB) = 0; /*0x7819d8*/
  *((_DWORD *)v8 + 0xC) = 0; /*0x7819db*/
  *((_DWORD *)v8 + 0xD) = 0; /*0x7819de*/
  v14 = 0; /*0x7819e1*/
  v13 = 0; /*0x7819e5*/
  v12 = 0; /*0x7819e9*/
  if ( !a6 ) /*0x7819ed*/
    a6 = "main"; /*0x7819ef*/
  if ( !a7 ) /*0x7819fb*/
    a7 = D3DXGetPixelShaderProfile_0(g_ShaderD3DDevice); /*0x781a09*/
  if ( !sub_781350(a1, a2, a3, a4, a6, a7, (void **)&v13, (size_t *)&v14, (int)&v12) ) /*0x781a32*/
  {
    (**(void (__thiscall ***)(NiD3DShaderProgram *, int))v8)(v8, 1); /*0x781a43*/
    return 0; /*0x781a4d*/
  }
  v10 = v13; /*0x781a51*/
  v11 = NiDX9Renderer__CreatePixelShader(v13); /*0x781a5d*/
  if ( v11 ) /*0x781a66*/
  {
    (*(void (__thiscall **)(NiD3DShaderProgram *, const char *))(*(_DWORD *)v8 + 8))(v8, ArgList); /*0x781a95*/
    (*(void (__thiscall **)(NiD3DShaderProgram *, _DWORD))(*(_DWORD *)v8 + 0x10))(v8, 0); /*0x781aa0*/
    (*(void (__thiscall **)(NiD3DShaderProgram *, int, int))(*(_DWORD *)v8 + 0x1C))(v8, v14, v10); /*0x781aaf*/
    (*(void (__thiscall **)(NiD3DShaderProgram *, int))(*(_DWORD *)v8 + 0x24))(v8, a1); /*0x781ab9*/
    (*(void (__thiscall **)(NiD3DShaderProgram *, int))(*(_DWORD *)v8 + 0x3C))(v8, v11); /*0x781ac3*/
    (*(void (__thiscall **)(NiD3DShaderProgram *, const char *))(*(_DWORD *)v8 + 0x4C))(v8, a6); /*0x781ad1*/
    (*(void (__thiscall **)(NiD3DShaderProgram *, int))(*(_DWORD *)v8 + 0x54))(v8, a7); /*0x781adf*/
    (*(void (__thiscall **)(NiD3DShaderProgram *, int))(*(_DWORD *)v8 + 0x5C))(v8, v12); /*0x781aed*/
    if ( v12 ) /*0x781af5*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v12 + 8))(v12); /*0x781afd*/
    return v8; /*0x781b01*/
  }
  else
  {
    sub_738460(1, 0, "Failed CreatePixelShader call on %s\n", ArgList); /*0x781a70*/
    (**(void (__thiscall ***)(NiD3DShaderProgram *, int))v8)(v8, 1); /*0x781a80*/
    return 0; /*0x781a85*/
  }
}
