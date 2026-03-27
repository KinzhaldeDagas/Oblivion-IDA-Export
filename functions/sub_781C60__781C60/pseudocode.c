int __thiscall sub_781C60(void *this, int a2, int a3, const char *ArgList, int a5, int a6, int a7, int a8, int a9)
{
  int v10; // esi
  unsigned __int8 (__thiscall *v11)(void *, int, int, int *, int *, int *, int *); // edx
  int v13; // ebx
  int v14; // ebp
  int v15; // [esp+20h] [ebp-10h] BYREF
  int v16; // [esp+24h] [ebp-Ch] BYREF
  int v17; // [esp+28h] [ebp-8h] BYREF
  int v18; // [esp+2Ch] [ebp-4h] BYREF

  v10 = FormHeapAlloc(0x38u);
  if ( !v10 )
    return 0;
  NiD3DShaderProgram::NiD3DShaderProgram((NiD3DShaderProgram *)v10, dword_B428C4);
  *(_DWORD *)v10 = &NiD3DVertexShader::`vftable';
  *(_BYTE *)(v10 + 0x28) = 0;
  *(_DWORD *)(v10 + 0x2C) = 0;
  *(_DWORD *)(v10 + 0x30) = 0;
  *(_DWORD *)(v10 + 0x34) = 0;
  v11 = *(unsigned __int8 (__thiscall **)(void *, int, int, int *, int *, int *, int *))(*(_DWORD *)this + 0x28);
  v18 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  if ( !v11(this, a2, a3, &v15, &v18, &v17, &v16) )
  {
    (**(void (__thiscall ***)(int, int))v10)(v10, 1);
    return 0;
  }
  v13 = a9;
  v14 = sub_783BF0(v15, (int)&a7, a8, v17, v16, a9);
  if ( v14 )
  {
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v10 + 8))(v10, ArgList);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v10 + 0x10))(v10, 0);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v10 + 0x1C))(v10, v18, v15);
    (*(void (__thiscall **)(int, void *))(*(_DWORD *)v10 + 0x24))(v10, this);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 0x44))(v10, v14);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 0x3C))(v10, a8);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 0x4C))(v10, a7);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 0x54))(v10, v13);
    return v10;
  }
  else
  {
    sub_738460(1, 0, "Failed CreateVertexShader call on %s\n", ArgList);
    (**(void (__thiscall ***)(int, int))v10)(v10, 1);
    return 0;
  }
}
