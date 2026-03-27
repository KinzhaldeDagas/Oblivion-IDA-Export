_WORD *__cdecl sub_747610(int a1, _BYTE *a2, int a3, int a4)
{
  signed int v4; // eax
  unsigned int v5; // edx
  unsigned int v6; // ecx
  int v7; // edi
  int v8; // ecx
  bool v9; // zf
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  int v15; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // ebx
  _WORD *result; // eax
  signed int v20; // [esp+Ch] [ebp-4h]

  v20 = 0;
  if ( *(int *)(a1 + 0x7C) <= 0 )
  {
    v6 = a3 + 5;
LABEL_7:
    v5 = v6;
    goto LABEL_8;
  }
  if ( *(_BYTE *)(a1 + 0x1C) == 2 )
    sub_746D90(a1);
  sub_7470B0((_DWORD *)a1, (int *)(a1 + 0xB10));
  sub_7470B0((_DWORD *)a1, (int *)(a1 + 0xB1C));
  v4 = sub_7472B0(a1);
  v5 = (unsigned int)(*(_DWORD *)(a1 + 0x16A0) + 0xA) >> 3;
  v6 = (unsigned int)(*(_DWORD *)(a1 + 0x16A4) + 0xA) >> 3;
  v20 = v4;
  if ( v6 <= v5 )
    goto LABEL_7;
LABEL_8:
  if ( a3 + 4 <= v5 && a2 )
  {
    v7 = a4;
    sub_747380(a1, a2, a3, a4);
  }
  else
  {
    v7 = a4;
    v9 = v6 == v5;
    v10 = *(_DWORD *)(a1 + 0x16B4);
    if ( v9 )
    {
      v11 = a4 + 2;
      if ( v10 <= 0xD )
      {
        *(_WORD *)(a1 + 0x16B0) |= v11 << v10;
        *(_DWORD *)(a1 + 0x16B4) = v10 + 3;
      }
      else
      {
        v12 = v11 << v10;
        v13 = *(_DWORD *)(a1 + 8);
        *(_WORD *)(a1 + 0x16B0) |= v12;
        *(_BYTE *)(v13 + (*(_DWORD *)(a1 + 0x14))++) = *(_BYTE *)(a1 + 0x16B0);
        *(_BYTE *)(*(_DWORD *)(a1 + 0x14) + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 0x16B1);
        v14 = *(_DWORD *)(a1 + 0x16B4);
        ++*(_DWORD *)(a1 + 0x14);
        *(_DWORD *)(a1 + 0x16B4) = v14 - 0xD;
        *(_WORD *)(a1 + 0x16B0) = (unsigned __int16)v11 >> (0x10 - v14);
      }
      sub_746980(a1, (int)&unk_A84AD8, (int)&unk_A84F58);
    }
    else
    {
      v15 = a4 + 4;
      if ( v10 <= 0xD )
      {
        *(_WORD *)(a1 + 0x16B0) |= v15 << v10;
        *(_DWORD *)(a1 + 0x16B4) = v10 + 3;
      }
      else
      {
        v16 = v15 << v10;
        v17 = *(_DWORD *)(a1 + 8);
        *(_WORD *)(a1 + 0x16B0) |= v16;
        *(_BYTE *)(v17 + (*(_DWORD *)(a1 + 0x14))++) = *(_BYTE *)(a1 + 0x16B0);
        *(_BYTE *)(*(_DWORD *)(a1 + 0x14) + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 0x16B1);
        v18 = *(_DWORD *)(a1 + 0x16B4);
        ++*(_DWORD *)(a1 + 0x14);
        *(_DWORD *)(a1 + 0x16B4) = v18 - 0xD;
        *(_WORD *)(a1 + 0x16B0) = (unsigned __int16)v15 >> (0x10 - v18);
      }
      sub_746720(a1, *(_DWORD *)(a1 + 0xB14) + 1, *(_DWORD *)(a1 + 0xB20) + 1, v20 + 1);
      sub_746980(a1, a1 + 0x8C, a1 + 0x980);
    }
  }
  result = sub_745DB0(v8, a1);
  if ( v7 )
    return (_WORD *)sub_746EA0(a1);
  return result;
}
