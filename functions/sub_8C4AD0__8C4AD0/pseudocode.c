int __thiscall sub_8C4AD0(__m128 *this, int a2, int a3)
{
  int v4; // ecx
  int v5; // esi
  float *v7; // esi
  double v8; // st7
  float *v9; // eax
  float v10; // edi
  float v11; // eax
  float *v12; // eax
  float v13; // edi
  float v14; // eax
  float *v15; // eax
  float v16; // edi
  float v17; // eax
  float v18; // [esp+Ch] [ebp-24h]
  __int128 v19; // [esp+10h] [ebp-20h]
  float v20; // [esp+10h] [ebp-20h]
  float v21; // [esp+10h] [ebp-20h]
  float v22; // [esp+10h] [ebp-20h]

  v4 = a3;
  v5 = *((_DWORD *)this + 4);
  if ( (a2 & 0xFFFFFFu) >= *(_DWORD *)(v5 + 8) )
    return 0;
  v7 = (float *)(*(_DWORD *)(v5 + 0x14) + 0x14 * (a2 & 0xFFFFFF));
  if ( a3 )
  {
    v8 = *((float *)this + 0xC);
    *(_WORD *)(a3 + 6) = 1;
    v18 = v8;
    *(_DWORD *)(a3 + 8) = 0;
    *(_DWORD *)a3 = &hkNormalTriangleShape::`vftable';
    *(float *)(a3 + 0xC) = v18;
  }
  else
  {
    v4 = 0;
  }
  v9 = (float *)(*(_DWORD *)(*((_DWORD *)this + 4) + 0x18) + 0xC * *(unsigned __int16 *)v7);
  v20 = *v9;
  v10 = v9[1];
  v11 = v9[2];
  *(float *)(v4 + 0x10) = v20;
  *(float *)(v4 + 0x14) = v10;
  *(float *)(v4 + 0x18) = v11;
  v12 = (float *)(*(_DWORD *)(*((_DWORD *)this + 4) + 0x18) + 0xC * *((unsigned __int16 *)v7 + 1));
  v21 = *v12;
  v13 = v12[1];
  v14 = v12[2];
  *(float *)(v4 + 0x20) = v21;
  *(float *)(v4 + 0x24) = v13;
  *(float *)(v4 + 0x28) = v14;
  v15 = (float *)(*(_DWORD *)(*((_DWORD *)this + 4) + 0x18) + 0xC * *((unsigned __int16 *)v7 + 2));
  v22 = *v15;
  v16 = v15[1];
  v17 = v15[2];
  *(float *)(v4 + 0x30) = v22;
  *(float *)(v4 + 0x34) = v16;
  *(float *)(v4 + 0x38) = v17;
  if ( 1.0 != *((float *)this + 8) )
  {
    *(__m128 *)(v4 + 0x10) = _mm_mul_ps(*(this + 2), *(__m128 *)(v4 + 0x10));
    *(__m128 *)(v4 + 0x20) = _mm_mul_ps(*(this + 2), *(__m128 *)(v4 + 0x20));
    *(__m128 *)(v4 + 0x30) = _mm_mul_ps(*(__m128 *)(v4 + 0x30), *(this + 2));
  }
  *(float *)&v19 = v7[2];
  *((float *)&v19 + 1) = v7[3];
  *((float *)&v19 + 2) = v7[4];
  *(__int128 *)(v4 + 0x40) = v19;
  return v4;
}
