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

  v10 = FormHeapAlloc(0x44u);
  if ( !v10 )
    return 0;
  NiD3DShaderProgram::NiD3DShaderProgram((NiD3DShaderProgram *)v10, dword_B428C4);
  *(_BYTE *)(v10 + 0x28) = 0;
  *(_DWORD *)(v10 + 0x2C) = 0;
  *(_DWORD *)(v10 + 0x30) = 0;
  *(_DWORD *)(v10 + 0x34) = 0;
  *(_DWORD *)v10 = &NiD3DHLSLVertexShader::`vftable';
  *(_DWORD *)(v10 + 0x38) = 0;
  *(_DWORD *)(v10 + 0x3C) = 0;
  *(_DWORD *)(v10 + 0x40) = 0;
  v16 = 0;
  v14 = 0;
  v15 = 0;
  if ( !a5 )
    a5 = "main";
  if ( !a6 )
    a6 = D3DXGetVertexShaderProfile_0(dword_B428C0);
  if ( !sub_781350((int)this, (int)this, a2, a3, a5, a6, (void **)&v14, (size_t *)&v16, (int)&v15) )
  {
    (**(void (__thiscall ***)(int, int))v10)(v10, 1);
    return 0;
  }
  v12 = a9;
  v13 = sub_783BF0(v14, (int)&a7, a8, 0, 0, a9);
  if ( v13 )
  {
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v10 + 8))(v10, ArgList);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v10 + 0x10))(v10, 0);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v10 + 0x1C))(v10, v16, v14);
    (*(void (__thiscall **)(int, void *))(*(_DWORD *)v10 + 0x24))(v10, this);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 0x44))(v10, v13);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 0x3C))(v10, a8);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 0x54))(v10, v12);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v10 + 0x64))(v10, a5);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 0x6C))(v10, a6);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 0x74))(v10, v15);
    if ( v15 )
      (*(void (__stdcall **)(int))(*(_DWORD *)v15 + 8))(v15);
    return v10;
  }
  else
  {
    sub_738460(1, 0, "Failed CreateVertexShader call on %s\n", ArgList);
    (**(void (__thiscall ***)(int, int))v10)(v10, 1);
    return 0;
  }
}
