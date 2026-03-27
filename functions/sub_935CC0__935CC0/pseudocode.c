void __cdecl sub_935CC0(int *a1, _DWORD *a2, __m128 *a3, float *a4, int a5)
{
  __int32 v5; // edx
  int v6; // ecx
  __int32 v7; // edx
  int v8; // esi
  void (__cdecl *v9)(int *, _DWORD *, _DWORD *, int (__stdcall ***)(char)); // esi
  bool v10; // c0
  __m128 v11; // xmm0
  __m128 v12; // xmm0
  double v13; // st7
  double v15; // st7
  unsigned __int8 v16; // c0
  unsigned __int8 v17; // c3
  double v18; // st7
  int v19; // edx
  int v20; // edx
  int v21; // ecx
  __int32 v22; // eax
  __m128 *v23; // eax
  __m128 v24; // xmm0
  double v25; // st7
  float *v26; // ecx
  double v27; // st7
  float *v28; // eax
  _OWORD *v29; // [esp-Ch] [ebp-194h]
  float v30; // [esp+Ch] [ebp-17Ch]
  int v31; // [esp+Ch] [ebp-17Ch]
  float v32; // [esp+10h] [ebp-178h]
  float v33; // [esp+10h] [ebp-178h]
  _DWORD v34[2]; // [esp+18h] [ebp-170h] BYREF
  float v35; // [esp+20h] [ebp-168h]
  __int32 v36; // [esp+24h] [ebp-164h]
  _DWORD v37[2]; // [esp+28h] [ebp-160h] BYREF
  char v38; // [esp+30h] [ebp-158h]
  __int128 v39; // [esp+38h] [ebp-150h]
  __m128 v40; // [esp+48h] [ebp-140h]
  __int128 v41; // [esp+58h] [ebp-130h] BYREF
  __m128 v42; // [esp+68h] [ebp-120h]
  int *v43; // [esp+78h] [ebp-110h]
  _DWORD *v44; // [esp+7Ch] [ebp-10Ch]
  _DWORD v45[4]; // [esp+88h] [ebp-100h] BYREF
  int (__stdcall **v46)(char); // [esp+98h] [ebp-F0h] BYREF
  int v47; // [esp+9Ch] [ebp-ECh]
  char v48; // [esp+A0h] [ebp-E8h]
  _DWORD v49[5]; // [esp+A4h] [ebp-E4h]
  __m128 v50; // [esp+B8h] [ebp-D0h]
  __m128 v51; // [esp+C8h] [ebp-C0h]
  char v52[44]; // [esp+D8h] [ebp-B0h] BYREF
  _DWORD v53[5]; // [esp+104h] [ebp-84h]

  v5 = a3->m128_i32[1];
  v34[0] = a3->m128_i32[0];
  v35 = a3->m128_f32[2];
  v6 = *a1;
  v35 = v35 + a3[2].m128_f32[1];
  v34[1] = v5;
  v7 = a3->m128_i32[3];
  v37[0] = &off_A9BB8C;
  v38 = 0;
  v40.m128_i32[3] = 0x7F7FFFFF;
  v37[1] = 0x7F7FFFFF;
  v36 = v7;
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6);
  v9 = *(void (__cdecl **)(int *, _DWORD *, _DWORD *, int (__stdcall ***)(char)))(a3->m128_i32[0]
                                                                                + 0x14
                                                                                * *(unsigned __int8 *)(a3->m128_i32[0] + 0x20 * v8 + (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 8))(*a2) + 0x190)
                                                                                + 0x998);
  v9(a1, a2, v34, (int (__stdcall ***)(char))v37);
  if ( v38 )
  {
    v10 = v40.m128_f32[3] < (double)a3->m128_f32[2];
    v11 = v40;
    v43 = a1;
    v44 = a2;
    v42 = v40;
    v41 = v39;
    if ( v10 )
    {
      if ( a5 )
      {
        (*(void (__thiscall **)(int, __int128 *))(*(_DWORD *)a5 + 4))(a5, &v41);
        v11 = v40;
      }
    }
    v12 = _mm_mul_ps(v11, a3[1]);
    v51 = a3[1];
    v32 = _mm_shuffle_ps(v12, v12, 0xAA).m128_f32[0]
        + (float)(_mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] + v12.m128_f32[0]);
    v13 = v40.m128_f32[3] + v32;
    v30 = v13;
    if ( v13 <= *(float *)&SrcStr && v32 + a3[2].m128_f32[0] < *(float *)&SrcStr )
    {
      v15 = v40.m128_f32[3];
      if ( v16 | v17 )
      {
        if ( v15 <= *(float *)&SrcStr )
        {
          v20 = *(_DWORD *)a4;
          v42.m128_i32[3] = 0;
          (*(void (__thiscall **)(float *, __int128 *))(v20 + 4))(a4, &v41);
        }
        else
        {
          v18 = v40.m128_f32[3] / (v40.m128_f32[3] - v30);
          if ( v18 <= a4[1] )
          {
            v19 = *(_DWORD *)a4;
            v42.m128_f32[3] = v18;
            (*(void (__stdcall **)(__int128 *))(v19 + 4))(&v41);
          }
        }
      }
      else
      {
        v29 = (_OWORD *)a1[2];
        v46 = &off_A9BB8C;
        v48 = 0;
        v50.m128_i32[3] = 0x7F7FFFFF;
        v47 = 0x7F7FFFFF;
        v42.m128_f32[3] = v40.m128_f32[3] / (v15 - v30);
        sub_903FA0(v52, v29);
        v21 = *a1;
        v45[3] = a1;
        v45[2] = v52;
        v45[1] = a1[1];
        v22 = a3[2].m128_i32[2];
        v45[0] = v21;
        v31 = *(_DWORD *)(v22 + 4) - 1;
        if ( v31 < 0 )
        {
LABEL_19:
          v26 = a4;
LABEL_20:
          (*(void (__thiscall **)(float *, __int128 *))(*(_DWORD *)v26 + 4))(v26, &v41);
        }
        else
        {
          while ( 1 )
          {
            v23 = (__m128 *)a1[2];
            v48 = 0;
            v50.m128_i32[3] = 0x7F7FFFFF;
            v47 = 0x7F7FFFFF;
            *(__m128 *)&v53[1] = _mm_add_ps(
                                   v23[3],
                                   _mm_mul_ps(_mm_shuffle_ps((__m128)v42.m128_u32[3], (__m128)v42.m128_u32[3], 0), v51));
            v9(v45, a2, v34, &v46);
            if ( !v48 )
              break;
            v51 = a3[1];
            v24 = _mm_mul_ps(v50, v51);
            v33 = _mm_shuffle_ps(v24, v24, 0xAA).m128_f32[0]
                + (float)(_mm_shuffle_ps(v24, v24, 0x55).m128_f32[0] + v24.m128_f32[0]);
            if ( v33 >= (double)*(float *)&SrcStr )
              break;
            v25 = -v33;
            if ( v42.m128_f32[3] * v25 + v50.m128_f32[3] > v25 )
              break;
            v26 = a4;
            v27 = v50.m128_f32[3] / v25 + v42.m128_f32[3];
            if ( v27 > a4[1] )
              break;
            v28 = (float *)a3[2].m128_i32[2];
            v42 = v50;
            v42.m128_f32[3] = v27;
            v41 = *(_OWORD *)&v49[1];
            if ( v50.m128_f32[3] <= (double)*v28 )
              goto LABEL_20;
            if ( --v31 < 0 )
              goto LABEL_19;
          }
        }
      }
    }
  }
}
