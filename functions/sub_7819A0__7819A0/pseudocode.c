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

  v8 = (NiD3DShaderProgram *)FormHeapAlloc(0x38u);
  if ( !v8 )
    return 0;
  NiD3DShaderProgram::NiD3DShaderProgram(v8, dword_B428C4);
  *((_DWORD *)v8 + 0xA) = 0;
  *(_DWORD *)v8 = &NiD3DHLSLPixelShader::`vftable';
  *((_DWORD *)v8 + 0xB) = 0;
  *((_DWORD *)v8 + 0xC) = 0;
  *((_DWORD *)v8 + 0xD) = 0;
  v14 = 0;
  v13 = 0;
  v12 = 0;
  if ( !a6 )
    a6 = "main";
  if ( !a7 )
    a7 = D3DXGetPixelShaderProfile_0(dword_B428C0);
  if ( !sub_781350(a1, a2, a3, a4, a6, a7, (void **)&v13, (size_t *)&v14, (int)&v12) )
  {
    (**(void (__thiscall ***)(NiD3DShaderProgram *, int))v8)(v8, 1);
    return 0;
  }
  v10 = v13;
  v11 = sub_783C30(v13);
  if ( v11 )
  {
    (*(void (__thiscall **)(NiD3DShaderProgram *, const char *))(*(_DWORD *)v8 + 8))(v8, ArgList);
    (*(void (__thiscall **)(NiD3DShaderProgram *, _DWORD))(*(_DWORD *)v8 + 0x10))(v8, 0);
    (*(void (__thiscall **)(NiD3DShaderProgram *, int, int))(*(_DWORD *)v8 + 0x1C))(v8, v14, v10);
    (*(void (__thiscall **)(NiD3DShaderProgram *, int))(*(_DWORD *)v8 + 0x24))(v8, a1);
    (*(void (__thiscall **)(NiD3DShaderProgram *, int))(*(_DWORD *)v8 + 0x3C))(v8, v11);
    (*(void (__thiscall **)(NiD3DShaderProgram *, const char *))(*(_DWORD *)v8 + 0x4C))(v8, a6);
    (*(void (__thiscall **)(NiD3DShaderProgram *, int))(*(_DWORD *)v8 + 0x54))(v8, a7);
    (*(void (__thiscall **)(NiD3DShaderProgram *, int))(*(_DWORD *)v8 + 0x5C))(v8, v12);
    if ( v12 )
      (*(void (__stdcall **)(int))(*(_DWORD *)v12 + 8))(v12);
    return v8;
  }
  else
  {
    sub_738460(1, 0, "Failed CreatePixelShader call on %s\n", ArgList);
    (**(void (__thiscall ***)(NiD3DShaderProgram *, int))v8)(v8, 1);
    return 0;
  }
}
