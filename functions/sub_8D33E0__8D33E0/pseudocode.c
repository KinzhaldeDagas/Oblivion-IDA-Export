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

  while ( 1 )
  {
    v4 = a3;
    v5 = 0xFFFFFFFF;
    v6 = 0;
    if ( (int)*(this + 6) <= 0 )
      break;
    v7 = *(this + 5);
    do
    {
      if ( v4 > *v7 )
      {
        v5 = v6;
        v4 = *v7;
      }
      v8 = (int)*(this + 6);
      ++v6;
      v7 += 0x10;
    }
    while ( v6 < v8 );
    if ( v5 < 0 )
      break;
    v9 = v5 << 6;
    v10 = (float *)(v8 - 1);
    qmemcpy(v25, &(*(this + 5))[0x10 * v5], sizeof(v25));
    v11 = (int)*(this + 5);
    *(this + 6) = v10;
    v12 = v11 + ((_DWORD)v10 << 6);
    v13 = v11 + v9;
    *(_DWORD *)(v11 + v9) = *(_DWORD *)v12;
    v14 = (_DWORD *)(v11 + v9 + 4);
    v20 = 2;
    do
    {
      *v14 = *(_DWORD *)((char *)v14 + v12 - v13);
      ++v14;
      --v20;
    }
    while ( v20 );
    *(_DWORD *)(v13 + 0xC) = *(_DWORD *)(v12 + 0xC);
    *(_DWORD *)(v13 + 0x10) = *(_DWORD *)(v12 + 0x10);
    *(_DWORD *)(v13 + 0x14) = *(_DWORD *)(v12 + 0x14);
    *(_DWORD *)(v13 + 0x18) = *(_DWORD *)(v12 + 0x18);
    *(_OWORD *)(v13 + 0x20) = *(_OWORD *)(v12 + 0x20);
    *(_OWORD *)(v13 + 0x30) = *(_OWORD *)(v12 + 0x30);
    v21 = *(float *)(a2 + 0x18);
    v15 = v21 - v25[0];
    v16 = v25[0];
    *(float *)(a2 + 0xC) = v25[0];
    v22 = v15;
    if ( v22 == *(float *)&SrcStr )
      v23 = 0.0;
    else
      v23 = fConstant_1 / v22;
    *(float *)(a2 + 0x160) = v16;
    *(float *)(a2 + 0x164) = v21;
    *(float *)(a2 + 0x168) = v22;
    *(float *)(a2 + 0x16C) = v23;
    v17 = *(_DWORD *)(a2 + 0x74) + 0x10;
    *(float *)v17 = v16;
    *(float *)(v17 + 4) = v21;
    *(float *)(v17 + 8) = v22;
    *(float *)(v17 + 0xC) = v23;
    ++*(_DWORD *)(a2 + 0x88);
    (*((void (__thiscall **)(float **, int, float *, _DWORD))*this + 0xB))(this, a2, v25, *(this + 2));
    *(float *)&v24[3] = v25[2];
    LOWORD(v24[0]) = 0xFFFF;
    v24[1] = 0;
    *(float *)&v24[2] = v25[1];
    *(float *)&v24[5] = v25[6];
    sub_8DC920(*(_DWORD *)(LODWORD(v25[1]) + 8), *(_DWORD *)(LODWORD(v25[1]) + 8), (int)v24);
    if ( *(_DWORD *)(LODWORD(v25[1]) + 0x98) )
      sub_8DC0A0(SLODWORD(v25[1]), SLODWORD(v25[1]), (int)v24);
    if ( *(_DWORD *)(LODWORD(v25[2]) + 0x98) )
      sub_8DC0A0(SLODWORD(v25[2]), SLODWORD(v25[2]), (int)v24);
    if ( (*(_DWORD *)(a2 + 0x88))-- == 1 )
    {
      if ( *(_DWORD *)(a2 + 0x84) )
      {
        if ( !*(_BYTE *)(a2 + 0x90) )
          sub_899210(a2);
      }
    }
    *(this + 9) = (float *)((char *)*(this + 9) + 1);
    if ( *(_DWORD *)(dword_BA7D98 + 4) == 1 )
      return 2;
  }
  return 0;
}
