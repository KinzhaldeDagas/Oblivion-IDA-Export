void __userpurge sub_924F40(int a1@<ecx>, int a2@<ebx>, int a3, int *a4)
{
  char v5; // al
  __m128 *v6; // ecx
  __m128 v7; // xmm1
  __m128 v8; // xmm2
  __m128 v9; // xmm3
  __m128 *v10; // eax
  int v11; // ebx
  __m128 v12; // xmm0
  __m128 *v13; // ecx
  __m128 v14; // xmm1
  __m128 v15; // xmm2
  __m128 v16; // xmm3
  __m128 *v17; // eax
  int v18; // ebx
  int v19; // eax
  int v20; // eax
  _DWORD *v21; // ebx
  int v22; // edx
  int v23; // ecx
  __m128 v24; // xmm1
  __m128 v25; // xmm0
  float v26; // xmm4_4
  __m128 v27; // xmm3
  float v28; // xmm5_4
  __m128 v29; // xmm0
  __m128 v30; // xmm1
  __m128 v31; // xmm0
  int v32; // ecx
  int v33; // ecx
  __int32 v34; // eax
  int v35; // [esp+0h] [ebp-120h] BYREF
  __m128 v36; // [esp+10h] [ebp-110h] BYREF
  int v37; // [esp+20h] [ebp-100h]
  int v38; // [esp+24h] [ebp-FCh] BYREF
  int v39; // [esp+28h] [ebp-F8h] BYREF
  float v40[2]; // [esp+2Ch] [ebp-F4h] BYREF
  int v41; // [esp+34h] [ebp-ECh]
  int v42; // [esp+38h] [ebp-E8h]
  _DWORD *v43; // [esp+3Ch] [ebp-E4h]
  __m128 v44; // [esp+40h] [ebp-E0h] BYREF
  __m128 v45; // [esp+50h] [ebp-D0h] BYREF
  __m128 v46; // [esp+60h] [ebp-C0h] BYREF
  __m128 v47; // [esp+70h] [ebp-B0h] BYREF
  __m128 v48; // [esp+80h] [ebp-A0h] BYREF
  __m128 v49; // [esp+90h] [ebp-90h] BYREF
  __m128 v50; // [esp+A0h] [ebp-80h] BYREF
  int v51; // [esp+B0h] [ebp-70h]
  int v52; // [esp+B4h] [ebp-6Ch]
  float v53; // [esp+B8h] [ebp-68h] BYREF
  __m128 v54[2]; // [esp+C0h] [ebp-60h] BYREF
  __m128 v55; // [esp+E0h] [ebp-40h] BYREF
  __m128 v56; // [esp+F0h] [ebp-30h] BYREF
  __m128 v57; // [esp+100h] [ebp-20h] BYREF
  __m128 v58; // [esp+110h] [ebp-10h] BYREF

  if ( unk_BA8508 || (v5 = sub_9246E0(a2, 1), (unk_BA8508 = v5) != 0) ) /*0x924f6b*/
  {
    sub_8F0F70(a3, a4, *(_DWORD *)(a3 + 0x28), 8); /*0x924f7f*/
    v6 = *(__m128 **)(a3 + 0x1C); /*0x924f84*/
    v7 = *v6; /*0x924f87*/
    v8 = v6[1]; /*0x924f8a*/
    v9 = v6[2]; /*0x924f8e*/
    v10 = (__m128 *)(a1 + 0x10); /*0x924f92*/
    v11 = 3; /*0x924fa1*/
    do /*0x924fde*/
    {
      *(__m128 *)((char *)v10 + (_DWORD)&v47.m128_i32[0xFFFFFFFC] - a1) = _mm_add_ps( /*0x924fd6*/
                                                                            _mm_add_ps(
                                                                              _mm_mul_ps(
                                                                                v7,
                                                                                _mm_shuffle_ps(*v10, *v10, 0)),
                                                                              _mm_mul_ps(
                                                                                v8,
                                                                                _mm_shuffle_ps(*v10, *v10, 0x55))),
                                                                            _mm_mul_ps(
                                                                              v9,
                                                                              _mm_shuffle_ps(*v10, *v10, 0xAA)));
      ++v10; /*0x924fda*/
      --v11; /*0x924fdd*/
    }
    while ( v11 ); /*0x924fde*/
    v12 = v6[3]; /*0x924fe0*/
    v13 = *(__m128 **)(a3 + 0x20); /*0x924fe9*/
    v47 = _mm_add_ps(v47, v12); /*0x924fef*/
    v14 = *v13; /*0x924ff4*/
    v15 = v13[1]; /*0x924ff7*/
    v16 = v13[2]; /*0x924ffb*/
    v17 = (__m128 *)(a1 + 0x40); /*0x924fff*/
    v18 = 3; /*0x925008*/
    do /*0x925048*/
    {
      *(__m128 *)((char *)v17 + (_DWORD)&v35 - a1) = _mm_add_ps( /*0x925040*/
                                                       _mm_add_ps(
                                                         _mm_mul_ps(v14, _mm_shuffle_ps(*v17, *v17, 0)),
                                                         _mm_mul_ps(v15, _mm_shuffle_ps(*v17, *v17, 0x55))),
                                                       _mm_mul_ps(v16, _mm_shuffle_ps(*v17, *v17, 0xAA)));
      ++v17; /*0x925044*/
      --v18; /*0x925047*/
    }
    while ( v18 ); /*0x925048*/
    v44 = _mm_add_ps(v44, v13[3]); /*0x92506f*/
    sub_911060((float *)a1, &v49, &v46, &v45, a3, (int)a4); /*0x925074*/
    v19 = *(_DWORD *)(a1 + 0x80); /*0x92507c*/
    v51 = *(_DWORD *)(a1 + 0x7C); /*0x92508a*/
    v52 = v19; /*0x925099*/
    v50 = v49; /*0x9250c2*/
    sub_943230(&v49, &v46, &v48, &v45, &v50, &v53); /*0x9250ca*/
    sub_8F1B60(&v50, a3, (int)a4); /*0x9250d9*/
    sub_8F1CC0(&v47, &v44, a3, (__m128 **)a4); /*0x9250ed*/
    if ( *(_BYTE *)(a1 + 0x90) ) /*0x9250f2*/
    {
      sub_8D2AB0((char *)&v56, *(__m128 **)(a3 + 0x20), (__m128 *)(a1 + 0xA0)); /*0x925115*/
      v20 = *(_DWORD *)(a1 + 0xD0); /*0x92511a*/
      v21 = *(_DWORD **)(a3 + 0x28); /*0x925122*/
      v41 = 0; /*0x925125*/
      v42 = 0; /*0x92512d*/
      LODWORD(v40[1]) = a3; /*0x925135*/
      if ( v20 ) /*0x925139*/
      {
        sub_943230(&v49, &v46, &v48, &v45, &v36, (float *)&v39); /*0x925163*/
        sub_943230(&v56, &v46, &v57, &v45, &v36, v40); /*0x92518f*/
        sub_8F1070(&v36, a3, (__m128 *)*a4, (float *)&v38); /*0x9251a5*/
        v41 = v21[0xC]; /*0x9251ad*/
        v22 = v21[0xD]; /*0x9251b1*/
        v23 = *(_DWORD *)(a1 + 0xD0); /*0x9251b4*/
        v43 = v21 + 0x12; /*0x9251bd*/
        v42 = v22; /*0x9251d0*/
        (*(void (__thiscall **)(int, int *, __m128 *))(*(_DWORD *)v23 + 8))(v23, &v38, v54); /*0x9251d7*/
        sub_8F0FB0((int)v54, (float *)a3, a4); /*0x9251e7*/
      }
      if ( *(_DWORD *)(a1 + 0xD8) ) /*0x9251ef*/
      {
        sub_943230(&v48, &v45, &v49, &v46, &v36, (float *)&v39); /*0x925221*/
        sub_943230(&v57, &v45, &v56, &v46, &v36, v40); /*0x92524d*/
        v41 = v21[0xE]; /*0x925255*/
        v42 = v21[0xF]; /*0x92525c*/
        v43 = v21 + 0x13; /*0x92526b*/
        sub_8F1070(&v36, a3, (__m128 *)*a4, (float *)&v38); /*0x925278*/
        (*(void (__thiscall **)(_DWORD, int *, __m128 *))(**(_DWORD **)(a1 + 0xD8) + 8))( /*0x925295*/
          *(_DWORD *)(a1 + 0xD8),
          &v38,
          v54);
        sub_8F0FB0((int)v54, (float *)a3, a4); /*0x9252a5*/
      }
      if ( *(_DWORD *)(a1 + 0xD4) ) /*0x9252ad*/
      {
        v24 = _mm_sub_ps( /*0x9252f3*/
                _mm_mul_ps(_mm_shuffle_ps(v49, v49, 0xC9), _mm_shuffle_ps(v48, v48, 0xD2)),
                _mm_mul_ps(_mm_shuffle_ps(v49, v49, 0xD2), _mm_shuffle_ps(v48, v48, 0xC9)));
        v25 = _mm_mul_ps(v24, v24); /*0x9252f9*/
        v25.m128_f32[0] = _mm_shuffle_ps(v25, v25, 0xAA).m128_f32[0] /*0x925311*/
                        + (float)(_mm_shuffle_ps(v25, v25, 0x55).m128_f32[0] + v25.m128_f32[0]);
        v26 = 1.0 / fsqrt(v25.m128_f32[0]); /*0x925324*/
        v37 = 0x3F000000; /*0x92533f*/
        v27 = (__m128)0x3F000000u; /*0x925347*/
        v28 = 3.0 - (float)((float)(v25.m128_f32[0] * v26) * v26); /*0x925350*/
        v29 = (__m128)0x3F000000u; /*0x925354*/
        v29.m128_f32[0] = (float)(0.5 * v26) * v28; /*0x92535b*/
        v54[0] = _mm_mul_ps(_mm_shuffle_ps(v29, v29, 0), v24); /*0x925375*/
        v30 = _mm_sub_ps( /*0x9253a3*/
                _mm_mul_ps(_mm_shuffle_ps(v46, v46, 0xC9), _mm_shuffle_ps(v45, v45, 0xD2)),
                _mm_mul_ps(_mm_shuffle_ps(v46, v46, 0xD2), _mm_shuffle_ps(v45, v45, 0xC9)));
        v31 = _mm_mul_ps(v30, v30); /*0x9253a9*/
        v31.m128_f32[0] = _mm_shuffle_ps(v31, v31, 0xAA).m128_f32[0] /*0x9253c1*/
                        + (float)(_mm_shuffle_ps(v31, v31, 0x55).m128_f32[0] + v31.m128_f32[0]);
        v36.m128_f32[0] = 1.0 / fsqrt(v31.m128_f32[0]); /*0x9253ce*/
        v27.m128_f32[0] = (float)(0.5 * v36.m128_f32[0]) /*0x9253e9*/
                        * (float)(3.0 - (float)((float)(v31.m128_f32[0] * v36.m128_f32[0]) * v36.m128_f32[0]));
        v36 = _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0), v30); /*0x9253f7*/
        sub_943230(v54, &v36, &v49, &v46, &v55, (float *)&v39); /*0x925423*/
        sub_943230(&v58, &v36, &v56, &v46, &v55, v40); /*0x925452*/
        sub_8F1070(&v55, a3, (__m128 *)*a4, (float *)&v38); /*0x92546b*/
        v41 = v21[0x10]; /*0x925473*/
        v32 = *(_DWORD *)(a1 + 0xD4); /*0x92547a*/
        v42 = v21[0x11]; /*0x925480*/
        v43 = v21 + 0x14; /*0x925496*/
        (*(void (__thiscall **)(int, int *, __m128 *))(*(_DWORD *)v32 + 8))(v32, &v38, &v50); /*0x92549d*/
        sub_8F0FB0((int)&v50, (float *)a3, a4); /*0x9254ad*/
      }
    }
    else if ( *(float *)(a1 + 0x84) > (double)*(float *)&SrcStr ) /*0x9254cf*/
    {
      v33 = *(_DWORD *)(a3 + 0x28); /*0x9254d7*/
      v34 = *(_DWORD *)(a3 + 0x1C); /*0x9254da*/
      v36.m128_i32[2] = *(_DWORD *)(a1 + 0x84); /*0x9254de*/
      v36.m128_i32[0] = v34; /*0x9254eb*/
      v36.m128_i32[3] = 3; /*0x9254ef*/
      v36.m128_i32[1] = v33 + 0x30; /*0x9254f7*/
      sub_8F1460((int)&v36, a3, (int)a4); /*0x9254fb*/
    }
  }
}
