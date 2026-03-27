int __usercall sub_746720@<eax>(int a1@<eax>, int a2, int a3, int a4)
{
  int v4; // ecx
  int v5; // ebx
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  int i; // edi
  int v18; // ecx
  int v19; // edx
  unsigned __int16 v20; // si
  int v21; // edx
  int v22; // ecx
  int v23; // edx
  int v24; // eax

  v4 = *(_DWORD *)(a1 + 0x16B4);
  v5 = a4;
  if ( v4 <= 0xB )
  {
    *(_WORD *)(a1 + 0x16B0) |= (a2 - 0x101) << v4;
    *(_DWORD *)(a1 + 0x16B4) = v4 + 5;
  }
  else
  {
    v6 = (a2 - 0x101) << v4;
    v7 = *(_DWORD *)(a1 + 0x14);
    *(_WORD *)(a1 + 0x16B0) |= v6;
    *(_BYTE *)(v7 + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 0x16B0);
    *(_BYTE *)(++*(_DWORD *)(a1 + 0x14) + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 0x16B1);
    v8 = *(_DWORD *)(a1 + 0x16B4);
    ++*(_DWORD *)(a1 + 0x14);
    v5 = a4;
    *(_DWORD *)(a1 + 0x16B4) = v8 - 0xB;
    *(_WORD *)(a1 + 0x16B0) = (unsigned __int16)(a2 - 0x101) >> (0x10 - v8);
  }
  v9 = *(_DWORD *)(a1 + 0x16B4);
  if ( v9 <= 0xB )
  {
    *(_WORD *)(a1 + 0x16B0) |= (a3 - 1) << v9;
    *(_DWORD *)(a1 + 0x16B4) = v9 + 5;
  }
  else
  {
    v10 = (a3 - 1) << v9;
    v11 = *(_DWORD *)(a1 + 0x14);
    *(_WORD *)(a1 + 0x16B0) |= v10;
    *(_BYTE *)(v11 + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 0x16B0);
    *(_BYTE *)(++*(_DWORD *)(a1 + 0x14) + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 0x16B1);
    v12 = *(_DWORD *)(a1 + 0x16B4);
    ++*(_DWORD *)(a1 + 0x14);
    *(_DWORD *)(a1 + 0x16B4) = v12 - 0xB;
    *(_WORD *)(a1 + 0x16B0) = (unsigned __int16)(a3 - 1) >> (0x10 - v12);
  }
  v13 = *(_DWORD *)(a1 + 0x16B4);
  if ( v13 <= 0xC )
  {
    *(_WORD *)(a1 + 0x16B0) |= (v5 - 4) << v13;
    *(_DWORD *)(a1 + 0x16B4) = v13 + 4;
  }
  else
  {
    v14 = (v5 - 4) << v13;
    v15 = *(_DWORD *)(a1 + 0x14);
    *(_WORD *)(a1 + 0x16B0) |= v14;
    *(_BYTE *)(v15 + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 0x16B0);
    *(_BYTE *)(++*(_DWORD *)(a1 + 0x14) + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 0x16B1);
    v16 = *(_DWORD *)(a1 + 0x16B4);
    ++*(_DWORD *)(a1 + 0x14);
    *(_DWORD *)(a1 + 0x16B4) = v16 - 0xC;
    *(_WORD *)(a1 + 0x16B0) = (unsigned __int16)(v5 - 4) >> (0x10 - v16);
  }
  for ( i = 0; i < v5; ++i )
  {
    v18 = *(_DWORD *)(a1 + 0x16B4);
    v19 = (unsigned __int8)byte_A849FC[i];
    if ( v18 <= 0xD )
    {
      *(_WORD *)(a1 + 0x16B0) |= *(_WORD *)(a1 + 4 * v19 + 0xA76) << v18;
      *(_DWORD *)(a1 + 0x16B4) = v18 + 3;
    }
    else
    {
      v20 = *(_WORD *)(a1 + 4 * v19 + 0xA76);
      v21 = v20 << v18;
      v22 = *(_DWORD *)(a1 + 0x14);
      *(_WORD *)(a1 + 0x16B0) |= v21;
      *(_BYTE *)(v22 + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 0x16B0);
      *(_BYTE *)(++*(_DWORD *)(a1 + 0x14) + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 0x16B1);
      v23 = *(_DWORD *)(a1 + 0x16B4);
      ++*(_DWORD *)(a1 + 0x14);
      v5 = a4;
      *(_DWORD *)(a1 + 0x16B4) = v23 - 0xD;
      *(_WORD *)(a1 + 0x16B0) = v20 >> (0x10 - v23);
    }
  }
  v24 = sub_746200(a1, a1 + 0x8C, a2 - 1);
  return sub_746200(v24, v24 + 0x980, a3 - 1);
}
