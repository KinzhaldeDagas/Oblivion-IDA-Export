int __thiscall sub_7814C0(
        _DWORD *this,
        char *a2,
        const char *ArgList,
        const char *a4,
        char *a5,
        int a6,
        int a7,
        int a8)
{
  int v9; // esi
  int v11; // ebx
  int v12; // edi
  int v13; // [esp+2Ch] [ebp-Ch] BYREF
  int v14; // [esp+30h] [ebp-8h] BYREF
  int v15; // [esp+34h] [ebp-4h] BYREF

  v9 = FormHeapAlloc(0x44u);
  if ( !v9 )
    return 0;
  NiD3DShaderProgram::NiD3DShaderProgram((NiD3DShaderProgram *)v9, dword_B428C4);
  *(_BYTE *)(v9 + 0x28) = 0;
  *(_DWORD *)(v9 + 0x2C) = 0;
  *(_DWORD *)(v9 + 0x30) = 0;
  *(_DWORD *)(v9 + 0x34) = 0;
  *(_DWORD *)v9 = &NiD3DHLSLVertexShader::`vftable';
  *(_DWORD *)(v9 + 0x38) = 0;
  *(_DWORD *)(v9 + 0x3C) = 0;
  *(_DWORD *)(v9 + 0x40) = 0;
  v15 = 0;
  v13 = 0;
  v14 = 0;
  if ( !a4 )
    a4 = "main";
  if ( !a5 )
    a5 = (char *)D3DXGetVertexShaderProfile_0(dword_B428C0);
  if ( !sub_781170(this, a2, a4, a5, (void **)&v13, (size_t *)&v15, (int)&v14) )
  {
    (**(void (__thiscall ***)(int, int))v9)(v9, 1);
    return 0;
  }
  v11 = a8;
  v12 = sub_783BF0(v13, (int)&a6, a7, 0, 0, a8);
  if ( v12 )
  {
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v9 + 8))(v9, ArgList);
    (*(void (__thiscall **)(int, char *))(*(_DWORD *)v9 + 0x10))(v9, a2);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v9 + 0x1C))(v9, v15, v13);
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v9 + 0x24))(v9, this);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 0x44))(v9, v12);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 0x3C))(v9, a7);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 0x54))(v9, v11);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v9 + 0x64))(v9, a4);
    (*(void (__thiscall **)(int, char *))(*(_DWORD *)v9 + 0x6C))(v9, a5);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 0x74))(v9, v14);
    if ( v14 )
      (*(void (__stdcall **)(int))(*(_DWORD *)v14 + 8))(v14);
    return v9;
  }
  else
  {
    sub_738460(1, 0, "Failed CreateVertexShader call on %s\n", ArgList);
    (**(void (__thiscall ***)(int, int))v9)(v9, 1);
    return 0;
  }
}
