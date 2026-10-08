char __thiscall sub_74BCD0(float *this, NiPoint3 *a2, NiPoint3 *a3, NiPoint3 *a4)
{
  unsigned int v5; // ebx
  unsigned int v6; // eax
  int v7; // esi
  float x; // edi
  int v9; // eax
  int v10; // ebx
  int v12; // ecx
  int v13; // edx
  double v14; // st7
  int v15; // esi
  float v16; // edi
  double v17; // st6
  float v18; // eax
  double v19; // st5
  double v22; // st4
  double v23; // st3
  double v24; // st3
  float v25; // eax
  float v26; // ecx
  float v27; // eax
  float v28; // ecx
  float v29; // edx
  double v30; // st6
  float v31; // ecx
  float v32; // edx
  double v33; // st6
  double v34; // st7
  double v35; // st6
  float v36; // eax
  double v37; // st5
  double v38; // rt1
  double v39; // st5
  double v40; // rt2
  float *v41; // esi
  double v42; // st7
  double v43; // st7
  NiRTTI *v44; // eax
  int v45; // [esp+10h] [ebp-68h] BYREF
  int v46; // [esp+14h] [ebp-64h] BYREF
  int v47; // [esp+18h] [ebp-60h] BYREF
  int i; // [esp+1Ch] [ebp-5Ch]
  float *v49; // [esp+20h] [ebp-58h]
  float v50; // [esp+24h] [ebp-54h] BYREF
  float v51; // [esp+28h] [ebp-50h]
  float v52; // [esp+2Ch] [ebp-4Ch]
  float v53; // [esp+30h] [ebp-48h]
  float v54; // [esp+34h] [ebp-44h]
  float v55; // [esp+38h] [ebp-40h]
  float v56; // [esp+3Ch] [ebp-3Ch]
  float v57; // [esp+40h] [ebp-38h]
  float v58; // [esp+44h] [ebp-34h]
  float v59; // [esp+48h] [ebp-30h]
  float v60; // [esp+4Ch] [ebp-2Ch]
  float v61; // [esp+50h] [ebp-28h]
  float v62; // [esp+54h] [ebp-24h]
  float v63; // [esp+58h] [ebp-20h]
  float v64; // [esp+5Ch] [ebp-1Ch]
  float v65; // [esp+60h] [ebp-18h]
  float v66; // [esp+64h] [ebp-14h]
  float v67; // [esp+68h] [ebp-10h]
  float v68; // [esp+6Ch] [ebp-Ch]
  float v69; // [esp+70h] [ebp-8h]
  float v70; // [esp+74h] [ebp-4h]
  float v71; // [esp+80h] [ebp+8h]
  float v72; // [esp+84h] [ebp+Ch]
  float v73; // [esp+84h] [ebp+Ch]
  float v74; // [esp+84h] [ebp+Ch]
  float v75; // [esp+84h] [ebp+Ch]

  v49 = this; /*0x74bce0*/
  v45 = 0; /*0x74bce4*/
  v46 = 0; /*0x74bce8*/
  v47 = 0; /*0x74bcec*/
  if ( !a2 ) /*0x74bcf0*/
    return 0; /*0x74bcf0*/
  if ( (*(int (__thiscall **)(NiPoint3 *))(LODWORD(a2->x) + 0x10))(a2) ) /*0x74bcfd*/
  {
    v5 = (*(unsigned __int16 (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(a2[0xF].x) + 0x5C))(LODWORD(a2[0xF].x)); /*0x74bd15*/
    v6 = rand(); /*0x74bd18*/
    v7 = v6 % v5; /*0x74bd21*/
    if ( v6 % v5 == v5 ) /*0x74bd25*/
      v7 = v5 - 1; /*0x74bd27*/
    for ( i = 0; i < 6; ++i ) /*0x74bd2a*/
    {
      (*(void (__thiscall **)(_DWORD, int, int *, int *, int *))(*(_DWORD *)LODWORD(a2[0xF].x) + 0x60))( /*0x74bd4b*/
        LODWORD(a2[0xF].x),
        v7,
        &v45,
        &v46,
        &v47);
      if ( (_WORD)v45 != (_WORD)v46 && (_WORD)v45 != (_WORD)v47 && (_WORD)v46 != (_WORD)v47 ) /*0x74bd66*/
        break; /*0x74bd66*/
      if ( ++v7 >= v5 ) /*0x74bd6d*/
        v7 = 0; /*0x74bd6f*/
    }
    x = a2[0xF].x; /*0x74bd81*/
    v9 = *(_DWORD *)(LODWORD(x) + 0x1C); /*0x74bd87*/
    v10 = *(_DWORD *)(LODWORD(x) + 0x20); /*0x74bd8c*/
    if ( !v9 ) /*0x74bd8f*/
      return 0; /*0x74bd94*/
    v12 = 0xC * (unsigned __int16)v45; /*0x74bda5*/
    v53 = *(float *)(v12 + v9); /*0x74bdaa*/
    v54 = *(float *)(v12 + v9 + 4); /*0x74bdb2*/
    v55 = *(float *)(v12 + v9 + 8); /*0x74bdbd*/
    v13 = 0xC * (unsigned __int16)v46; /*0x74bdc6*/
    v56 = *(float *)(v13 + v9); /*0x74bdcb*/
    v57 = *(float *)(v13 + v9 + 4); /*0x74bdd7*/
    v58 = *(float *)(v13 + v9 + 8); /*0x74bde5*/
    v14 = v53; /*0x74bdee*/
    v50 = v56 + v53; /*0x74bdf0*/
    v15 = 0xC * (unsigned __int16)v47; /*0x74be01*/
    v59 = *(float *)(v15 + v9); /*0x74be0a*/
    v16 = *(float *)(v15 + v9 + 4); /*0x74be0e*/
    v17 = v54; /*0x74be12*/
    v18 = *(float *)(v15 + v9 + 8); /*0x74be14*/
    v51 = v57 + v54; /*0x74be18*/
    v60 = v16; /*0x74be1c*/
    v19 = v55; /*0x74be20*/
    v61 = v18; /*0x74be2d*/
    v52 = v55 + v58; /*0x74be3c*/
    v62 = v50 + v59; /*0x74be48*/
    v63 = v60 + v51; /*0x74be54*/
    v64 = v18 + v52; /*0x74be60*/
    v22 = dbl_A7C030; /*0x74be70*/
    v50 = v62 * v22; /*0x74be72*/
    v23 = v63; /*0x74be7a*/
    a3->x = v50; /*0x74be7e*/
    v51 = v23 * v22; /*0x74be82*/
    v24 = v64; /*0x74be8a*/
    a3->y = v51; /*0x74be8e*/
    v52 = v24 * v22; /*0x74be93*/
    a3->z = v52; /*0x74be9b*/
    if ( !*((_DWORD *)v49 + 0x1C) ) /*0x74bea2*/
    {
      if ( v10 ) /*0x74beae*/
      {
        v62 = *(float *)(v12 + v10); /*0x74bebb*/
        v25 = *(float *)(v12 + v10 + 4); /*0x74bebf*/
        v26 = *(float *)(v12 + v10 + 8); /*0x74bec5*/
        v63 = v25; /*0x74bec9*/
        v50 = *(float *)(v13 + v10); /*0x74bed0*/
        v27 = *(float *)(v15 + v10); /*0x74bedc*/
        v64 = v26; /*0x74bedf*/
        v28 = *(float *)(v13 + v10 + 4); /*0x74bee3*/
        v29 = *(float *)(v13 + v10 + 8); /*0x74bee7*/
        v68 = v50 + v62; /*0x74beeb*/
        v51 = v28; /*0x74bef3*/
        v30 = v63 + v28; /*0x74bef7*/
        v31 = *(float *)(v15 + v10 + 4); /*0x74befb*/
        v52 = v29; /*0x74beff*/
        v32 = *(float *)(v15 + v10 + 8); /*0x74bf03*/
        v69 = v30; /*0x74bf07*/
        v65 = v27; /*0x74bf0b*/
        v66 = v31; /*0x74bf13*/
        v67 = v32; /*0x74bf1b*/
        v70 = v64 + v52; /*0x74bf24*/
        v62 = v68 + v27; /*0x74bf30*/
        v63 = v31 + v69; /*0x74bf3c*/
        v64 = v32 + v70; /*0x74bf48*/
        v50 = v62 * v22; /*0x74bf52*/
        v51 = v63 * v22; /*0x74bf5c*/
        v52 = v22 * v64; /*0x74bf64*/
        NiPoint3_NormalizeApproximateInPlace(&v50); /*0x74bf68*/
        v72 = a4->y * a4->y + a4->x * a4->x + a4->z * a4->z; /*0x74bf89*/
        v73 = sqrt(v72); /*0x74bf9c*/
        v68 = v50 * v73; /*0x74bfc2*/
        v33 = v51; /*0x74bfca*/
        a4->x = v68; /*0x74bfce*/
        v69 = v33 * v73; /*0x74bfd3*/
        v70 = v73 * v52; /*0x74bfdb*/
        v34 = v55; /*0x74bfdf*/
        v35 = v53; /*0x74bfe7*/
        v36 = v70; /*0x74bfeb*/
        v37 = v54; /*0x74bfef*/
        a4->y = v69; /*0x74bff3*/
        v38 = v37; /*0x74bff6*/
        v39 = v35; /*0x74bff6*/
        v17 = v38; /*0x74bff6*/
        a4->z = v36; /*0x74bff8*/
        v40 = v39; /*0x74bffb*/
        v19 = v34; /*0x74bffb*/
        v14 = v40; /*0x74bffb*/
      }
    }
    v41 = v49; /*0x74bffd*/
    if ( *((_DWORD *)v49 + 0x1D) == 3 ) /*0x74c005*/
    {
      v50 = v56 - v14; /*0x74c011*/
      v51 = v57 - v17; /*0x74c01b*/
      v52 = v58 - v19; /*0x74c025*/
      v56 = v59 - v14; /*0x74c031*/
      v57 = v60 - v17; /*0x74c039*/
      v58 = v61 - v19; /*0x74c041*/
      v74 = (double)rand() / dbl_A3D5A8; /*0x74c05e*/
      v50 = v50 * v74; /*0x74c076*/
      v51 = v51 * v74; /*0x74c080*/
      v52 = v74 * v52; /*0x74c088*/
      v71 = (double)rand() / dbl_A3D5A8; /*0x74c0a7*/
      v75 = v71 * (1.0 - v74); /*0x74c0c2*/
      v56 = v56 * v75; /*0x74c0da*/
      v57 = v57 * v75; /*0x74c0e4*/
      v58 = v75 * v58; /*0x74c0ec*/
      v68 = v50 + v53; /*0x74c0f8*/
      v69 = v51 + v54; /*0x74c104*/
      v70 = v52 + v55; /*0x74c110*/
      v65 = v68 + v56; /*0x74c11c*/
      v42 = v69; /*0x74c124*/
      a3->x = v65; /*0x74c128*/
      v66 = v42 + v57; /*0x74c12e*/
      v43 = v70; /*0x74c136*/
      a3->y = v66; /*0x74c13a*/
      v67 = v43 + v58; /*0x74c141*/
      a3->z = v67; /*0x74c149*/
      sub_74A0A0(v41, a2, a3, a4); /*0x74c156*/
    }
    else
    {
      sub_74A0A0(v49, a2, a3, a4); /*0x74c17d*/
    }
    return 1; /*0x74bd9a*/
  }
  v44 = (NiRTTI *)(*(int (__thiscall **)(NiPoint3 *))(LODWORD(a2->x) + 4))(a2); /*0x74c195*/
  if ( !v44 ) /*0x74c199*/
    return 0; /*0x74c1b6*/
  while ( v44 != &stru_B3FCDC ) /*0x74c1a5*/
  {
    v44 = v44->parent; /*0x74c1a7*/
    if ( !v44 ) /*0x74c1ac*/
      return 0; /*0x74c1ac*/
  }
  return sub_74AE30(this, *(float *)&a2, a3, a4); /*0x74bd92*/
}
