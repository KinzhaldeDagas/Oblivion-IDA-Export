int __thiscall sub_8D33E0(float **this, int a2, float a3)
{
  double v4; // st7
  int v5; // ecx
  int v6; // edx
  float *v7; // esi
  int v8; // eax
  int v9; // edx
  float *v10; // eax
  int v11; // esi
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // edx
  double v15; // st7
  float v16; // ecx
  int v17; // edi
  int v20; // [esp+14h] [ebp-6Ch]
  float v21; // [esp+1Ch] [ebp-64h]
  float v22; // [esp+20h] [ebp-60h]
  float v23; // [esp+24h] [ebp-5Ch]
  _DWORD v24[6]; // [esp+28h] [ebp-58h] BYREF
  float v25[16]; // [esp+40h] [ebp-40h] BYREF

  while ( 1 ) /*0x8d33f3*/
  {
    v4 = a3; /*0x8d33f3*/
    v5 = 0xFFFFFFFF; /*0x8d33f6*/
    v6 = 0; /*0x8d33f9*/
    if ( (int)*(this + 6) <= 0 ) /*0x8d33fd*/
      break; /*0x8d33fd*/
    v7 = *(this + 5); /*0x8d3406*/
    do /*0x8d3420*/
    {
      if ( v4 > *v7 ) /*0x8d340f*/
      {
        v5 = v6; /*0x8d3413*/
        v4 = *v7; /*0x8d3415*/
      }
      v8 = (int)*(this + 6); /*0x8d3417*/
      ++v6; /*0x8d341a*/
      v7 += 0x10; /*0x8d341b*/
    }
    while ( v6 < v8 ); /*0x8d3420*/
    if ( v5 < 0 ) /*0x8d3426*/
      break; /*0x8d3426*/
    v9 = v5 << 6; /*0x8d342f*/
    v10 = (float *)(v8 - 1); /*0x8d3434*/
    qmemcpy(v25, &(*(this + 5))[0x10 * v5], sizeof(v25)); /*0x8d343e*/
    v11 = (int)*(this + 5); /*0x8d3440*/
    *(this + 6) = v10; /*0x8d3443*/
    v12 = v11 + ((_DWORD)v10 << 6); /*0x8d344b*/
    v13 = v11 + v9; /*0x8d344d*/
    *(_DWORD *)(v11 + v9) = *(_DWORD *)v12; /*0x8d3454*/
    v14 = (_DWORD *)(v11 + v9 + 4); /*0x8d3456*/
    v20 = 2; /*0x8d345b*/
    do /*0x8d3474*/
    {
      *v14 = *(_DWORD *)((char *)v14 + v12 - v13); /*0x8d3466*/
      ++v14; /*0x8d346c*/
      --v20; /*0x8d3470*/
    }
    while ( v20 ); /*0x8d3474*/
    *(_DWORD *)(v13 + 0xC) = *(_DWORD *)(v12 + 0xC); /*0x8d347c*/
    *(_DWORD *)(v13 + 0x10) = *(_DWORD *)(v12 + 0x10); /*0x8d3482*/
    *(_DWORD *)(v13 + 0x14) = *(_DWORD *)(v12 + 0x14); /*0x8d3488*/
    *(_DWORD *)(v13 + 0x18) = *(_DWORD *)(v12 + 0x18); /*0x8d348e*/
    *(_OWORD *)(v13 + 0x20) = *(_OWORD *)(v12 + 0x20); /*0x8d3495*/
    *(_OWORD *)(v13 + 0x30) = *(_OWORD *)(v12 + 0x30); /*0x8d349d*/
    v21 = *(float *)(a2 + 0x18); /*0x8d34a8*/
    v15 = v21 - v25[0]; /*0x8d34ac*/
    v16 = v25[0]; /*0x8d34b0*/
    *(float *)(a2 + 0xC) = v25[0]; /*0x8d34b2*/
    v22 = v15; /*0x8d34b9*/
    if ( v22 == *(float *)&SrcStr ) /*0x8d34ce*/
      v23 = 0.0; /*0x8d34d0*/
    else
      v23 = fConstant_1 / v22; /*0x8d34e4*/
    *(float *)(a2 + 0x160) = v16; /*0x8d34fc*/
    *(float *)(a2 + 0x164) = v21; /*0x8d34fe*/
    *(float *)(a2 + 0x168) = v22; /*0x8d3501*/
    *(float *)(a2 + 0x16C) = v23; /*0x8d3508*/
    v17 = *(_DWORD *)(a2 + 0x74) + 0x10; /*0x8d350e*/
    *(float *)v17 = v16; /*0x8d3511*/
    *(float *)(v17 + 4) = v21; /*0x8d3517*/
    *(float *)(v17 + 8) = v22; /*0x8d351a*/
    *(float *)(v17 + 0xC) = v23; /*0x8d351d*/
    ++*(_DWORD *)(a2 + 0x88); /*0x8d3520*/
    (*((void (__thiscall **)(float **, int, float *, _DWORD))*this + 0xB))(this, a2, v25, *(this + 2)); /*0x8d3534*/
    *(float *)&v24[3] = v25[2]; /*0x8d3543*/
    LOWORD(v24[0]) = 0xFFFF; /*0x8d354b*/
    v24[1] = 0; /*0x8d3552*/
    *(float *)&v24[2] = v25[1]; /*0x8d355a*/
    *(float *)&v24[5] = v25[6]; /*0x8d355e*/
    sub_8DC920(*(_DWORD *)(LODWORD(v25[1]) + 8), *(_DWORD *)(LODWORD(v25[1]) + 8), (int)v24); /*0x8d3567*/
    if ( *(_DWORD *)(LODWORD(v25[1]) + 0x98) ) /*0x8d3570*/
      sub_8DC0A0(SLODWORD(v25[1]), SLODWORD(v25[1]), (int)v24); /*0x8d3583*/
    if ( *(_DWORD *)(LODWORD(v25[2]) + 0x98) ) /*0x8d358f*/
      sub_8DC0A0(SLODWORD(v25[2]), SLODWORD(v25[2]), (int)v24); /*0x8d359f*/
    if ( (*(_DWORD *)(a2 + 0x88))-- == 1 ) /*0x8d35a7*/
    {
      if ( *(_DWORD *)(a2 + 0x84) ) /*0x8d35af*/
      {
        if ( !*(_BYTE *)(a2 + 0x90) ) /*0x8d35b9*/
          sub_899210(a2); /*0x8d35c5*/
      }
    }
    *(this + 9) = (float *)((char *)*(this + 9) + 1); /*0x8d35ca*/
    if ( *(_DWORD *)(unk_BA7D98 + 4) == 1 ) /*0x8d35d6*/
      return 2; /*0x8d35e7*/
  }
  return 0; /*0x8d35e1*/
}
