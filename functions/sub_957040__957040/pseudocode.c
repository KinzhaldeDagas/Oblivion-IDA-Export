int __thiscall sub_957040(_DWORD *this, int a2, int a3, unsigned int **a4, float *a5, int a6)
{
  int v7; // ecx
  unsigned int *v9; // ebp
  double v10; // st7
  unsigned int *v11; // ecx
  int v12; // edi
  double v13; // st7
  int v14; // edx
  unsigned int *v15; // eax
  unsigned int v16; // eax
  _DWORD *v17; // eax
  int v18; // ecx
  int v19; // edx
  _DWORD *v20; // ebx
  int result; // eax
  unsigned int *v22; // [esp+Ch] [ebp-44h]
  int v23; // [esp+10h] [ebp-40h] BYREF
  _DWORD v24[4]; // [esp+14h] [ebp-3Ch] BYREF
  float v25; // [esp+24h] [ebp-2Ch]
  int v26; // [esp+28h] [ebp-28h]
  unsigned int *v27; // [esp+2Ch] [ebp-24h]
  float v28; // [esp+30h] [ebp-20h]
  float v29; // [esp+34h] [ebp-1Ch]
  int v30; // [esp+38h] [ebp-18h]
  unsigned int v31; // [esp+3Ch] [ebp-14h]
  unsigned int v32; // [esp+40h] [ebp-10h]
  unsigned int *v33; // [esp+5Ch] [ebp+Ch]
  int v34; // [esp+5Ch] [ebp+Ch]

  v7 = *(this + 0xE); /*0x95704a*/
  v24[0] = a6; /*0x95704d*/
  v24[1] = v7; /*0x957055*/
  *(float *)&v24[3] = a5[1]; /*0x957062*/
  v33 = a4[1]; /*0x957069*/
  v9 = a4[2]; /*0x957073*/
  *(float *)&v24[2] = *a5; /*0x957076*/
  v10 = fConstant_1 / (double)(int)v33; /*0x95707a*/
  v27 = v33; /*0x957084*/
  v11 = *a4; /*0x957088*/
  v30 = a3; /*0x95708a*/
  v12 = 0; /*0x95708f*/
  v23 = 0; /*0x957091*/
  v22 = v9; /*0x957095*/
  v28 = v10; /*0x957099*/
  v13 = a5[1] - *a5; /*0x9570a0*/
  v31 = *v11; /*0x9570a4*/
  v32 = *v11; /*0x9570aa*/
  if ( v13 >= flt_A37080 ) /*0x9570b9*/
    v25 = fConstant_1 / v13; /*0x9570cd*/
  else
    v25 = 1.0; /*0x9570bb*/
  v14 = *(this + 2); /*0x9570d1*/
  if ( (int)v9 > *(_DWORD *)(v14 + 8) ) /*0x9570db*/
  {
    v9 = *(unsigned int **)(v14 + 8); /*0x9570dd*/
    v22 = v9; /*0x9570df*/
  }
  if ( (int)a4[1] > 0 ) /*0x9570e6*/
  {
    v34 = 0; /*0x9570ec*/
    do /*0x95717d*/
    {
      v15 = &(*a4)[v34]; /*0x9570fa*/
      v26 = v12; /*0x9570fc*/
      LODWORD(v29) = v15[2]; /*0x957103*/
      if ( v31 >= *v15 ) /*0x95710b*/
        v31 = *v15; /*0x95710d*/
      v16 = *v15; /*0x957111*/
      if ( v32 <= v16 ) /*0x957117*/
        v32 = v16; /*0x957119*/
      sub_956B20((int *)*(this + 3), v29); /*0x957125*/
      v17 = (_DWORD *)*(this + 3); /*0x95712a*/
      v18 = *v17 - 1; /*0x95712f*/
      if ( v18 > (int)v9 ) /*0x957132*/
      {
        do /*0x957152*/
        {
          v19 = v17[2]; /*0x957134*/
          v17[3] = *(_DWORD *)(v19 + 4 * v18); /*0x95713d*/
          v9 = v22; /*0x957140*/
          *(_DWORD *)(v19 + 4 * v18--) = 0; /*0x957144*/
          --*v17; /*0x957150*/
        }
        while ( v18 > (int)v22 ); /*0x957152*/
      }
      sub_956C30((int)this, v13, v12++, a2, &v23, v24, a4); /*0x957167*/
      v34 += 4; /*0x957179*/
    }
    while ( v12 < (int)a4[1] ); /*0x95717d*/
  }
  v20 = (_DWORD *)*(this + 3); /*0x957185*/
  for ( result = *v20 - 1; result > 0; --result ) /*0x95718d*/
    *(_DWORD *)(v20[2] + 4 * result) = 0; /*0x957193*/
  v20[3] = 0; /*0x95719b*/
  *v20 = 0; /*0x95719e*/
  return result; /*0x9571a1*/
}
