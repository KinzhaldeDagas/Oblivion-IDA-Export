int __thiscall sub_9558D0(float *this, int a2, _DWORD *a3, int *a4, int *a5)
{
  __m128 *v6; // ecx
  int v7; // ebx
  int v8; // edx
  int v9; // edi
  int v10; // eax
  int v11; // ebx
  int v12; // ecx
  int v13; // edi
  int result; // eax
  __m128 v15; // xmm0
  float v16; // xmm2_4
  double v17; // st5
  double v18; // st4
  double v19; // st6
  double v20; // st5
  double v21; // st7
  int v22; // esi
  unsigned int v23; // [esp+0h] [ebp-44h]
  unsigned int v24; // [esp+0h] [ebp-44h]
  unsigned int v25; // [esp+0h] [ebp-44h]
  unsigned int v26; // [esp+0h] [ebp-44h]
  unsigned int v27; // [esp+0h] [ebp-44h]
  unsigned int v28; // [esp+0h] [ebp-44h]
  unsigned int v29; // [esp+0h] [ebp-44h]
  unsigned int v30; // [esp+0h] [ebp-44h]
  int v31; // [esp+14h] [ebp-30h]
  unsigned int v32; // [esp+18h] [ebp-2Ch]
  double v33; // [esp+1Ch] [ebp-28h]
  double v34; // [esp+1Ch] [ebp-28h]
  double v35; // [esp+24h] [ebp-20h]
  double v36; // [esp+24h] [ebp-20h]
  __m128 v37; // [esp+34h] [ebp-10h]
  double v38; // [esp+34h] [ebp-10h]
  __m128 v39; // 0:^24.16

  v6 = *(__m128 **)(a2 + 0xB8); /*0x9558e1*/
  v7 = 0; /*0x9558e9*/
  v8 = 0; /*0x9558f1*/
  v31 = 0; /*0x9558f5*/
  if ( v6->m128_f32[0] != *(float *)&SrcStr ) /*0x955900*/
  {
    v8 = 1; /*0x955908*/
    v31 = v6->m128_f32[0] < (double)*(float *)&SrcStr; /*0x955914*/
  }
  if ( v6->m128_f32[1] != *(float *)&SrcStr ) /*0x95592e*/
  {
    ++v8; /*0x955936*/
    v7 = 1; /*0x955937*/
    if ( v6->m128_f32[1] < (double)*(float *)&SrcStr ) /*0x955941*/
      ++v31; /*0x955943*/
  }
  if ( v6->m128_f32[2] != *(float *)&SrcStr ) /*0x95595d*/
  {
    ++v8; /*0x955965*/
    v7 = 2; /*0x955966*/
    if ( v6->m128_f32[2] < (double)*(float *)&SrcStr ) /*0x955970*/
      ++v31; /*0x955972*/
  }
  v33 = *(float *)(a2 + 0xC0); /*0x955989*/
  if ( v8 == 1 ) /*0x95598d*/
  {
    *(float *)&v23 = (*(float *)(a2 + 0xBC) - *(this + v7 + 0xC)) * *(this + 0xF); /*0x95599d*/
    *(float *)&v24 = sub_8ECA90(v23); /*0x9559a5*/
    v9 = sub_8ECB30(v24); /*0x9559b0*/
    *(float *)&v25 = *(this + 0xF) * (v33 - *(this + v7 + 0xC)); /*0x9559bc*/
    *(float *)&v26 = sub_8ECA90(v25); /*0x9559c4*/
    v10 = sub_8ECB30(v26); /*0x9559c7*/
    v11 = a3[v7 + 0xA]; /*0x9559cf*/
    v12 = a3[9]; /*0x9559d3*/
    v13 = (v9 - v11) >> v12; /*0x9559dc*/
    result = ((v10 - v11) >> v12) + 1; /*0x9559e1*/
    if ( v13 > 0 ) /*0x9559e4*/
    {
      if ( v13 >= 0xFF ) /*0x9559f0*/
        v13 = 0xFF; /*0x9559f2*/
    }
    else
    {
      v13 = 0; /*0x9559e6*/
    }
    if ( result > 0 ) /*0x9559f9*/
    {
      if ( result >= 0xFF ) /*0x955a04*/
        result = 0xFF; /*0x955a06*/
    }
    else
    {
      result = 0; /*0x9559fb*/
    }
    *a5 = v13; /*0x955a11*/
    *a4 = result; /*0x955a13*/
    if ( *a5 < 0 ) /*0x955a18*/
      *a5 = 0; /*0x955a1e*/
    return result; /*0x955a2a*/
  }
  v39 = *((__m128 *)this + 3); /*0x955a38*/
  v37.m128_f32[0] = (float)(int)a3[0xA]; /*0x955a3c*/
  v37.m128_f32[1] = (float)(int)a3[0xB]; /*0x955a50*/
  v37.m128_i32[3] = 0; /*0x955a5b*/
  v37.m128_f32[2] = (float)(int)a3[0xC]; /*0x955a6c*/
  *(float *)&v32 = fConstant_1 / v39.m128_f32[3]; /*0x955a7e*/
  v15 = _mm_mul_ps(*v6, _mm_add_ps(v39, _mm_mul_ps(_mm_shuffle_ps((__m128)v32, (__m128)v32, 0), v37))); /*0x955aa0*/
  v16 = _mm_shuffle_ps(v15, v15, 0xAA).m128_f32[0] /*0x955ab9*/
      + (float)(_mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0]);
  v17 = dbl_A2F928 / (double)(1 << a3[9]); /*0x955ad5*/
  v35 = (*(float *)(a2 + 0xBC) - v16) * v39.m128_f32[3] * v17; /*0x955ae6*/
  v18 = (v33 - v16) * v39.m128_f32[3] * v17; /*0x955af2*/
  v19 = dbl_A2F928; /*0x955afa*/
  v38 = v19; /*0x955b06*/
  if ( v8 == 2 ) /*0x955b0a*/
  {
    v19 = dbl_A3D660; /*0x955b0e*/
    v20 = dbl_A2FAA0; /*0x955b14*/
LABEL_24:
    v38 = v20; /*0x955b2f*/
    goto LABEL_25; /*0x955b2f*/
  }
  if ( v8 == 3 ) /*0x955b1f*/
  {
    v19 = dbl_A77B58; /*0x955b23*/
    v20 = dbl_AA3548; /*0x955b29*/
    goto LABEL_24; /*0x955b29*/
  }
LABEL_25:
  v36 = v35 * v19; /*0x955b33*/
  v34 = v19 * v18; /*0x955b45*/
  if ( v31 ) /*0x955b4b*/
  {
    v21 = (double)(0xFF * v31); /*0x955b57*/
    v36 = v36 + v21; /*0x955b61*/
    v34 = v21 + v34; /*0x955b69*/
  }
  *(float *)&v27 = v38 * v36; /*0x955b76*/
  *(float *)&v28 = sub_8ECA90(v27); /*0x955b7e*/
  v22 = sub_8ECB30(v28); /*0x955b8e*/
  *(float *)&v29 = v38 * v34; /*0x955b90*/
  *(float *)&v30 = sub_8ECA90(v29); /*0x955b98*/
  result = sub_8ECB30(v30) + 1; /*0x955ba3*/
  if ( v22 > 0 ) /*0x955ba6*/
  {
    if ( v22 >= 0xFF ) /*0x955bb2*/
      v22 = 0xFF; /*0x955bb4*/
  }
  else
  {
    v22 = 0; /*0x955ba8*/
  }
  if ( result > 0 ) /*0x955bbb*/
  {
    if ( result >= 0xFF ) /*0x955bd7*/
      result = 0xFF; /*0x955bd9*/
    *a5 = v22; /*0x955be4*/
    *a4 = result; /*0x955be6*/
  }
  else
  {
    *a5 = v22; /*0x955bc5*/
    *a4 = 0; /*0x955bc7*/
    return 0; /*0x955bc3*/
  }
  return result; /*0x955a24*/
}
