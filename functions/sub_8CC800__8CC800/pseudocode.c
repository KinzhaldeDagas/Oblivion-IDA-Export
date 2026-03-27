int __cdecl sub_8CC800(int a1, int a2)
{
  int result; // eax
  int v3; // eax
  _DWORD *v4; // ecx
  int v5; // esi
  unsigned int v6; // edx
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int (__thiscall ***v11)(_DWORD, int *, int, int); // ecx
  _DWORD *v12; // ecx
  bool v13; // zf
  int v14; // eax
  float v15; // [esp+4h] [ebp-58h]
  _DWORD *v16; // [esp+24h] [ebp-38h]
  int v17; // [esp+28h] [ebp-34h]
  _DWORD *v18; // [esp+2Ch] [ebp-30h] BYREF
  int v19; // [esp+30h] [ebp-2Ch]
  signed int v20; // [esp+34h] [ebp-28h]
  int v21; // [esp+38h] [ebp-24h]
  _BYTE v22[32]; // [esp+3Ch] [ebp-20h] BYREF

  result = *(_DWORD *)(a2 + 0x14);
  if ( result )
  {
    v3 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
    v4 = *(_DWORD **)(v3 + 0x19C);
    v5 = *(_DWORD *)(a1 + 0x2A4);
    v18 = 0;
    v19 = 0;
    v20 = 0x80000000;
    v17 = v3;
    if ( !v4 )
      v4 = (_DWORD *)dword_BA7D9C;
    v6 = (8 * v5 + 0x10) & 0xFFFFFFF0;
    v16 = (_DWORD *)v4[8];
    if ( (unsigned int)v16 + v6 > v4[0xB] )
    {
      v7 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v4 + 0xC))(v4, (8 * v5 + 0x10) & 0xFFFFFFF0);
    }
    else
    {
      v4[8] = (char *)v16 + v6;
      v7 = v16;
    }
    v8 = *(_DWORD *)(a2 + 0x14);
    v18 = v7;
    v21 = (int)v7;
    v9 = *(_DWORD *)(a1 + 0x74);
    v20 = v5 | 0x80000000;
    v15 = *(float *)(v9 + 8) * flt_A3D65C;
    (*(void (__stdcall **)(_DWORD, _DWORD, _BYTE *))(*(_DWORD *)v8 + 0xC))(*(_DWORD *)(a2 + 0x1C), LODWORD(v15), v22);
    (*(void (__thiscall **)(_DWORD, int, _BYTE *, _DWORD **))(**(_DWORD **)(a1 + 0x64) + 8))(
      *(_DWORD *)(a1 + 0x64),
      a2 + 0x28,
      v22,
      &v18);
    if ( v19 > 0 )
    {
      v10 = *(_DWORD *)(a1 + 0x78);
      if ( v10 )
        v11 = (int (__thiscall ***)(_DWORD, int *, int, int))(v10 + 8);
      else
        v11 = 0;
      sub_8D8370(*(_DWORD ***)(a1 + 0x68), v18, v19, v11);
    }
    v12 = *(_DWORD **)(v17 + 0x19C);
    result = v21;
    if ( !v12 )
      v12 = (_DWORD *)dword_BA7D9C;
    v13 = v21 == v12[0xA];
    v12[8] = v21;
    if ( v13 )
      result = (*(int (__thiscall **)(_DWORD *, int))(*v12 + 0x10))(v12, result);
    if ( v20 >= 0 )
    {
      v14 = *(_DWORD *)(v17 + 0x19C);
      if ( !v14 )
        v14 = dword_BA7D9C;
      return sub_8A75D0(v14, v18, 8 * v20, 0x14);
    }
  }
  return result;
}
