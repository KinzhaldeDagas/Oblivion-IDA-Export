void __thiscall sub_9119A0(__m128 *this, unsigned int a2, int *a3)
{
  __m128 *v4; // ecx
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  __m128 v7; // xmm3
  __m128 *v8; // eax
  int v9; // edi
  __m128 *v10; // edi
  __m128 v11; // xmm1
  __m128 v12; // xmm2
  __m128 v13; // xmm3
  __m128 *v14; // eax
  int v15; // edx
  __m128 v16; // xmm1
  __m128 v17; // xmm0
  float v18; // xmm4_4
  __m128 v19; // xmm5
  __m128 v20; // xmm0
  int v21; // ecx
  int v22; // edx
  __int32 v23; // edx
  unsigned int v24; // ecx
  __int32 v25; // ebx
  __int32 v26; // eax
  __m128 *v27; // [esp-8h] [ebp-118h]
  int v28; // [esp+1Ch] [ebp-F4h]
  __m128 v29; // [esp+20h] [ebp-F0h] BYREF
  __m128 v30; // [esp+30h] [ebp-E0h]
  __m128 v31; // [esp+40h] [ebp-D0h]
  int v32; // [esp+50h] [ebp-C0h]
  int v33; // [esp+54h] [ebp-BCh]
  __m128 v34; // [esp+60h] [ebp-B0h] BYREF
  __m128 v35; // [esp+70h] [ebp-A0h]
  __m128 v36; // [esp+80h] [ebp-90h]
  __m128 v37; // [esp+90h] [ebp-80h] BYREF
  __m128 v38[2]; // [esp+A0h] [ebp-70h] BYREF
  __m128 v39[5]; // [esp+C0h] [ebp-50h] BYREF

  sub_8F0F70(a2, a3, *(_DWORD *)(a2 + 0x28), 8);
  v4 = *(__m128 **)(a2 + 0x1C);
  v5 = *v4;
  v6 = v4[1];
  v7 = v4[2];
  v8 = this + 1;
  v9 = 5;
  do
  {
    *(__m128 *)((char *)v8 + (char *)v39 - (char *)(this + 1)) = _mm_add_ps(
                                                                   _mm_add_ps(
                                                                     _mm_mul_ps(v5, _mm_shuffle_ps(*v8, *v8, 0)),
                                                                     _mm_mul_ps(v6, _mm_shuffle_ps(*v8, *v8, 0x55))),
                                                                   _mm_mul_ps(v7, _mm_shuffle_ps(*v8, *v8, 0xAA)));
    ++v8;
    --v9;
  }
  while ( v9 );
  v10 = *(__m128 **)(a2 + 0x20);
  v39[0] = _mm_add_ps(v39[0], v4[3]);
  v11 = *v10;
  v12 = v10[1];
  v13 = v10[2];
  v14 = this + 6;
  v15 = 3;
  do
  {
    *(__m128 *)((char *)v14 + (char *)&v37 - (char *)(this + 6)) = _mm_add_ps(
                                                                     _mm_add_ps(
                                                                       _mm_mul_ps(v11, _mm_shuffle_ps(*v14, *v14, 0)),
                                                                       _mm_mul_ps(v12, _mm_shuffle_ps(*v14, *v14, 0x55))),
                                                                     _mm_mul_ps(v13, _mm_shuffle_ps(*v14, *v14, 0xAA)));
    ++v14;
    --v15;
  }
  while ( v15 );
  v16 = _mm_add_ps(v37, v10[3]);
  v34 = v39[2];
  v37 = v16;
  v36 = v10[1];
  v35 = v39[4];
  sub_8F1310(&v34, a2, (int)a3);
  v29 = v39[3];
  v31 = v10[2];
  v30 = v34;
  sub_8F1310(&v29, a2, (int)a3);
  v30 = v29;
  v29 = v35;
  v31 = *v10;
  sub_8F1310(&v29, a2, (int)a3);
  v17 = _mm_mul_ps(_mm_sub_ps(v39[0], v37), v38[0]);
  v18 = _mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0];
  v19 = _mm_shuffle_ps(v17, v17, 0xAA);
  v29 = v39[0];
  v20 = v19;
  v20.m128_f32[0] = v19.m128_f32[0] + v18;
  v30 = _mm_add_ps(v37, _mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), v38[0]));
  v31 = v38[1];
  sub_8F1790(&v29, a2, (__m128 **)a3);
  v31 = _mm_sub_ps(
          _mm_mul_ps(_mm_shuffle_ps(v38[0], v38[0], 0xC9), _mm_shuffle_ps(v31, v31, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v38[0], v38[0], 0xD2), _mm_shuffle_ps(v31, v31, 0xC9)));
  sub_8F1790(&v29, a2, (__m128 **)a3);
  v21 = *((_DWORD *)this + 0x24);
  v22 = *((_DWORD *)this + 0x25);
  v29 = v39[0];
  v30 = v37;
  v32 = v21;
  v33 = v22;
  v31 = v38[0];
  sub_8F1970(&v29, a2, a3);
  v28 = *(_DWORD *)(a2 + 0x28);
  if ( this->m128_i32[3] )
  {
    v27 = (__m128 *)*a3;
    v35.m128_u64[0] = 0;
    sub_8F1190(v38, v39, a2, v27, v34.m128_f32);
    v23 = *(_DWORD *)(v28 + 0x30);
    v35.m128_i32[1] = *(_DWORD *)(v28 + 0x34);
    v24 = *((_DWORD *)this + 0x27);
    v25 = this->m128_i32[3];
    v35.m128_i32[2] = v28 + 0x38;
    v34.m128_u64[1] = __PAIR64__(a2, v24);
    v35.m128_i32[0] = v23;
    v34.m128_f32[1] = v19.m128_f32[0] + v18;
    (*(void (__thiscall **)(__int32, __m128 *, __m128 *))(*(_DWORD *)v25 + 8))(v25, &v34, &v29);
    sub_8F1010((int)&v29, (float *)a2, a3);
  }
  else if ( *((float *)this + 0x26) > (double)*(float *)&SrcStr )
  {
    v26 = *((_DWORD *)this + 0x26);
    v31.m128_i32[1] = *(_DWORD *)(a2 + 0x28) + 0x30;
    v29 = v39[0];
    v30 = v38[0];
    v31.m128_i32[0] = v26;
    sub_8F15F0(&v29, a2, (__m128 **)a3);
  }
}
