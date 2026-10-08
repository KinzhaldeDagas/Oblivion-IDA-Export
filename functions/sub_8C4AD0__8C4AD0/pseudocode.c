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

  v4 = a3; /*0x8c4ae9*/
  v5 = *((_DWORD *)this + 4); /*0x8c4aed*/
  if ( (a2 & 0xFFFFFFu) >= *(_DWORD *)(v5 + 8) ) /*0x8c4af9*/
    return 0; /*0x8c4afb*/
  v7 = (float *)(*(_DWORD *)(v5 + 0x14) + 0x14 * (a2 & 0xFFFFFF)); /*0x8c4b18*/
  if ( a3 ) /*0x8c4b1b*/
  {
    v8 = *((float *)this + 0xC); /*0x8c4b1d*/
    *(_WORD *)(a3 + 6) = 1; /*0x8c4b20*/
    v18 = v8; /*0x8c4b26*/
    *(_DWORD *)(a3 + 8) = 0; /*0x8c4b2a*/
    *(_DWORD *)a3 = &hkNormalTriangleShape::`vftable'; /*0x8c4b35*/
    *(float *)(a3 + 0xC) = v18; /*0x8c4b3b*/
  }
  else
  {
    v4 = 0; /*0x8c4b40*/
  }
  v9 = (float *)(*(_DWORD *)(*((_DWORD *)this + 4) + 0x18) + 0xC * *(unsigned __int16 *)v7); /*0x8c4b4e*/
  v20 = *v9; /*0x8c4b53*/
  v10 = v9[1]; /*0x8c4b57*/
  v11 = v9[2]; /*0x8c4b5a*/
  *(float *)(v4 + 0x10) = v20; /*0x8c4b65*/
  *(float *)(v4 + 0x14) = v10; /*0x8c4b70*/
  *(float *)(v4 + 0x18) = v11; /*0x8c4b77*/
  v12 = (float *)(*(_DWORD *)(*((_DWORD *)this + 4) + 0x18) + 0xC * *((unsigned __int16 *)v7 + 1)); /*0x8c4b87*/
  v21 = *v12; /*0x8c4b8c*/
  v13 = v12[1]; /*0x8c4b90*/
  v14 = v12[2]; /*0x8c4b93*/
  *(float *)(v4 + 0x20) = v21; /*0x8c4b9e*/
  *(float *)(v4 + 0x24) = v13; /*0x8c4ba9*/
  *(float *)(v4 + 0x28) = v14; /*0x8c4bb0*/
  v15 = (float *)(*(_DWORD *)(*((_DWORD *)this + 4) + 0x18) + 0xC * *((unsigned __int16 *)v7 + 2)); /*0x8c4bc0*/
  v22 = *v15; /*0x8c4bc5*/
  v16 = v15[1]; /*0x8c4bc9*/
  v17 = v15[2]; /*0x8c4bcc*/
  *(float *)(v4 + 0x30) = v22; /*0x8c4bd7*/
  *(float *)(v4 + 0x34) = v16; /*0x8c4be2*/
  *(float *)(v4 + 0x38) = v17; /*0x8c4be9*/
  if ( 1.0 != *((float *)this + 8) ) /*0x8c4c01*/
  {
    *(__m128 *)(v4 + 0x10) = _mm_mul_ps(*(this + 2), *(__m128 *)(v4 + 0x10)); /*0x8c4c0e*/
    *(__m128 *)(v4 + 0x20) = _mm_mul_ps(*(this + 2), *(__m128 *)(v4 + 0x20)); /*0x8c4c1d*/
    *(__m128 *)(v4 + 0x30) = _mm_mul_ps(*(__m128 *)(v4 + 0x30), *(this + 2)); /*0x8c4c2c*/
  }
  *(float *)&v19 = v7[2]; /*0x8c4c35*/
  *((float *)&v19 + 1) = v7[3]; /*0x8c4c3d*/
  *((float *)&v19 + 2) = v7[4]; /*0x8c4c45*/
  *(__int128 *)(v4 + 0x40) = v19; /*0x8c4c4e*/
  return v4; /*0x8c4afd*/
}
