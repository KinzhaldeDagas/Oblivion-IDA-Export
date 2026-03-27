char __usercall sub_4C8210@<al>(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int v5; // eax
  int v6; // ecx
  _BYTE *v7; // ebp
  int v8; // eax
  int v9; // ecx
  const void **v10; // edx
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  int i; // edi
  int j; // esi
  float *v19; // ebp
  double v20; // st4
  int v21; // ebp
  _BYTE *v22; // ebx
  int v23; // eax
  int v24; // ecx
  void **v25; // edx
  int v26; // ecx
  int v27; // edx
  int v28; // ecx
  int v29; // edx
  int v30; // ecx
  int v31; // edx
  bool v32; // zf
  int v34; // [esp+4h] [ebp-1B1B4h]
  float v35; // [esp+4h] [ebp-1B1B4h]
  float v36; // [esp+4h] [ebp-1B1B4h]
  char v37; // [esp+Ah] [ebp-1B1AEh]
  char v38; // [esp+Bh] [ebp-1B1ADh]
  int v39[875]; // [esp+Ch] [ebp-1B1ACh] BYREF
  _BYTE v40[107508]; // [esp+DB8h] [ebp-1A400h] BYREF
  _DWORD v41[2]; // [esp+1B1ACh] [ebp-Ch] BYREF

  v5 = *(_DWORD *)(a1 + 0x1C);
  if ( (v5 & 8) == 0 || (v5 & 0x400) != 0 )
    return 0;
  v41[0] = 0;
  v41[1] = 0;
  sub_4C7A30(a1, a2, a3, a4, (TESObjectLAND **)v39, 1, v41);
  v6 = 0;
  v34 = 0;
  v7 = v40;
  do
  {
    v8 = v39[v6];
    if ( v8 )
    {
      v9 = *(_DWORD *)(v8 + 0x24);
      if ( v9 )
        v10 = *(const void ***)(v9 + 8);
      else
        v10 = 0;
      qmemcpy(v7 + 0xFFFFF274, *v10, 0xD8Cu);
      v11 = *(_DWORD *)(v8 + 0x24);
      if ( v11 )
        v12 = *(_DWORD *)(v11 + 8);
      else
        v12 = 0;
      qmemcpy(v7, *(const void **)(v12 + 4), 0xD8Cu);
      v13 = *(_DWORD *)(v8 + 0x24);
      if ( v13 )
        v14 = *(_DWORD *)(v13 + 8);
      else
        v14 = 0;
      qmemcpy(v7 + 0xD8C, *(const void **)(v14 + 8), 0xD8Cu);
      v15 = *(_DWORD *)(v8 + 0x24);
      if ( v15 )
        v16 = *(_DWORD *)(v15 + 8);
      else
        v16 = 0;
      qmemcpy(v7 + 0x1B18, *(const void **)(v16 + 0xC), 0xD8Cu);
      sub_4C1170((_BYTE *)v8, 0);
      v6 = v34;
    }
    ++v6;
    v7 += 0x3630;
    v34 = v6;
  }
  while ( v6 < 8 );
  sub_4C1170((_BYTE *)a1, 0);
  sub_4C80F0(a1, a2, a3, a4, (TESObjectCELL ***)v39, 0);
  for ( i = 0; i < 0x10; i += 4 )
  {
    for ( j = 0; j < 0xD8C; j += 0xC )
    {
      sub_43F350((float *)(j + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 0x24) + 8) + i)));
      v19 = (float *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 0x24) + 8) + i) + j);
      v20 = dbl_A46298;
      v37 = Double_To_SInt32(a4);
      v38 = Double_To_SInt32(a4);
      *v19 = (double)(char)Double_To_SInt32(a4) / v20;
      v35 = (double)v37 / v20;
      *(float *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 0x24) + 8) + i) + j + 4) = v35;
      v36 = (double)v38 / v20;
      *(float *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 0x24) + 8) + i) + j + 8) = v36;
      sub_43F350((float *)(j + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 0x24) + 8) + i)));
    }
  }
  v21 = 0;
  v22 = v40;
  do
  {
    v23 = v39[v21];
    if ( v23 )
    {
      v24 = *(_DWORD *)(v23 + 0x24);
      if ( v24 )
        v25 = *(void ***)(v24 + 8);
      else
        v25 = 0;
      qmemcpy(*v25, v22 + 0xFFFFF274, 0xD8Cu);
      v26 = *(_DWORD *)(v23 + 0x24);
      if ( v26 )
        v27 = *(_DWORD *)(v26 + 8);
      else
        v27 = 0;
      qmemcpy(*(void **)(v27 + 4), v22, 0xD8Cu);
      v28 = *(_DWORD *)(v23 + 0x24);
      if ( v28 )
        v29 = *(_DWORD *)(v28 + 8);
      else
        v29 = 0;
      qmemcpy(*(void **)(v29 + 8), v22 + 0xD8C, 0xD8Cu);
      v30 = *(_DWORD *)(v23 + 0x24);
      if ( v30 )
        v31 = *(_DWORD *)(v30 + 8);
      else
        v31 = 0;
      v32 = *((_BYTE *)v41 + v21) == 0;
      qmemcpy(*(void **)(v31 + 0xC), v22 + 0x1B18, 0xD8Cu);
      if ( !v32 )
        sub_4C6280((unsigned int **)v23);
    }
    ++v21;
    v22 += 0x3630;
  }
  while ( v21 < 8 );
  return 1;
}
