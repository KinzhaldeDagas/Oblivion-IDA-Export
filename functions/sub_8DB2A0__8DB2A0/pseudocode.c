int __thiscall sub_8DB2A0(_DWORD *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // edx
  int v10; // eax
  int v11; // esi
  _DWORD v13[7]; // [esp+8h] [ebp-28h] BYREF
  int v14; // [esp+24h] [ebp-Ch]
  _DWORD *v15; // [esp+28h] [ebp-8h]
  int v16; // [esp+2Ch] [ebp-4h]

  v13[0] = a2;
  v13[1] = a3;
  v13[4] = a5;
  *(_WORD *)(a8 + 4) = 0;
  *(_BYTE *)(a8 + 6) = 0;
  *(_BYTE *)(a8 + 7) = 1;
  v13[6] = a7;
  v9 = *(this + 2);
  v13[5] = a8;
  v13[2] = 0;
  v15 = this;
  v14 = 0;
  v16 = a6;
  sub_8DC800(a6, v9, (int)v13);
  v10 = *(this + 3);
  if ( *(_DWORD *)(v10 + 0x98) )
    v10 = sub_8DBF80(v10, v10, (int)v13);
  v11 = *(this + 4);
  if ( *(_DWORD *)(v11 + 0x98) )
    sub_8DBF80(v10, v11, (int)v13);
  return v14;
}
