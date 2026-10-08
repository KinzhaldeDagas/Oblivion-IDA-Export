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

  LOWORD(v5) = *(_WORD *)(this + 0x14); /*0x8db3f2*/
  *(_WORD *)(this + 0x14) = v5 - 1; /*0x8db402*/
  if ( !(_WORD)v5 ) /*0x8db406*/
  {
    v6 = *(_DWORD *)(a3 + 0x10); /*0x8db421*/
    v7 = *(_WORD *)(v6 + a3 + 0x8E); /*0x8db424*/
    v8 = a2 + *(_DWORD *)(a2 + 0x10); /*0x8db42c*/
    v9 = a3 + v6; /*0x8db42e*/
    if ( *(_WORD *)(v8 + 0x8E) < v7 ) /*0x8db43c*/
      v7 = *(_WORD *)(v8 + 0x8E); /*0x8db43e*/
    v14[0] = a2; /*0x8db440*/
    v14[1] = a3; /*0x8db44b*/
    *(_WORD *)(this + 0x14) = v7; /*0x8db44f*/
    v10 = *a5 - (_DWORD)a5; /*0x8db455*/
    v14[3] = a5; /*0x8db457*/
    v11 = (int)((unsigned __int64)(0x2AAAAAABLL * (v10 - 0x30)) >> 0x20) >> 3; /*0x8db465*/
    v12 = v11 + (v11 >> 0x1F) - 1; /*0x8db46d*/
    for ( v14[0x104] = this; v12 >= 0; v14[v12 + 5] = 0 ) /*0x8db47c*/
      --v12; /*0x8db480*/
    sub_8DC9B0(*(_DWORD *)(this + 8), *(_DWORD *)(this + 8), (int)v14); /*0x8db490*/
    v5 = *(_DWORD *)(v8 + 0x98); /*0x8db495*/
    if ( v5 ) /*0x8db4a0*/
      v5 = sub_8DC130(v5, v8, (int)v14); /*0x8db4a8*/
    if ( *(_DWORD *)(v9 + 0x98) ) /*0x8db4b0*/
      LOWORD(v5) = sub_8DC130(v5, v9, (int)v14); /*0x8db4be*/
  }
  return v5; /*0x8db4ca*/
}
