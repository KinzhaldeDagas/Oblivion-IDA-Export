_DWORD *__cdecl sub_923DD0(int a1, unsigned int a2, int a3, _DWORD *a4)
{
  unsigned int v5; // esi
  _DWORD *v6; // edi
  int v7; // ebp
  int v8; // eax
  int v9; // ecx
  _DWORD *v10; // ebp
  int v11; // edx
  _DWORD *v12; // eax
  int v13; // ecx
  _DWORD *v14; // edx
  double v15; // st7
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  _DWORD *result; // eax
  int v20; // [esp+Ch] [ebp-18h] BYREF
  int v21; // [esp+10h] [ebp-14h]
  _DWORD v22[4]; // [esp+14h] [ebp-10h] BYREF
  float v23; // [esp+28h] [ebp+4h]
  BOOL v24; // [esp+2Ch] [ebp+8h]
  _DWORD *v25; // [esp+2Ch] [ebp+8h]
  unsigned int v26; // [esp+30h] [ebp+Ch]

  v5 = a2;
  v20 = *(_DWORD *)(a1 + 0x48);
  v6 = *(_DWORD **)(a1 + 8);
  v26 = a2 + 4 * a3;
  if ( a2 < v26 )
  {
    do
    {
      v7 = *(_DWORD *)(*(_DWORD *)v5 + 0x24);
      v8 = *(_DWORD *)(*(_DWORD *)(v7 + 4) + 0x50);
      v9 = *(_DWORD *)(*(_DWORD *)(v7 + 8) + 0x50);
      v10 = (_DWORD *)(v7 + 4);
      v8 += 0x10;
      v9 += 0x10;
      v24 = *(_BYTE *)(*(_DWORD *)v5 + 0x18) == 4;
      v6[5] = *(_DWORD *)(a1 + 0xC) + *(_DWORD *)(v8 - 8);
      v11 = *(_DWORD *)(a1 + 0xC) + *(_DWORD *)(v9 - 8);
      v6[7] = v8;
      v6[8] = v9;
      v6[6] = v11;
      v6[9] = *(_DWORD *)v5;
      v6[0xA] = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v5 + 0x24) + 0x18);
      v12 = a4;
      if ( a4[1] == (a4[2] & 0x3FFFFFFF) )
      {
        sub_8A6EE0((const void **)a4, 0xC);
        v12 = a4;
      }
      v13 = *v12 + 0xC * v12[1]++;
      *(_DWORD *)v13 = *(_DWORD *)v5;
      v14 = (_DWORD *)(0x10 * v24 + a1 + 0x2C);
      *(_DWORD *)(v13 + 4) = *v14;
      v15 = *(float *)(*v10 + 0x34);
      v23 = *(float *)(v10[1] + 0x34);
      v25 = v14;
      if ( v15 >= v23 )
        v15 = v23;
      *(float *)(v13 + 8) = v15;
      v16 = *v14;
      v17 = *(_DWORD *)v5;
      v21 = v16;
      (*(void (__thiscall **)(_DWORD, _DWORD *, int *))(**(_DWORD **)(v17 + 0xC) + 0x1C))(
        *(_DWORD *)(v17 + 0xC),
        v6,
        &v20);
      v18 = v21;
      *(_DWORD *)(a1 + 0x48) = v20;
      *v25 = v18;
      (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(*(_DWORD *)v5 + 0xC) + 0x20))(
        *(_DWORD *)(*(_DWORD *)v5 + 0xC),
        v22);
      v5 += 4;
      *(_DWORD *)(a1 + 0x4C) += 4 * v22[3];
    }
    while ( v5 < v26 );
  }
  result = *(_DWORD **)(a1 + 0x2C);
  *result = 0x400;
  **(_DWORD **)(a1 + 0x3C) = 0x400;
  return result;
}
