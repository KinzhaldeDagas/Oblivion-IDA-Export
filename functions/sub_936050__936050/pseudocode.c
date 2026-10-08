void __thiscall sub_936050(int *this, _DWORD *a2, int a3, __m128 *a4, float *a5, int a6)
{
  __int32 v7; // edx
  double v8; // st7
  __int32 v9; // edx
  int v10; // eax
  bool v11; // c0
  __m128 v12; // xmm0
  __m128 v13; // xmm0
  double v14; // st7
  double v16; // st7
  unsigned __int8 v17; // c0
  unsigned __int8 v18; // c3
  double v19; // st7
  int v20; // edx
  int v21; // edx
  int v22; // ecx
  __int32 v23; // eax
  __m128 *v24; // eax
  int v25; // edx
  __m128 v26; // xmm0
  double v27; // st7
  float *v28; // ecx
  double v29; // st7
  float *v30; // eax
  _OWORD *v31; // [esp+Ch] [ebp-194h]
  float v32; // [esp+24h] [ebp-17Ch]
  int v33; // [esp+24h] [ebp-17Ch]
  float v34; // [esp+28h] [ebp-178h]
  float v35; // [esp+28h] [ebp-178h]
  _DWORD v36[2]; // [esp+30h] [ebp-170h] BYREF
  float v37; // [esp+38h] [ebp-168h]
  __int32 v38; // [esp+3Ch] [ebp-164h]
  _DWORD v39[2]; // [esp+40h] [ebp-160h] BYREF
  char v40; // [esp+48h] [ebp-158h]
  __int128 v41; // [esp+50h] [ebp-150h]
  __m128 v42; // [esp+60h] [ebp-140h]
  __int128 v43; // [esp+70h] [ebp-130h] BYREF
  __m128 v44; // [esp+80h] [ebp-120h]
  _DWORD *v45; // [esp+90h] [ebp-110h]
  int v46; // [esp+94h] [ebp-10Ch]
  _DWORD v47[4]; // [esp+A0h] [ebp-100h] BYREF
  int (__stdcall **v48)(char); // [esp+B0h] [ebp-F0h] BYREF
  int v49; // [esp+B4h] [ebp-ECh]
  char v50; // [esp+B8h] [ebp-E8h]
  __int128 v51; // [esp+C0h] [ebp-E0h]
  __m128 v52; // [esp+D0h] [ebp-D0h]
  __m128 v53; // [esp+E0h] [ebp-C0h]
  char v54[48]; // [esp+F0h] [ebp-B0h] BYREF
  __m128 v55; // [esp+120h] [ebp-80h]

  v7 = a4->m128_i32[1]; /*0x93606b*/
  v36[0] = a4->m128_i32[0]; /*0x93606e*/
  v37 = a4->m128_f32[2]; /*0x936075*/
  v8 = v37 + a4[2].m128_f32[1]; /*0x93607d*/
  v36[1] = v7; /*0x936080*/
  v9 = a4->m128_i32[3]; /*0x936084*/
  v10 = *this; /*0x936087*/
  v37 = v8; /*0x93608d*/
  v38 = v9; /*0x936095*/
  v39[0] = &off_A9BB8C; /*0x9360a2*/
  v40 = 0; /*0x9360aa*/
  v42.m128_i32[3] = 0x7F7FFFFF; /*0x9360af*/
  v39[1] = 0x7F7FFFFF; /*0x9360b7*/
  (*(void (__thiscall **)(int *, _DWORD *, int, _DWORD *, _DWORD *))(v10 + 0xC))(this, a2, a3, v36, v39); /*0x9360bf*/
  if ( v40 ) /*0x9360c8*/
  {
    v11 = v42.m128_f32[3] < (double)a4->m128_f32[2]; /*0x9360d7*/
    v43 = v41; /*0x9360dd*/
    v12 = v42; /*0x9360e2*/
    v45 = a2; /*0x9360e7*/
    v46 = a3; /*0x9360f0*/
    v44 = v42; /*0x9360f7*/
    if ( v11 ) /*0x9360ff*/
    {
      if ( a6 ) /*0x936106*/
      {
        (*(void (__thiscall **)(int, __int128 *))(*(_DWORD *)a6 + 4))(a6, &v43); /*0x93610f*/
        v12 = v42; /*0x936112*/
      }
    }
    v13 = _mm_mul_ps(v12, a4[1]); /*0x93611f*/
    v53 = a4[1]; /*0x936122*/
    v34 = _mm_shuffle_ps(v13, v13, 0xAA).m128_f32[0] /*0x936144*/
        + (float)(_mm_shuffle_ps(v13, v13, 0x55).m128_f32[0] + v13.m128_f32[0]);
    v14 = v42.m128_f32[3] + v34; /*0x936148*/
    v32 = v14; /*0x93614c*/
    if ( v14 <= *(float *)&SrcStr && v34 + a4[2].m128_f32[0] < *(float *)&SrcStr ) /*0x936173*/
    {
      v16 = v42.m128_f32[3]; /*0x936182*/
      if ( v17 | v18 ) /*0x936188*/
      {
        if ( v16 <= *(float *)&SrcStr ) /*0x93619b*/
        {
          v21 = *(_DWORD *)a5; /*0x9361ce*/
          v44.m128_i32[3] = 0; /*0x9361d5*/
          (*(void (__thiscall **)(float *, __int128 *))(v21 + 4))(a5, &v43); /*0x9361e0*/
        }
        else
        {
          v19 = v42.m128_f32[3] / (v42.m128_f32[3] - v32); /*0x9361a5*/
          if ( v19 <= a5[1] ) /*0x9361b1*/
          {
            v20 = *(_DWORD *)a5; /*0x9361b7*/
            v44.m128_f32[3] = v19; /*0x9361b9*/
            (*(void (__stdcall **)(__int128 *))(v20 + 4))(&v43); /*0x9361c2*/
          }
        }
      }
      else
      {
        v31 = (_OWORD *)a2[2]; /*0x9361f3*/
        v48 = &off_A9BB8C; /*0x9361ff*/
        v50 = 0; /*0x93620a*/
        v52.m128_i32[3] = 0x7F7FFFFF; /*0x936212*/
        v49 = 0x7F7FFFFF; /*0x93621d*/
        v44.m128_f32[3] = v42.m128_f32[3] / (v16 - v32); /*0x936228*/
        sub_903FA0(v54, v31); /*0x93622f*/
        v22 = *a2; /*0x936234*/
        v47[3] = a2; /*0x93623d*/
        v47[2] = v54; /*0x936244*/
        v47[1] = a2[1]; /*0x93624e*/
        v23 = a4[2].m128_i32[2]; /*0x936255*/
        v47[0] = v22; /*0x936258*/
        v33 = *(_DWORD *)(v23 + 4) - 1; /*0x936263*/
        if ( v33 < 0 ) /*0x936267*/
        {
LABEL_18:
          v28 = a5; /*0x936393*/
LABEL_19:
          (*(void (__thiscall **)(float *, __int128 *))(*(_DWORD *)v28 + 4))(v28, &v43); /*0x936396*/
        }
        else
        {
          while ( 1 ) /*0x936274*/
          {
            v24 = (__m128 *)a2[2]; /*0x936274*/
            v25 = *this; /*0x936281*/
            v50 = 0; /*0x936292*/
            v52.m128_i32[3] = 0x7F7FFFFF; /*0x93629a*/
            v49 = 0x7F7FFFFF; /*0x9362a5*/
            v55 = _mm_add_ps( /*0x9362d2*/
                    v24[3],
                    _mm_mul_ps(_mm_shuffle_ps((__m128)v44.m128_u32[3], (__m128)v44.m128_u32[3], 0), v53));
            (*(void (__thiscall **)(int *, _DWORD *, int, _DWORD *, int (__stdcall ***)(char)))(v25 + 0xC))( /*0x9362da*/
              this,
              v47,
              a3,
              v36,
              &v48);
            v53 = a4[1]; /*0x9362e9*/
            v26 = _mm_mul_ps(v52, v53); /*0x9362f4*/
            v35 = _mm_shuffle_ps(v26, v26, 0xAA).m128_f32[0] /*0x936311*/
                + (float)(_mm_shuffle_ps(v26, v26, 0x55).m128_f32[0] + v26.m128_f32[0]);
            if ( v35 >= (double)*(float *)&SrcStr ) /*0x936324*/
              break; /*0x936324*/
            v27 = -v35; /*0x93632e*/
            if ( v44.m128_f32[3] * v27 + v52.m128_f32[3] > v27 ) /*0x936344*/
              break; /*0x936344*/
            v28 = a5; /*0x93634d*/
            v29 = v52.m128_f32[3] / v27 + v44.m128_f32[3]; /*0x936350*/
            if ( v29 > a5[1] ) /*0x93635e*/
              break; /*0x93635e*/
            v30 = (float *)a4[2].m128_i32[2]; /*0x936360*/
            v44 = v52; /*0x93636b*/
            v44.m128_f32[3] = v29; /*0x936370*/
            v43 = v51; /*0x93637b*/
            if ( v52.m128_f32[3] <= (double)*v30 ) /*0x936387*/
              goto LABEL_19; /*0x936387*/
            if ( --v33 < 0 ) /*0x93638d*/
              goto LABEL_18; /*0x93638d*/
          }
        }
      }
    }
  }
}
