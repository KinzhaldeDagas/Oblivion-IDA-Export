// MoonSugarEffect decode: assembled/object vertex creator path. Builds 0x38 NiD3DVertexShader with base metadata and creator pointer before storing the D3D handle. Distinct from TES4 CreateVertexShader's simpler non-restoring wrapper.
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

  v9 = FormHeapAlloc(0x38u); /*0x781b1f*/
  if ( !v9 ) /*0x781b28*/
    return 0; /*0x781b28*/
  NiD3DShaderProgram::NiD3DShaderProgram((NiD3DShaderProgram *)v9, unk_B428C4); /*0x781b32*/
  *(_DWORD *)v9 = &NiD3DVertexShader::`vftable'; /*0x781b41*/
  *(_BYTE *)(v9 + 0x28) = 0; /*0x781b47*/
  *(_DWORD *)(v9 + 0x2C) = 0; /*0x781b4a*/
  *(_DWORD *)(v9 + 0x30) = 0; /*0x781b4d*/
  *(_DWORD *)(v9 + 0x34) = 0; /*0x781b50*/
  v10 = *(unsigned __int8 (__thiscall **)(void *, int, int *, int *, int *, int *))(*(_DWORD *)this + 0x24); /*0x781b55*/
  v17 = 0; /*0x781b69*/
  v14 = 0; /*0x781b6d*/
  v15 = 0; /*0x781b71*/
  v16 = 0; /*0x781b75*/
  if ( !v10(this, a2, &v14, &v17, &v16, &v15) ) /*0x781b79*/
  {
    (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x781b87*/
    return 0; /*0x781b91*/
  }
  v12 = a8; /*0x781b94*/
  v13 = NiDX9Renderer__CreateVertexShader(v14, (int)&a6, a7, v16, v15, a8); /*0x781bba*/
  if ( v13 ) /*0x781bbe*/
  {
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v9 + 8))(v9, ArgList); /*0x781bf7*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 0x10))(v9, a2); /*0x781c05*/
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v9 + 0x1C))(v9, v17, v14); /*0x781c18*/
    (*(void (__thiscall **)(int, void *))(*(_DWORD *)v9 + 0x24))(v9, this); /*0x781c22*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 0x44))(v9, v13); /*0x781c2c*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 0x3C))(v9, a7); /*0x781c3a*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 0x4C))(v9, a6); /*0x781c48*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 0x54))(v9, v12); /*0x781c52*/
    return v9; /*0x781c56*/
  }
  else
  {
    sub_738460(1, 0, "Failed CreateVertexShader call on %s\n", ArgList); /*0x781bcd*/
    (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x781bdd*/
    return 0; /*0x781be2*/
  }
}
