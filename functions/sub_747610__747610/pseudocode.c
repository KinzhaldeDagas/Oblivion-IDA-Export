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

  v20 = 0; /*0x747620*/
  if ( *(int *)(a1 + 0x7C) <= 0 ) /*0x747628*/
  {
    v6 = a3 + 5; /*0x74767b*/
LABEL_7:
    v5 = v6; /*0x74767e*/
    goto LABEL_8; /*0x74767e*/
  }
  if ( *(_BYTE *)(a1 + 0x1C) == 2 ) /*0x74762e*/
    sub_746D90(a1); /*0x747632*/
  sub_7470B0((_DWORD *)a1, (int *)(a1 + 0xB10)); /*0x74763e*/
  sub_7470B0((_DWORD *)a1, (int *)(a1 + 0xB1C)); /*0x74764a*/
  v4 = sub_7472B0(a1); /*0x747654*/
  v5 = (unsigned int)(*(_DWORD *)(a1 + 0x16A0) + 0xA) >> 3; /*0x74766b*/
  v6 = (unsigned int)(*(_DWORD *)(a1 + 0x16A4) + 0xA) >> 3; /*0x74766e*/
  v20 = v4; /*0x747673*/
  if ( v6 <= v5 ) /*0x747677*/
    goto LABEL_7; /*0x747677*/
LABEL_8:
  if ( a3 + 4 <= v5 && a2 ) /*0x74768d*/
  {
    v7 = a4; /*0x74768f*/
    sub_747380(a1, a2, a3, a4); /*0x747697*/
  }
  else
  {
    v7 = a4; /*0x7476a4*/
    v9 = v6 == v5; /*0x7476a8*/
    v10 = *(_DWORD *)(a1 + 0x16B4); /*0x7476aa*/
    if ( v9 ) /*0x7476b0*/
    {
      v11 = a4 + 2; /*0x7476b9*/
      if ( v10 <= 0xD ) /*0x7476bc*/
      {
        *(_WORD *)(a1 + 0x16B0) |= v11 << v10; /*0x747712*/
        *(_DWORD *)(a1 + 0x16B4) = v10 + 3; /*0x74771c*/
      }
      else
      {
        v12 = v11 << v10; /*0x7476c0*/
        v13 = *(_DWORD *)(a1 + 8); /*0x7476c2*/
        *(_WORD *)(a1 + 0x16B0) |= v12; /*0x7476c5*/
        *(_BYTE *)(v13 + (*(_DWORD *)(a1 + 0x14))++) = *(_BYTE *)(a1 + 0x16B0); /*0x7476d6*/
        *(_BYTE *)(*(_DWORD *)(a1 + 0x14) + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 0x16B1); /*0x7476ea*/
        v14 = *(_DWORD *)(a1 + 0x16B4); /*0x7476ed*/
        ++*(_DWORD *)(a1 + 0x14); /*0x7476f3*/
        *(_DWORD *)(a1 + 0x16B4) = v14 - 0xD; /*0x747701*/
        *(_WORD *)(a1 + 0x16B0) = (unsigned __int16)v11 >> (0x10 - v14); /*0x747707*/
      }
      sub_746980(a1, (int)&unk_A84AD8, (int)&unk_A84F58); /*0x74772e*/
    }
    else
    {
      v15 = a4 + 4; /*0x74773e*/
      if ( v10 <= 0xD ) /*0x747741*/
      {
        *(_WORD *)(a1 + 0x16B0) |= v15 << v10; /*0x747797*/
        *(_DWORD *)(a1 + 0x16B4) = v10 + 3; /*0x7477a1*/
      }
      else
      {
        v16 = v15 << v10; /*0x747745*/
        v17 = *(_DWORD *)(a1 + 8); /*0x747747*/
        *(_WORD *)(a1 + 0x16B0) |= v16; /*0x74774a*/
        *(_BYTE *)(v17 + (*(_DWORD *)(a1 + 0x14))++) = *(_BYTE *)(a1 + 0x16B0); /*0x74775b*/
        *(_BYTE *)(*(_DWORD *)(a1 + 0x14) + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 0x16B1); /*0x74776f*/
        v18 = *(_DWORD *)(a1 + 0x16B4); /*0x747772*/
        ++*(_DWORD *)(a1 + 0x14); /*0x747778*/
        *(_DWORD *)(a1 + 0x16B4) = v18 - 0xD; /*0x747786*/
        *(_WORD *)(a1 + 0x16B0) = (unsigned __int16)v15 >> (0x10 - v18); /*0x74778c*/
      }
      sub_746720(a1, *(_DWORD *)(a1 + 0xB14) + 1, *(_DWORD *)(a1 + 0xB20) + 1, v20 + 1); /*0x7477c5*/
      sub_746980(a1, a1 + 0x8C, a1 + 0x980); /*0x7477da*/
    }
  }
  result = sub_745DB0(v8, a1); /*0x7477e4*/
  if ( v7 ) /*0x7477ec*/
    return (_WORD *)sub_746EA0(a1); /*0x7477f5*/
  return result; /*0x7477eb*/
}
