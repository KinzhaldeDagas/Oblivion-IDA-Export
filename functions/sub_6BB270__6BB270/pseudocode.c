// Oblivion scalar key-track evaluator. Returns the sole/first value for one key or sentinel time; otherwise resumes from the caller cursor, rewinds to key 0 when sample time precedes it, finds the bracketing timestamps using the supplied key stride, computes normalized segment time, dispatches by interpolation type, and stores the lower-key cursor.
double __cdecl NiFloatKey_EvaluateTrack(float a1, float *a2, int a3, float a4, int *a5, char a6)
{
  double v6; // st7
  float *v7; // ebx
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
  char *v19; // esi
  double result; // st7
  float v21; // [esp+20h] [ebp-10h]
  float v22; // [esp+20h] [ebp-10h]
  float v23; // [esp+20h] [ebp-10h]
  float v24; // [esp+20h] [ebp-10h]
  float v25; // [esp+20h] [ebp-10h]
  float v26; // [esp+20h] [ebp-10h]
  float v27; // [esp+24h] [ebp-Ch]
  float *v28; // [esp+28h] [ebp-8h]
  unsigned int v29; // [esp+2Ch] [ebp-4h]

  if ( LODWORD(a4) == 1 ) /*0x6bb27a*/
    return a2[1]; /*0x6bb27a*/
  v6 = a1; /*0x6bb280*/
  if ( -flt_A7DEB4 == a1 ) /*0x6bb293*/
    return a2[1]; /*0x6bb482*/
  v7 = a2; /*0x6bb2a0*/
  v8 = LODWORD(a4) - 1; /*0x6bb2ac*/
  a4 = *(float *)a5; /*0x6bb2b4*/
  v29 = v8; /*0x6bb2b8*/
  v27 = *(float *)((char *)a2 + LODWORD(a4) * (unsigned __int8)a6); /*0x6bb2bf*/
  if ( v27 > v6 ) /*0x6bb2ce*/
  {
    v9 = *a2; /*0x6bb2d0*/
    a4 = 0.0; /*0x6bb2d2*/
    v27 = v9; /*0x6bb2da*/
  }
  v10 = LODWORD(a4) + 1; /*0x6bb2e2*/
  if ( (int)(v8 - LODWORD(a4)) < 4 ) /*0x6bb2ef*/
  {
    v15 = v21; /*0x6bb446*/
LABEL_13:
    if ( v10 <= v8 ) /*0x6bb3c1*/
    {
      v16 = a4; /*0x6bb3c3*/
      v17 = (float *)((char *)v7 + v10 * (unsigned __int8)a6); /*0x6bb3cc*/
      do /*0x6bb3f1*/
      {
        v26 = *v17; /*0x6bb3d2*/
        v15 = v26; /*0x6bb3d6*/
        if ( v26 >= v6 ) /*0x6bb3e1*/
          break; /*0x6bb3e1*/
        ++v10; /*0x6bb3e3*/
        v27 = v26; /*0x6bb3e6*/
        ++LODWORD(v16); /*0x6bb3ea*/
        v17 = (float *)((char *)v17 + (unsigned __int8)a6); /*0x6bb3ed*/
      }
      while ( v10 <= v8 ); /*0x6bb3f1*/
      a4 = v16; /*0x6bb3f3*/
    }
  }
  else
  {
    v11 = (float *)((char *)a2 + v10 * (unsigned __int8)a6); /*0x6bb308*/
    v12 = (float *)((char *)a2 + (unsigned __int8)a6 * (LODWORD(a4) + 3)); /*0x6bb30a*/
    v13 = (float *)((char *)a2 + (unsigned __int8)a6 * (LODWORD(a4) + 2)); /*0x6bb312*/
    v14 = 4 * (unsigned __int8)a6; /*0x6bb316*/
    v28 = (float *)((char *)a2 + (unsigned __int8)a6 * (LODWORD(a4) + 4)); /*0x6bb31d*/
    while ( 1 ) /*0x6bb327*/
    {
      v22 = *v11; /*0x6bb327*/
      v15 = v22; /*0x6bb32b*/
      if ( v22 >= v6 ) /*0x6bb336*/
        goto LABEL_21; /*0x6bb336*/
      v27 = v22; /*0x6bb33c*/
      v23 = *v13; /*0x6bb342*/
      v15 = v23; /*0x6bb346*/
      if ( v23 >= v6 ) /*0x6bb351*/
      {
        ++v10; /*0x6bb44f*/
        ++LODWORD(a4); /*0x6bb452*/
LABEL_21:
        v7 = a2; /*0x6bb457*/
        goto LABEL_18; /*0x6bb45b*/
      }
      v27 = v23; /*0x6bb357*/
      v24 = *v12; /*0x6bb35e*/
      v15 = v24; /*0x6bb362*/
      if ( v24 >= v6 ) /*0x6bb36d*/
      {
        v7 = a2; /*0x6bb45d*/
        v10 += 2; /*0x6bb461*/
        LODWORD(a4) += 2; /*0x6bb464*/
        goto LABEL_18; /*0x6bb469*/
      }
      v27 = v24; /*0x6bb377*/
      v25 = *v28; /*0x6bb37d*/
      v15 = v25; /*0x6bb381*/
      if ( v25 >= v6 ) /*0x6bb38c*/
        break; /*0x6bb38c*/
      v27 = v25; /*0x6bb396*/
      LODWORD(a4) += 4; /*0x6bb39a*/
      v28 = (float *)((char *)v28 + v14); /*0x6bb39f*/
      v10 += 4; /*0x6bb3a3*/
      v11 = (float *)((char *)v11 + v14); /*0x6bb3a9*/
      v13 = (float *)((char *)v13 + v14); /*0x6bb3ab*/
      v12 = (float *)((char *)v12 + v14); /*0x6bb3ad*/
      if ( v10 > v29 - 3 ) /*0x6bb3b1*/
      {
        v7 = a2; /*0x6bb3b7*/
        v8 = v29; /*0x6bb3bb*/
        goto LABEL_13; /*0x6bb3bb*/
      }
    }
    v7 = a2; /*0x6bb46b*/
    v10 += 3; /*0x6bb46f*/
    LODWORD(a4) += 3; /*0x6bb472*/
  }
LABEL_18:
  v18 = LODWORD(a4); /*0x6bb3f7*/
  v19 = (char *)v7 + LODWORD(a4) * (unsigned __int8)a6; /*0x6bb40f*/
  a4 = (v6 - v27) / (v15 - v27); /*0x6bb414*/
  (*(void (__cdecl **)(float, char *, unsigned int, float *))(4 * a3 + 0xB3CFF8))( /*0x6bb42f*/
    COERCE_FLOAT(LODWORD(a4)),
    v19,
    (unsigned int)v7 + v10 * (unsigned __int8)a6,
    &a4);
  result = a4; /*0x6bb435*/
  *a5 = v18; /*0x6bb43c*/
  return result; /*0x6bb442*/
}
