char __thiscall sub_74B7A0(float *this, int a2, NiPoint3 *a3, NiPoint3 *a4, NiPoint3 *a5)
{
  int v6; // eax
  int v8; // edi
  int v9; // esi
  int v10; // esi
  int v11; // edi
  int v12; // eax
  int v13; // ecx
  int v14; // ebx
  int v15; // edi
  int v16; // ebp
  int v17; // eax
  float v19; // ecx
  float v20; // edx
  double v21; // st7
  double v22; // st7
  __int64 v24; // [esp+1Ch] [ebp-48h] BYREF
  float v25; // [esp+24h] [ebp-40h]
  float v26; // [esp+28h] [ebp-3Ch] BYREF
  float v27; // [esp+2Ch] [ebp-38h]
  float v28; // [esp+30h] [ebp-34h]
  float v29; // [esp+34h] [ebp-30h] BYREF
  float v30; // [esp+38h] [ebp-2Ch]
  float v31; // [esp+3Ch] [ebp-28h]
  int v32; // [esp+40h] [ebp-24h] BYREF
  float v33; // [esp+44h] [ebp-20h]
  float v34; // [esp+48h] [ebp-1Ch]
  int v35[3]; // [esp+4Ch] [ebp-18h] BYREF
  int v36[3]; // [esp+58h] [ebp-Ch] BYREF
  float v37; // [esp+68h] [ebp+4h]
  float y; // [esp+68h] [ebp+4h]
  float v39; // [esp+6Ch] [ebp+8h]
  float v40; // [esp+6Ch] [ebp+8h]

  if ( !a3 || !(*(int (__thiscall **)(NiPoint3 *))(LODWORD(a3->x) + 0x10))(a3) ) /*0x74b7bc*/
    return 0; /*0x74bac2*/
  v6 = *(_DWORD *)(a2 + 8); /*0x74b7cb*/
  if ( !v6 ) /*0x74b7d0*/
    return 0; /*0x74b7d9*/
  v8 = *(unsigned __int16 *)(v6 + 8); /*0x74b7e2*/
  LODWORD(v24) = v8; /*0x74b7e5*/
  v37 = (double)rand() / dbl_A3D5A8; /*0x74b7fc*/
  v24 = (__int64)(v37 * (double)v8); /*0x74b821*/
  v9 = v24; /*0x74b825*/
  if ( (int)v24 >= v8 - 1 ) /*0x74b82f*/
    v9 = v8 - 1; /*0x74b831*/
  v10 = *(_DWORD *)(*(_DWORD *)(a2 + 8) + 0xC) + 0x2C * v9; /*0x74b839*/
  if ( !*(_WORD *)(v10 + 0x1E) ) /*0x74b83c*/
    return sub_74B220(this, a2, a3, (int)a4, a5); /*0x74b85f*/
  v11 = *(unsigned __int16 *)(v10 + 0x1E); /*0x74b862*/
  v24 = (__int64)(sub_53D460() * (double)v11); /*0x74b88c*/
  v12 = v24; /*0x74b890*/
  if ( (int)v24 >= v11 - 1 ) /*0x74b89a*/
    v12 = v11 - 1; /*0x74b89c*/
  y = a3[0xF].y; /*0x74b8a6*/
  if ( y == 0.0 ) /*0x74b8aa*/
    return 0; /*0x74b8b5*/
  v13 = *(_DWORD *)(v10 + 0x14); /*0x74b8bd*/
  if ( !*(_WORD *)(v10 + 0x22) ) /*0x74b8b8*/
    v12 *= 3; /*0x74b8d2*/
  v14 = *(unsigned __int16 *)(v13 + 2 * v12); /*0x74b8c2*/
  v15 = *(unsigned __int16 *)(v13 + 2 * v12 + 2); /*0x74b8c6*/
  v16 = *(unsigned __int16 *)(v13 + 2 * v12 + 4); /*0x74b8cb*/
  v17 = rand(); /*0x74b8e6*/
  if ( v17 % 3 == 1 ) /*0x74b8f6*/
  {
    v14 = v15; /*0x74b8ff*/
LABEL_19:
    v15 = v16; /*0x74b901*/
    goto LABEL_20; /*0x74b901*/
  }
  if ( v17 % 3 == 2 ) /*0x74b8fb*/
    goto LABEL_19; /*0x74b8fb*/
LABEL_20:
  sub_74A390((float *)&v24, (float *)v35, (int)a3, (_DWORD *)LODWORD(y), v10, v14); /*0x74b903*/
  sub_74A390(&v26, (float *)v36, (int)a3, (_DWORD *)LODWORD(y), v10, v15); /*0x74b938*/
  v29 = v26 + *(float *)&v24; /*0x74b94e*/
  v30 = *((float *)&v24 + 1) + v27; /*0x74b95a*/
  v31 = v25 + v28; /*0x74b966*/
  sub_4BF9B0(&v29, (float *)&v32, fConstant_2); /*0x74b974*/
  v19 = v33; /*0x74b981*/
  v20 = v34; /*0x74b985*/
  a4->x = *(float *)&v32; /*0x74b98d*/
  a4->y = v19; /*0x74b98f*/
  a4->z = v20; /*0x74b992*/
  if ( !*((_DWORD *)this + 0x1C) ) /*0x74b995*/
  {
    *(float *)&v32 = *(float *)v36 + *(float *)v35; /*0x74b9ac*/
    v33 = *(float *)&v35[1] + *(float *)&v36[1]; /*0x74b9b8*/
    v34 = *(float *)&v35[2] + *(float *)&v36[2]; /*0x74b9c4*/
    sub_4BF9B0((float *)&v32, (float *)v36, fConstant_2); /*0x74b9d2*/
    NiPoint3_NormalizeApproximateInPlace((float *)v36); /*0x74b9dc*/
    v39 = NiPoint3_Length(&a5->x); /*0x74b9eb*/
    *a5 = *(NiPoint3 *)sub_47DA10((float *)v35, v39, (float *)v36); /*0x74ba08*/
  }
  if ( *((_DWORD *)this + 0x1D) == 4 ) /*0x74ba1d*/
  {
    v29 = v26 - *(float *)&v24; /*0x74ba2b*/
    v30 = v27 - *((float *)&v24 + 1); /*0x74ba37*/
    v31 = v28 - v25; /*0x74ba43*/
    v40 = sub_53D460(); /*0x74ba4c*/
    v26 = v29 * v40; /*0x74ba5e*/
    v27 = v30 * v40; /*0x74ba68*/
    v28 = v40 * v31; /*0x74ba70*/
    v29 = v26 + *(float *)&v24; /*0x74ba7c*/
    v21 = v27; /*0x74ba84*/
    a4->x = v29; /*0x74ba88*/
    v30 = v21 + *((float *)&v24 + 1); /*0x74ba8e*/
    v22 = v28; /*0x74ba96*/
    a4->y = v30; /*0x74ba9a*/
    v31 = v22 + v25; /*0x74baa1*/
    a4->z = v31; /*0x74baa9*/
  }
  sub_74A0A0(this, a3, a4, a5); /*0x74bab1*/
  return 1; /*0x74b7d5*/
}
