int __thiscall sub_781B10(void *this, int a2, const char *ArgList, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // esi
  unsigned __int8 (__thiscall *v10)(void *, int, int *, int *, int *, int *); // edx
  int v12; // ebx
  int v13; // ebp
  int v14; // [esp+1Ch] [ebp-10h] BYREF
  int v15; // [esp+20h] [ebp-Ch] BYREF
  int v16; // [esp+24h] [ebp-8h] BYREF
  int v17; // [esp+28h] [ebp-4h] BYREF

  v9 = FormHeapAlloc(0x38u);
  if ( !v9 )
    return 0;
  NiD3DShaderProgram::NiD3DShaderProgram((NiD3DShaderProgram *)v9, dword_B428C4);
  *(_DWORD *)v9 = &NiD3DVertexShader::`vftable';
  *(_BYTE *)(v9 + 0x28) = 0;
  *(_DWORD *)(v9 + 0x2C) = 0;
  *(_DWORD *)(v9 + 0x30) = 0;
  *(_DWORD *)(v9 + 0x34) = 0;
  v10 = *(unsigned __int8 (__thiscall **)(void *, int, int *, int *, int *, int *))(*(_DWORD *)this + 0x24);
  v17 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  if ( !v10(this, a2, &v14, &v17, &v16, &v15) )
  {
    (**(void (__thiscall ***)(int, int))v9)(v9, 1);
    return 0;
  }
  v12 = a8;
  v13 = sub_783BF0(v14, (int)&a6, a7, v16, v15, a8);
  if ( v13 )
  {
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v9 + 8))(v9, ArgList);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 0x10))(v9, a2);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v9 + 0x1C))(v9, v17, v14);
    (*(void (__thiscall **)(int, void *))(*(_DWORD *)v9 + 0x24))(v9, this);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 0x44))(v9, v13);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 0x3C))(v9, a7);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 0x4C))(v9, a6);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 0x54))(v9, v12);
    return v9;
  }
  else
  {
    sub_738460(1, 0, "Failed CreateVertexShader call on %s\n", ArgList);
    (**(void (__thiscall ***)(int, int))v9)(v9, 1);
    return 0;
  }
}
