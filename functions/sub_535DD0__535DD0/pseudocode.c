void __cdecl sub_535DD0(__int128 *a1, int a2)
{
  unsigned int v2; // ebx
  int *v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // eax
  _DWORD ***v7; // esi
  _DWORD *v8; // edx
  __m128 v9; // xmm0
  __m128 v10; // xmm0
  double v11; // st7
  __m128 v12; // xmm1
  __m128 v13; // xmm1
  __m128 v14; // xmm0
  float v15; // xmm2_4
  float v16; // xmm3_4
  __m128 v17; // xmm0
  __m128 v18; // xmm2
  __m128 v19; // xmm0
  _DWORD **v20; // eax
  __m128 *v21; // eax
  int v22; // edi
  double v23; // st7
  bool v24; // cc
  float v25; // [esp+18h] [ebp-158h]
  float v26; // [esp+1Ch] [ebp-154h]
  __m128 v27; // [esp+20h] [ebp-150h] BYREF
  __m128 v28; // [esp+30h] [ebp-140h] BYREF
  __m128 v29; // [esp+40h] [ebp-130h]
  __m128 v30; // [esp+50h] [ebp-120h] BYREF
  __m128 v31[3]; // [esp+60h] [ebp-110h] BYREF
  __int128 v32; // [esp+90h] [ebp-E0h]
  __m128 v33[4]; // [esp+A0h] [ebp-D0h] BYREF
  __m128 v34[4]; // [esp+E0h] [ebp-90h] BYREF
  __m128 v35[4]; // [esp+120h] [ebp-50h] BYREF

  v2 = 0;
  if ( dword_B36598 || dword_B36594 )
  {
    v3 = &dword_B36594;
    do
    {
      v4 = (int *)v3[1];
      if ( !v4 && !*v3 )
        break;
      if ( v2 )
        goto LABEL_12;
      v5 = *v3;
      if ( v5 )
      {
        if ( *(_DWORD *)(v5 + 4) == a2 )
          v2 = v5;
      }
      v3 = v4;
    }
    while ( v4 );
    if ( !v2 )
      return;
LABEL_12:
    if ( a2 )
    {
      v6 = sub_47FAC0(a2);
      if ( v6 )
      {
        v7 = *(_DWORD ****)(v6 + 0x10);
        if ( v7 )
        {
          v25 = *(float *)(v2 + 8);
          v32 = *a1;
          sub_8B1DD0(v31[0].m128_f32, &flt_B2F080);
          ((void (__thiscall *)(_DWORD ***, __m128 *))(*v7)[0x2B])(v7, v34);
          sub_8B1F10(v33, v34);
          sub_8B1F70(v35, v33, v31);
          v8 = (*v7)[0x29];
          v9 = 0;
          v9.m128_f32[0] = *(float *)&dword_B370D8;
          v29 = _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), v35[3]);
          ((void (__thiscall *)(_DWORD ***, __m128 *))v8)(v7, &v27);
          v10 = 0;
          v11 = 1.0 / (v25 - *(float *)&dword_B370D8);
          v10.m128_f32[0] = v25;
          v12 = 0;
          v27 = _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), v27);
          v26 = v11;
          v12.m128_f32[0] = v26;
          v30 = _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), _mm_sub_ps(v27, v29));
          sub_8A9C60(v7[2], (int)&v30);
          v13 = _mm_sub_ps(v27, v29);
          v14 = _mm_mul_ps(v13, v13);
          v14.m128_f32[0] = _mm_shuffle_ps(v14, v14, 0xAA).m128_f32[0]
                          + (float)(_mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0]);
          v15 = 1.0 / fsqrt(v14.m128_f32[0]);
          v16 = *(float *)&dword_A46C30 - (float)((float)(v14.m128_f32[0] * v15) * v15);
          v17 = 0;
          v17.m128_f32[0] = (float)(flt_A3D65C * v15) * v16;
          v18 = 0;
          v18.m128_f32[0] = flt_A35AA4;
          v19 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v13), _mm_shuffle_ps(v18, v18, 0));
          v28 = v19;
          v20 = v7[2];
          if ( v20 )
            v21 = (__m128 *)(v20[0x14] + 0x34);
          else
            v21 = (__m128 *)&stru_BA7A40;
          v28 = _mm_add_ps(*v21, v19);
          v22 = (int)v7[2];
          if ( v22 )
          {
            sub_89F570(v7);
            sub_8A6410(v22);
            (*(void (__thiscall **)(_DWORD, __m128 *))(**(_DWORD **)(v22 + 0x50) + 0x54))(*(_DWORD *)(v22 + 0x50), &v28);
            sub_89F570(v7);
          }
          v23 = v25 - *(float *)&dword_B370D8;
          v24 = --*(_DWORD *)(v2 + 0xC) <= 0;
          *(float *)(v2 + 8) = v23;
          if ( v24 )
          {
            FormHeapFree(v2);
            BSSimpleList_Remove(&dword_B36594, v2);
          }
        }
      }
    }
  }
}
