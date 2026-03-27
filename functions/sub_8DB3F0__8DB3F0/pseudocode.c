__int16 __thiscall sub_8DB3F0(int this, int a2, int a3, int a4, _DWORD *a5)
{
  int v5; // eax
  int v6; // edi
  unsigned __int16 v7; // bx
  int v8; // esi
  int v9; // edi
  int v10; // edx
  unsigned int v11; // edx
  int v12; // eax
  _DWORD v14[261]; // [esp+0h] [ebp-414h] BYREF

  LOWORD(v5) = *(_WORD *)(this + 0x14);
  *(_WORD *)(this + 0x14) = v5 - 1;
  if ( !(_WORD)v5 )
  {
    v6 = *(_DWORD *)(a3 + 0x10);
    v7 = *(_WORD *)(v6 + a3 + 0x8E);
    v8 = a2 + *(_DWORD *)(a2 + 0x10);
    v9 = a3 + v6;
    if ( *(_WORD *)(v8 + 0x8E) < v7 )
      v7 = *(_WORD *)(v8 + 0x8E);
    v14[0] = a2;
    v14[1] = a3;
    *(_WORD *)(this + 0x14) = v7;
    v10 = *a5 - (_DWORD)a5;
    v14[3] = a5;
    v11 = (int)((unsigned __int64)(0x2AAAAAABLL * (v10 - 0x30)) >> 0x20) >> 3;
    v12 = v11 + (v11 >> 0x1F) - 1;
    for ( v14[0x104] = this; v12 >= 0; v14[v12 + 5] = 0 )
      --v12;
    sub_8DC9B0(*(_DWORD *)(this + 8), *(_DWORD *)(this + 8), (int)v14);
    v5 = *(_DWORD *)(v8 + 0x98);
    if ( v5 )
      v5 = sub_8DC130(v5, v8, (int)v14);
    if ( *(_DWORD *)(v9 + 0x98) )
      LOWORD(v5) = sub_8DC130(v5, v9, (int)v14);
  }
  return v5;
}
