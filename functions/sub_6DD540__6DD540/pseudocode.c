float *__thiscall sub_6DD540(float *this, float a2, unsigned int *a3, int *a4, float *a5)
{
  int v6; // eax
  float v7; // esi
  double v9; // st7
  double v10; // st6
  unsigned int v11; // esi
  int v12; // edi
  double v13; // st7
  float *v14; // edx
  int v15; // eax
  double v16; // st7
  bool v17; // cc
  float v18; // [esp+0h] [ebp-2Ch]
  float v19; // [esp+14h] [ebp-18h]
  double v20; // [esp+14h] [ebp-18h]
  float v21; // [esp+1Ch] [ebp-10h]
  float v22; // [esp+20h] [ebp-Ch]
  float v23; // [esp+20h] [ebp-Ch]
  int v24; // [esp+20h] [ebp-Ch]
  float v25; // [esp+24h] [ebp-8h]
  float v26; // [esp+24h] [ebp-8h]
  float v27; // [esp+34h] [ebp+8h]

  v6 = *((_DWORD *)this + 0x12); /*0x6dd54c*/
  if ( v6 ) /*0x6dd553*/
  {
    v7 = *(float *)(v6 + 8); /*0x6dd555*/
    v19 = v7; /*0x6dd558*/
  }
  else
  {
    v19 = 0.0; /*0x6dd55e*/
    v7 = 0.0; /*0x6dd566*/
  }
  if ( a2 == 0.0 ) /*0x6dd57a*/
  {
    *a3 = 0; /*0x6dd587*/
    *a4 = 1; /*0x6dd58d*/
    *a5 = 0.0; /*0x6dd593*/
    return (float *)a3; /*0x6dd57c*/
  }
  else
  {
    v9 = a2; /*0x6dd5a2*/
    v10 = 1.0; /*0x6dd5a7*/
    if ( a2 < 0.0 ) /*0x6dd5a9*/
    {
      unknown_libname_14(1.0, v9); /*0x6dd5ab*/
      v27 = a2 + 1.0; /*0x6dd5be*/
      v10 = 1.0; /*0x6dd5c4*/
      v9 = v27; /*0x6dd5c4*/
    }
    if ( 1.0 == v9 ) /*0x6dd5d1*/
    {
      *a3 = LODWORD(v7) - 2; /*0x6dd5e0*/
      *a4 = LODWORD(v7) - 1; /*0x6dd5e8*/
      *a5 = 1.0; /*0x6dd5ea*/
      return a5; /*0x6dd5e2*/
    }
    else
    {
      if ( v9 > 1.0 ) /*0x6dd5fc*/
      {
        unknown_libname_14(v10, v9); /*0x6dd5fe*/
        v22 = v9; /*0x6dd603*/
        v9 = v22; /*0x6dd60e*/
      }
      v11 = 0; /*0x6dd61c*/
      v12 = 1; /*0x6dd625*/
      if ( LODWORD(v19) != 1 ) /*0x6dd62a*/
      {
        v23 = v9 * *(this + 0x15); /*0x6dd621*/
        v13 = v23; /*0x6dd62f*/
        v14 = (float *)(*((_DWORD *)this + 0x14) + 4); /*0x6dd633*/
        while ( *v14 < v13 ) /*0x6dd63f*/
        {
          ++v11; /*0x6dd641*/
          ++v12; /*0x6dd644*/
          ++v14; /*0x6dd647*/
          if ( v11 >= LODWORD(v19) - 1 ) /*0x6dd64c*/
            goto LABEL_18; /*0x6dd64c*/
        }
        v15 = *((_DWORD *)this + 0x14); /*0x6dd652*/
        v21 = v13 - *(float *)(v15 + 4 * v11); /*0x6dd658*/
        v19 = v21 / (*(float *)(v15 + 4 * v12) - *(float *)(v15 + 4 * v11)); /*0x6dd668*/
      }
LABEL_18:
      v24 = 0; /*0x6dd66c*/
      do /*0x6dd6df*/
      {
        v25 = sub_6DD180(this, v11, v12, v19) - v21; /*0x6dd689*/
        v16 = v25; /*0x6dd68d*/
        v26 = fabs(v25); /*0x6dd695*/
        if ( v26 <= dbl_A68FE0 ) /*0x6dd6a8*/
          break; /*0x6dd6a8*/
        v20 = v19; /*0x6dd6af*/
        v18 = v20; /*0x6dd6bb*/
        v17 = ++v24 < 0x20; /*0x6dd6d0*/
        v19 = v20 - v16 / sub_6DD0F0(this, v11, v12, v18); /*0x6dd6db*/
      }
      while ( v17 ); /*0x6dd6df*/
      *a3 = v11; /*0x6dd6f2*/
      *a4 = v12; /*0x6dd6f4*/
      *a5 = v19; /*0x6dd6f6*/
      return a5; /*0x6dd6ef*/
    }
  }
}
