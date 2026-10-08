char __thiscall sub_8919A0(__m128 *this, __m128 *a2)
{
  __int32 v2; // eax
  __int32 v4; // edx
  __int32 v5; // ecx
  __int32 v6; // eax
  char v7; // bl
  _DWORD *v8; // ebx
  __m128 *v9; // eax
  __m128 v10; // xmm0
  __m128 v11; // xmm0
  __m128 v12; // xmm0
  double v13; // st7
  float v15; // xmm5_4
  __m128 v16; // xmm0
  float v17; // xmm1_4
  float v18; // xmm4_4
  __m128 v19; // xmm0
  __m128 v20; // xmm0
  _DWORD *v21; // esi
  int v22; // eax
  int v23; // esi
  bool v24; // [esp+1Ah] [ebp-F6h] BYREF
  char v25; // [esp+1Bh] [ebp-F5h]
  float v26; // [esp+1Ch] [ebp-F4h]
  float v27; // [esp+20h] [ebp-F0h]
  __m128 v28; // [esp+30h] [ebp-E0h] BYREF
  __m128 v29; // [esp+40h] [ebp-D0h]
  __m128 v30; // [esp+50h] [ebp-C0h] BYREF
  __m128 v31; // [esp+60h] [ebp-B0h]
  _BYTE v32[16]; // [esp+70h] [ebp-A0h] BYREF
  int v33; // [esp+80h] [ebp-90h]
  float v34; // [esp+84h] [ebp-8Ch]
  __m128 v35; // [esp+90h] [ebp-80h] BYREF
  __m128 v36; // [esp+A0h] [ebp-70h] BYREF
  int v37; // [esp+B0h] [ebp-60h]
  int v38; // [esp+B4h] [ebp-5Ch]
  __m128 v39[4]; // [esp+C0h] [ebp-50h] BYREF

  v2 = a2[2].m128_i32[0]; /*0x8919c0*/
  if ( *(_BYTE *)(v2 + 0x18) == 2 ) /*0x8919c9*/
    v4 = v2 + *(_DWORD *)(v2 + 0x10); /*0x8919ce*/
  else
    v4 = 0; /*0x8919d2*/
  v5 = a2[2].m128_i32[2]; /*0x8919d4*/
  if ( *(_BYTE *)(v5 + 0x18) == 1 ) /*0x8919db*/
    v6 = v5 + *(_DWORD *)(v5 + 0x10); /*0x8919e0*/
  else
    v6 = 0; /*0x8919e4*/
  v7 = 1; /*0x8919e8*/
  if ( v4 && v6 )
  {
    v8 = *(_DWORD **)v5; /*0x8919f8*/
    v9 = *(__m128 **)(v6 + 0x50); /*0x8919fc*/
    v10 = v9[1]; /*0x8919ff*/
    ++v9; /*0x891a03*/
    v39[0] = v10; /*0x891a06*/
    v39[1] = v9[1]; /*0x891a12*/
    v39[2] = v9[2]; /*0x891a1e*/
    v11 = v9[3]; /*0x891a26*/
    v34 = 1.0; /*0x891a2a*/
    v39[3] = v11; /*0x891a33*/
    v12 = *a2; /*0x891a3b*/
    v37 = 0; /*0x891a3e*/
    v38 = 0; /*0x891a45*/
    v29 = v12; /*0x891a50*/
    v31.m128_i32[0] = _mm_shuffle_ps(v12, v12, 0xAA).m128_u32[0]; /*0x891a5c*/
    sub_8914C0(this, &v30); /*0x891a62*/
    v13 = v30.m128_f32[2] + *((float *)this + 0x92); /*0x891a6b*/
    v25 = 0; /*0x891a71*/
    v30.m128_f32[2] = v13; /*0x891a76*/
    v27 = _mm_shuffle_ps(v30, v30, 0xAA).m128_f32[0]; /*0x891a8a*/
    v26 = v31.m128_f32[0] - v27; /*0x891a94*/
    if ( v26 > 0.0 ) /*0x891aa5*/
    {
      if ( *((float *)this + 0x92) / dbl_A30E48 < v26 ) /*0x891aba*/
        return 1; /*0x891ad4*/
      v25 = 1; /*0x891ad7*/
    }
    v15 = *(float *)&dword_A46C30; /*0x891ae0*/
    v31 = _mm_sub_ps(v30, v29); /*0x891af0*/
    v31.m128_f32[2] = 0.0; /*0x891af5*/
    v26 = *((float *)this + 0x93); /*0x891b07*/
    v16 = _mm_mul_ps(v31, v31); /*0x891b0b*/
    v16.m128_f32[0] = _mm_shuffle_ps(v16, v16, 0xAA).m128_f32[0] /*0x891b1d*/
                    + (float)(_mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0]);
    v17 = 1.0 / fsqrt(v16.m128_f32[0]); /*0x891b24*/
    v18 = v15 - (float)((float)(v16.m128_f32[0] * v17) * v17); /*0x891b3f*/
    v19 = 0; /*0x891b43*/
    v19.m128_f32[0] = (float)(kHeadBodyNormalMatchRadius * v17) * v18; /*0x891b4e*/
    v20 = _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v31); /*0x891b56*/
    v28.m128_u64[1] = v30.m128_u64[1]; /*0x891b67*/
    v29.m128_f32[0] = _mm_shuffle_ps(v20, v20, 0x55).m128_f32[0]; /*0x891b74*/
    v28.m128_f32[0] = v30.m128_f32[0] - v20.m128_f32[0] * v26; /*0x891b94*/
    v28.m128_f32[1] = v30.m128_f32[1] - v26 * v29.m128_f32[0]; /*0x891ba2*/
    sub_88FD10(&v35, v39, &v30); /*0x891ba6*/
    sub_88FD10(&v36, v39, &v28); /*0x891bbf*/
    (*(void (__thiscall **)(_DWORD *, bool *, __m128 *, _BYTE *))(*v8 + 0x14))(v8, &v24, &v35, v32); /*0x891bdd*/
    v24 = v34 < 1.0; /*0x891bfc*/
    if ( v34 >= 1.0 ) /*0x891c00*/
    {
      v24 = v25 != 0; /*0x891c54*/
    }
    else
    {
      v21 = (_DWORD *)v8[2]; /*0x891c02*/
      if ( v21 ) /*0x891c07*/
      {
        if ( v33 == 0xFFFFFFFF || (v22 = (*(int (__thiscall **)(_DWORD))(*v21 + 0x88))(v8[2])) == 0 ) /*0x891c21*/
          v23 = v21[4]; /*0x891c3b*/
        else
          v23 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v22 + 0x9C))(v22, v33); /*0x891c37*/
        if ( (unsigned int)(v23 - 0xF) <= 0xE ) /*0x891c44*/
          v24 = 0; /*0x891c46*/
      }
    }
    sub_8A78E0((LPCRITICAL_SECTION *)unk_BA7DA0, (int)&v30, (int)&v28, v34 < 1.0 ? 0xFF888888 : 0xFFFF0000, 0);
    return v24; /*0x891c95*/
  }
  return v7; /*0x891ac0*/
}
