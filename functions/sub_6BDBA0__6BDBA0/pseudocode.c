char __cdecl sub_6BDBA0(float a1, int a2, int a3, float a4, int *a5, char a6)
{
  double v6; // st7
  int v7; // ebx
  unsigned int v8; // edi
  double v9; // st6
  unsigned int v10; // ecx
  float *v11; // edi
  float *v12; // ebp
  float *v13; // ebx
  int v14; // edx
  double v15; // st6
  float v16; // ebp
  float *v17; // edx
  int v18; // edi
  int v19; // esi
  float v21; // [esp+20h] [ebp-10h]
  float v22; // [esp+20h] [ebp-10h]
  float v23; // [esp+20h] [ebp-10h]
  float v24; // [esp+20h] [ebp-10h]
  float v25; // [esp+20h] [ebp-10h]
  float v26; // [esp+20h] [ebp-10h]
  float v27; // [esp+24h] [ebp-Ch]
  float *v28; // [esp+28h] [ebp-8h]
  unsigned int v29; // [esp+2Ch] [ebp-4h]

  if ( LODWORD(a4) == 1 ) /*0x6bdbaa*/
    return *(_BYTE *)(a2 + 4); /*0x6bdbaa*/
  v6 = a1; /*0x6bdbb0*/
  if ( -flt_A7DEB4 == a1 ) /*0x6bdbc3*/
    return *(_BYTE *)(a2 + 4); /*0x6bddb2*/
  v7 = a2; /*0x6bdbd0*/
  v8 = LODWORD(a4) - 1; /*0x6bdbdc*/
  a4 = *(float *)a5; /*0x6bdbe4*/
  v29 = v8; /*0x6bdbe8*/
  v27 = *(float *)(LODWORD(a4) * (unsigned __int8)a6 + a2); /*0x6bdbef*/
  if ( v27 > v6 ) /*0x6bdbfe*/
  {
    v9 = *(float *)a2; /*0x6bdc00*/
    a4 = 0.0; /*0x6bdc02*/
    v27 = v9; /*0x6bdc0a*/
  }
  v10 = LODWORD(a4) + 1; /*0x6bdc12*/
  if ( (int)(v8 - LODWORD(a4)) < 4 ) /*0x6bdc1f*/
  {
    v15 = v21; /*0x6bdd76*/
LABEL_13:
    if ( v10 <= v8 ) /*0x6bdcf1*/
    {
      v16 = a4; /*0x6bdcf3*/
      v17 = (float *)(v7 + v10 * (unsigned __int8)a6); /*0x6bdcfc*/
      do /*0x6bdd21*/
      {
        v26 = *v17; /*0x6bdd02*/
        v15 = v26; /*0x6bdd06*/
        if ( v26 >= v6 ) /*0x6bdd11*/
          break; /*0x6bdd11*/
        ++v10; /*0x6bdd13*/
        v27 = v26; /*0x6bdd16*/
        ++LODWORD(v16); /*0x6bdd1a*/
        v17 = (float *)((char *)v17 + (unsigned __int8)a6); /*0x6bdd1d*/
      }
      while ( v10 <= v8 ); /*0x6bdd21*/
      a4 = v16; /*0x6bdd23*/
    }
  }
  else
  {
    v11 = (float *)(a2 + v10 * (unsigned __int8)a6); /*0x6bdc38*/
    v12 = (float *)(a2 + (unsigned __int8)a6 * (LODWORD(a4) + 3)); /*0x6bdc3a*/
    v13 = (float *)(a2 + (unsigned __int8)a6 * (LODWORD(a4) + 2)); /*0x6bdc42*/
    v14 = 4 * (unsigned __int8)a6; /*0x6bdc46*/
    v28 = (float *)(a2 + (unsigned __int8)a6 * (LODWORD(a4) + 4)); /*0x6bdc4d*/
    while ( 1 ) /*0x6bdc57*/
    {
      v22 = *v11; /*0x6bdc57*/
      v15 = v22; /*0x6bdc5b*/
      if ( v22 >= v6 ) /*0x6bdc66*/
        goto LABEL_21; /*0x6bdc66*/
      v27 = v22; /*0x6bdc6c*/
      v23 = *v13; /*0x6bdc72*/
      v15 = v23; /*0x6bdc76*/
      if ( v23 >= v6 ) /*0x6bdc81*/
      {
        ++v10; /*0x6bdd7f*/
        ++LODWORD(a4); /*0x6bdd82*/
LABEL_21:
        v7 = a2; /*0x6bdd87*/
        goto LABEL_18; /*0x6bdd8b*/
      }
      v27 = v23; /*0x6bdc87*/
      v24 = *v12; /*0x6bdc8e*/
      v15 = v24; /*0x6bdc92*/
      if ( v24 >= v6 ) /*0x6bdc9d*/
      {
        v7 = a2; /*0x6bdd8d*/
        v10 += 2; /*0x6bdd91*/
        LODWORD(a4) += 2; /*0x6bdd94*/
        goto LABEL_18; /*0x6bdd99*/
      }
      v27 = v24; /*0x6bdca7*/
      v25 = *v28; /*0x6bdcad*/
      v15 = v25; /*0x6bdcb1*/
      if ( v25 >= v6 ) /*0x6bdcbc*/
        break; /*0x6bdcbc*/
      v27 = v25; /*0x6bdcc6*/
      LODWORD(a4) += 4; /*0x6bdcca*/
      v28 = (float *)((char *)v28 + v14); /*0x6bdccf*/
      v10 += 4; /*0x6bdcd3*/
      v11 = (float *)((char *)v11 + v14); /*0x6bdcd9*/
      v13 = (float *)((char *)v13 + v14); /*0x6bdcdb*/
      v12 = (float *)((char *)v12 + v14); /*0x6bdcdd*/
      if ( v10 > v29 - 3 ) /*0x6bdce1*/
      {
        v7 = a2; /*0x6bdce7*/
        v8 = v29; /*0x6bdceb*/
        goto LABEL_13; /*0x6bdceb*/
      }
    }
    v7 = a2; /*0x6bdd9b*/
    v10 += 3; /*0x6bdd9f*/
    LODWORD(a4) += 3; /*0x6bdda2*/
  }
LABEL_18:
  v18 = LODWORD(a4); /*0x6bdd27*/
  v19 = v7 + LODWORD(a4) * (unsigned __int8)a6; /*0x6bdd3f*/
  a4 = (v6 - v27) / (v15 - v27); /*0x6bdd44*/
  (*(void (__cdecl **)(float, int, unsigned int, float *))(4 * a3 + 0xB3D070))( /*0x6bdd5f*/
    COERCE_FLOAT(LODWORD(a4)),
    v19,
    v7 + v10 * (unsigned __int8)a6,
    &a4);
  *a5 = v18; /*0x6bdd68*/
  return LOBYTE(a4); /*0x6bdd72*/
}
