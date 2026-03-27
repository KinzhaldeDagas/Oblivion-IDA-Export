NiD3DShaderProgram *__thiscall sub_781ED0(void *this, int a2, int a3, const char *ArgList, int a5, int a6)
{
  NiD3DShaderProgram *v7; // esi
  unsigned __int8 (__thiscall *v8)(void *, int, int, int *, int *, int *, int *); // edx
  int v10; // ebx
  int v11; // [esp+20h] [ebp-10h] BYREF
  int v12; // [esp+24h] [ebp-Ch] BYREF
  int v13; // [esp+28h] [ebp-8h] BYREF
  int v14; // [esp+2Ch] [ebp-4h] BYREF

  v7 = (NiD3DShaderProgram *)FormHeapAlloc(0x2Cu);
  if ( !v7 )
    return 0;
  NiD3DShaderProgram::NiD3DShaderProgram(v7, dword_B428C4);
  *(_DWORD *)v7 = &NiD3DPixelShader::`vftable';
  *((_DWORD *)v7 + 0xA) = 0;
  v8 = *(unsigned __int8 (__thiscall **)(void *, int, int, int *, int *, int *, int *))(*(_DWORD *)this + 0x28);
  v12 = 0;
  v11 = 0;
  v13 = 0;
  v14 = 0;
  if ( !v8(this, a2, a3, &v11, &v12, &v14, &v13) )
  {
    (**(void (__thiscall ***)(NiD3DShaderProgram *, int))v7)(v7, 1);
    return 0;
  }
  v10 = sub_783C30(v11);
  if ( v10 )
  {
    (*(void (__thiscall **)(NiD3DShaderProgram *, const char *))(*(_DWORD *)v7 + 8))(v7, ArgList);
    (*(void (__thiscall **)(NiD3DShaderProgram *, _DWORD))(*(_DWORD *)v7 + 0x10))(v7, 0);
    (*(void (__thiscall **)(NiD3DShaderProgram *, int, int))(*(_DWORD *)v7 + 0x1C))(v7, v12, v11);
    (*(void (__thiscall **)(NiD3DShaderProgram *, void *))(*(_DWORD *)v7 + 0x24))(v7, this);
    (*(void (__thiscall **)(NiD3DShaderProgram *, int))(*(_DWORD *)v7 + 0x3C))(v7, v10);
    return v7;
  }
  else
  {
    sub_738460(1, 0, "Failed CreatePixelShader call on %s\n", ArgList);
    (**(void (__thiscall ***)(NiD3DShaderProgram *, int))v7)(v7, 1);
    return 0;
  }
}
