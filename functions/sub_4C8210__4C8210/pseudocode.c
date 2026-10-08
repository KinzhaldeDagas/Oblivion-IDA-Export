char __usercall sub_4C8210@<al>(int a1@<ecx>, double a2@<st0>)
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

  v5 = *(_DWORD *)(a1 + 0x1C); /*0x4c822b*/
  if ( (v5 & 8) == 0 || (v5 & 0x400) != 0 ) /*0x4c823b*/
    return 0; /*0x4c84e7*/
  v41[0] = 0; /*0x4c8246*/
  v41[1] = 0; /*0x4c824d*/
  sub_4C7A30(a1, (TESObjectLAND **)v39, 1, v41); /*0x4c8265*/
  v6 = 0; /*0x4c826a*/
  v34 = 0; /*0x4c826c*/
  v7 = v40; /*0x4c8270*/
  do /*0x4c831c*/
  {
    v8 = v39[v6]; /*0x4c8280*/
    if ( v8 ) /*0x4c8286*/
    {
      v9 = *(_DWORD *)(v8 + 0x24); /*0x4c828c*/
      if ( v9 ) /*0x4c8291*/
        v10 = *(const void ***)(v9 + 8); /*0x4c8293*/
      else
        v10 = 0; /*0x4c8298*/
      qmemcpy(v7 + 0xFFFFF274, *v10, 0xD8Cu); /*0x4c82a7*/
      v11 = *(_DWORD *)(v8 + 0x24); /*0x4c82a9*/
      if ( v11 ) /*0x4c82ae*/
        v12 = *(_DWORD *)(v11 + 8); /*0x4c82b0*/
      else
        v12 = 0; /*0x4c82b5*/
      qmemcpy(v7, *(const void **)(v12 + 4), 0xD8Cu); /*0x4c82c1*/
      v13 = *(_DWORD *)(v8 + 0x24); /*0x4c82c3*/
      if ( v13 ) /*0x4c82c8*/
        v14 = *(_DWORD *)(v13 + 8); /*0x4c82ca*/
      else
        v14 = 0; /*0x4c82cf*/
      qmemcpy(v7 + 0xD8C, *(const void **)(v14 + 8), 0xD8Cu); /*0x4c82df*/
      v15 = *(_DWORD *)(v8 + 0x24); /*0x4c82e1*/
      if ( v15 ) /*0x4c82e6*/
        v16 = *(_DWORD *)(v15 + 8); /*0x4c82e8*/
      else
        v16 = 0; /*0x4c82ed*/
      qmemcpy(v7 + 0x1B18, *(const void **)(v16 + 0xC), 0xD8Cu); /*0x4c82fd*/
      sub_4C1170((_BYTE *)v8, 0); /*0x4c8303*/
      v6 = v34; /*0x4c8308*/
    }
    ++v6; /*0x4c830c*/
    v7 += 0x3630; /*0x4c830f*/
    v34 = v6; /*0x4c8318*/
  }
  while ( v6 < 8 ); /*0x4c831c*/
  sub_4C1170((_BYTE *)a1, 0); /*0x4c8326*/
  sub_4C80F0(a1, (TESObjectCELL ***)v39, 0); /*0x4c8334*/
  for ( i = 0; i < 0x10; i += 4 ) /*0x4c8339*/
  {
    for ( j = 0; j < 0xD8C; j += 0xC ) /*0x4c8340*/
    {
      Vector3_NormalizeInPlace((float *)(j + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 0x24) + 8) + i))); /*0x4c834d*/
      v19 = (float *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 0x24) + 8) + i) + j); /*0x4c8361*/
      v20 = dbl_A46298; /*0x4c836c*/
      v37 = Double_To_SInt32(a2); /*0x4c8378*/
      v38 = Double_To_SInt32(a2); /*0x4c8386*/
      *v19 = (double)(char)Double_To_SInt32(a2) / v20; /*0x4c83a5*/
      v35 = (double)v37 / v20; /*0x4c83bc*/
      *(float *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 0x24) + 8) + i) + j + 4) = v35; /*0x4c83c4*/
      v36 = (double)v38 / v20; /*0x4c83d9*/
      *(float *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 0x24) + 8) + i) + j + 8) = v36; /*0x4c83e1*/
      Vector3_NormalizeInPlace((float *)(j + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 0x24) + 8) + i))); /*0x4c83f0*/
    }
  }
  v21 = 0; /*0x4c8412*/
  v22 = v40; /*0x4c8414*/
  do /*0x4c84bc*/
  {
    v23 = v39[v21]; /*0x4c8420*/
    if ( v23 ) /*0x4c8426*/
    {
      v24 = *(_DWORD *)(v23 + 0x24); /*0x4c842c*/
      if ( v24 ) /*0x4c8431*/
        v25 = *(void ***)(v24 + 8); /*0x4c8433*/
      else
        v25 = 0; /*0x4c8438*/
      qmemcpy(*v25, v22 + 0xFFFFF274, 0xD8Cu); /*0x4c8447*/
      v26 = *(_DWORD *)(v23 + 0x24); /*0x4c8449*/
      if ( v26 ) /*0x4c844e*/
        v27 = *(_DWORD *)(v26 + 8); /*0x4c8450*/
      else
        v27 = 0; /*0x4c8455*/
      qmemcpy(*(void **)(v27 + 4), v22, 0xD8Cu); /*0x4c8461*/
      v28 = *(_DWORD *)(v23 + 0x24); /*0x4c8463*/
      if ( v28 ) /*0x4c8468*/
        v29 = *(_DWORD *)(v28 + 8); /*0x4c846a*/
      else
        v29 = 0; /*0x4c846f*/
      qmemcpy(*(void **)(v29 + 8), v22 + 0xD8C, 0xD8Cu); /*0x4c847f*/
      v30 = *(_DWORD *)(v23 + 0x24); /*0x4c8481*/
      if ( v30 ) /*0x4c8486*/
        v31 = *(_DWORD *)(v30 + 8); /*0x4c8488*/
      else
        v31 = 0; /*0x4c848d*/
      v32 = *((_BYTE *)v41 + v21) == 0; /*0x4c848f*/
      qmemcpy(*(void **)(v31 + 0xC), v22 + 0x1B18, 0xD8Cu); /*0x4c84a5*/
      if ( !v32 ) /*0x4c84a7*/
        sub_4C6280((unsigned int **)v23); /*0x4c84ab*/
    }
    ++v21; /*0x4c84b0*/
    v22 += 0x3630; /*0x4c84b3*/
  }
  while ( v21 < 8 ); /*0x4c84bc*/
  return 1; /*0x4c84c7*/
}
