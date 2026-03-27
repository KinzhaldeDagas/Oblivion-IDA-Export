NiD3DShaderProgram *__thiscall sub_781DC0(void *this, int a2, const char *ArgList, int a4, int a5)
{
  NiD3DShaderProgram *v6; // esi
  unsigned __int8 (__thiscall *v7)(void *, int, int *, int *, int *, int *); // edx
  int v9; // ebx
  int v10; // [esp+1Ch] [ebp-10h] BYREF
  int v11; // [esp+20h] [ebp-Ch] BYREF
  int v12; // [esp+24h] [ebp-8h] BYREF
  int v13; // [esp+28h] [ebp-4h] BYREF

  v6 = (NiD3DShaderProgram *)FormHeapAlloc(0x2Cu);
  if ( !v6 )
    return 0;
  NiD3DShaderProgram::NiD3DShaderProgram(v6, dword_B428C4);
  *(_DWORD *)v6 = &NiD3DPixelShader::`vftable';
  *((_DWORD *)v6 + 0xA) = 0;
  v7 = *(unsigned __int8 (__thiscall **)(void *, int, int *, int *, int *, int *))(*(_DWORD *)this + 0x24);
  v11 = 0;
  v10 = 0;
  v12 = 0;
  v13 = 0;
  if ( !v7(this, a2, &v10, &v11, &v13, &v12) )
  {
    (**(void (__thiscall ***)(NiD3DShaderProgram *, int))v6)(v6, 1);
    return 0;
  }
  v9 = sub_783C30(v10);
  if ( v9 )
  {
    (*(void (__thiscall **)(NiD3DShaderProgram *, const char *))(*(_DWORD *)v6 + 8))(v6, ArgList);
    (*(void (__thiscall **)(NiD3DShaderProgram *, int))(*(_DWORD *)v6 + 0x10))(v6, a2);
    (*(void (__thiscall **)(NiD3DShaderProgram *, int, int))(*(_DWORD *)v6 + 0x1C))(v6, v11, v10);
    (*(void (__thiscall **)(NiD3DShaderProgram *, void *))(*(_DWORD *)v6 + 0x24))(v6, this);
    (*(void (__thiscall **)(NiD3DShaderProgram *, int))(*(_DWORD *)v6 + 0x3C))(v6, v9);
    return v6;
  }
  else
  {
    sub_738460(1, 0, "Failed CreatePixelShader call on %s\n", ArgList);
    (**(void (__thiscall ***)(NiD3DShaderProgram *, int))v6)(v6, 1);
    return 0;
  }
}
