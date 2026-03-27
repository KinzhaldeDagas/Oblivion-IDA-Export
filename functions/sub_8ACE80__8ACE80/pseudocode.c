signed int __fastcall sub_8ACE80(_DWORD *a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // ebp
  int v5; // eax
  int v6; // edx
  int v7; // edi
  int v8; // eax
  _DWORD *v9; // ecx
  int v10; // ecx
  int v11; // eax
  __int128 v12; // xmm0
  int v13; // eax
  int v14; // edx
  signed int result; // eax
  _DWORD *v16; // ecx
  int v17; // ecx

  v3 = a3;
  sub_8DE670(a3, a1 != (_DWORD *)0xC ? (unsigned int)a1 : 0);
  v5 = a1[0x1B] - 1;
  if ( v5 >= 0 )
  {
    v6 = 0x30 * v5;
    v7 = a1[0x1B];
    do
    {
      v8 = *(_DWORD *)(a1[0x1A] + v6 + 0x28);
      if ( *(_BYTE *)(v8 + 0x18) == 2 )
        v9 = (_DWORD *)(v8 + *(_DWORD *)(v8 + 0x10));
      else
        v9 = 0;
      if ( v9 == v3 )
      {
        v10 = a1[0x1A];
        v11 = a1[0x1B] - 1;
        a1[0x1B] = v11;
        v11 *= 0x30;
        v12 = *(_OWORD *)(v11 + v10);
        v13 = v10 + v11;
        *(_OWORD *)(v6 + v10) = v12;
        *(_OWORD *)(v6 + v10 + 0x10) = *(_OWORD *)(v13 + 0x10);
        *(_DWORD *)(v6 + v10 + 0x20) = *(_DWORD *)(v13 + 0x20);
        *(_DWORD *)(v6 + v10 + 0x24) = *(_DWORD *)(v13 + 0x24);
        *(_DWORD *)(v6 + v10 + 0x28) = *(_DWORD *)(v13 + 0x28);
        v3 = a3;
        *(_DWORD *)(v6 + v10 + 0x2C) = *(_DWORD *)(v13 + 0x2C);
      }
      v6 -= 0x30;
      --v7;
    }
    while ( v7 );
  }
  v14 = a1[0x24];
  result = 0;
  if ( v14 <= 0 )
  {
LABEL_13:
    result = 0xFFFFFFFF;
  }
  else
  {
    v16 = (_DWORD *)a1[0x23];
    while ( (_DWORD *)*v16 != v3 )
    {
      ++result;
      ++v16;
      if ( result >= v14 )
        goto LABEL_13;
    }
  }
  v17 = a1[0x24] - 1;
  a1[0x24] = v17;
  *(_DWORD *)(a1[0x23] + 4 * result) = *(_DWORD *)(a1[0x23] + 4 * v17);
  return result;
}
