NiD3DShaderProgram *__thiscall sub_781820(_DWORD *this, char *a2, const char *ArgList, const char *a4, char *a5)
{
  NiD3DShaderProgram *v6; // esi
  char *v7; // ebp
  int v9; // edi
  int v10; // [esp+24h] [ebp-Ch] BYREF
  int v11; // [esp+28h] [ebp-8h] BYREF
  int v12; // [esp+2Ch] [ebp-4h] BYREF

  v6 = (NiD3DShaderProgram *)FormHeapAlloc(0x38u);
  if ( !v6 )
    return 0;
  NiD3DShaderProgram::NiD3DShaderProgram(v6, dword_B428C4);
  *((_DWORD *)v6 + 0xA) = 0;
  *(_DWORD *)v6 = &NiD3DHLSLPixelShader::`vftable';
  *((_DWORD *)v6 + 0xB) = 0;
  *((_DWORD *)v6 + 0xC) = 0;
  *((_DWORD *)v6 + 0xD) = 0;
  v12 = 0;
  v10 = 0;
  v11 = 0;
  if ( !a4 )
    a4 = "main";
  v7 = a5;
  if ( !a5 )
    v7 = (char *)D3DXGetPixelShaderProfile_0(dword_B428C0);
  if ( sub_781170(this, a2, a4, v7, (void **)&v10, (size_t *)&v12, (int)&v11) )
  {
    v9 = sub_783C30(v10);
    if ( v9 )
    {
      (*(void (__thiscall **)(NiD3DShaderProgram *, const char *))(*(_DWORD *)v6 + 8))(v6, ArgList);
      (*(void (__thiscall **)(NiD3DShaderProgram *, char *))(*(_DWORD *)v6 + 0x10))(v6, a2);
      (*(void (__thiscall **)(NiD3DShaderProgram *, int, int))(*(_DWORD *)v6 + 0x1C))(v6, v12, v10);
      (*(void (__thiscall **)(NiD3DShaderProgram *, _DWORD *))(*(_DWORD *)v6 + 0x24))(v6, this);
      (*(void (__thiscall **)(NiD3DShaderProgram *, int))(*(_DWORD *)v6 + 0x3C))(v6, v9);
      (*(void (__thiscall **)(NiD3DShaderProgram *, const char *))(*(_DWORD *)v6 + 0x4C))(v6, a4);
      (*(void (__thiscall **)(NiD3DShaderProgram *, char *))(*(_DWORD *)v6 + 0x54))(v6, v7);
      (*(void (__thiscall **)(NiD3DShaderProgram *, int))(*(_DWORD *)v6 + 0x5C))(v6, v11);
      if ( v11 )
        (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      return v6;
    }
    else
    {
      sub_738460(1, 0, "Failed CreatePixelShader call on %s\n", ArgList);
      (**(void (__thiscall ***)(NiD3DShaderProgram *, int))v6)(v6, 1);
      return 0;
    }
  }
  else
  {
    (**(void (__thiscall ***)(NiD3DShaderProgram *, int))v6)(v6, 1);
    return 0;
  }
}
