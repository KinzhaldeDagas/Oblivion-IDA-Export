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

  v7 = a4->m128_i32[1];
  v36[0] = a4->m128_i32[0];
  v37 = a4->m128_f32[2];
  v8 = v37 + a4[2].m128_f32[1];
  v36[1] = v7;
  v9 = a4->m128_i32[3];
  v10 = *this;
  v37 = v8;
  v38 = v9;
  v39[0] = &off_A9BB8C;
  v40 = 0;
  v42.m128_i32[3] = 0x7F7FFFFF;
  v39[1] = 0x7F7FFFFF;
  (*(void (__thiscall **)(int *, _DWORD *, int, _DWORD *, _DWORD *))(v10 + 0xC))(this, a2, a3, v36, v39);
  if ( v40 )
  {
    v11 = v42.m128_f32[3] < (double)a4->m128_f32[2];
    v43 = v41;
    v12 = v42;
    v45 = a2;
    v46 = a3;
    v44 = v42;
    if ( v11 )
    {
      if ( a6 )
      {
        (*(void (__thiscall **)(int, __int128 *))(*(_DWORD *)a6 + 4))(a6, &v43);
        v12 = v42;
      }
    }
    v13 = _mm_mul_ps(v12, a4[1]);
    v53 = a4[1];
    v34 = _mm_shuffle_ps(v13, v13, 0xAA).m128_f32[0]
        + (float)(_mm_shuffle_ps(v13, v13, 0x55).m128_f32[0] + v13.m128_f32[0]);
    v14 = v42.m128_f32[3] + v34;
    v32 = v14;
    if ( v14 <= *(float *)&SrcStr && v34 + a4[2].m128_f32[0] < *(float *)&SrcStr )
    {
      v16 = v42.m128_f32[3];
      if ( v17 | v18 )
      {
        if ( v16 <= *(float *)&SrcStr )
        {
          v21 = *(_DWORD *)a5;
          v44.m128_i32[3] = 0;
          (*(void (__thiscall **)(float *, __int128 *))(v21 + 4))(a5, &v43);
        }
        else
        {
          v19 = v42.m128_f32[3] / (v42.m128_f32[3] - v32);
          if ( v19 <= a5[1] )
          {
            v20 = *(_DWORD *)a5;
            v44.m128_f32[3] = v19;
            (*(void (__stdcall **)(__int128 *))(v20 + 4))(&v43);
          }
        }
      }
      else
      {
        v31 = (_OWORD *)a2[2];
        v48 = &off_A9BB8C;
        v50 = 0;
        v52.m128_i32[3] = 0x7F7FFFFF;
        v49 = 0x7F7FFFFF;
        v44.m128_f32[3] = v42.m128_f32[3] / (v16 - v32);
        sub_903FA0(v54, v31);
        v22 = *a2;
        v47[3] = a2;
        v47[2] = v54;
        v47[1] = a2[1];
        v23 = a4[2].m128_i32[2];
        v47[0] = v22;
        v33 = *(_DWORD *)(v23 + 4) - 1;
        if ( v33 < 0 )
        {
LABEL_18:
          v28 = a5;
LABEL_19:
          (*(void (__thiscall **)(float *, __int128 *))(*(_DWORD *)v28 + 4))(v28, &v43);
        }
        else
        {
          while ( 1 )
          {
            v24 = (__m128 *)a2[2];
            v25 = *this;
            v50 = 0;
            v52.m128_i32[3] = 0x7F7FFFFF;
            v49 = 0x7F7FFFFF;
            v55 = _mm_add_ps(
                    v24[3],
                    _mm_mul_ps(_mm_shuffle_ps((__m128)v44.m128_u32[3], (__m128)v44.m128_u32[3], 0), v53));
            (*(void (__thiscall **)(int *, _DWORD *, int, _DWORD *, int (__stdcall ***)(char)))(v25 + 0xC))(
              this,
              v47,
              a3,
              v36,
              &v48);
            v53 = a4[1];
            v26 = _mm_mul_ps(v52, v53);
            v35 = _mm_shuffle_ps(v26, v26, 0xAA).m128_f32[0]
                + (float)(_mm_shuffle_ps(v26, v26, 0x55).m128_f32[0] + v26.m128_f32[0]);
            if ( v35 >= (double)*(float *)&SrcStr )
              break;
            v27 = -v35;
            if ( v44.m128_f32[3] * v27 + v52.m128_f32[3] > v27 )
              break;
            v28 = a5;
            v29 = v52.m128_f32[3] / v27 + v44.m128_f32[3];
            if ( v29 > a5[1] )
              break;
            v30 = (float *)a4[2].m128_i32[2];
            v44 = v52;
            v44.m128_f32[3] = v29;
            v43 = v51;
            if ( v52.m128_f32[3] <= (double)*v30 )
              goto LABEL_19;
            if ( --v33 < 0 )
              goto LABEL_18;
          }
        }
      }
    }
  }
}
