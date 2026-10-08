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

  sub_8F0F70(a2, a3, *(_DWORD *)(a2 + 0x28), 8); /*0x9119bf*/
  v4 = *(__m128 **)(a2 + 0x1C); /*0x9119c4*/
  v5 = *v4; /*0x9119c7*/
  v6 = v4[1]; /*0x9119ca*/
  v7 = v4[2]; /*0x9119ce*/
  v8 = this + 1; /*0x9119d2*/
  v9 = 5; /*0x9119e1*/
  do /*0x911a1e*/
  {
    *(__m128 *)((char *)v8 + (char *)v39 - (char *)(this + 1)) = _mm_add_ps( /*0x911a16*/
                                                                   _mm_add_ps(
                                                                     _mm_mul_ps(v5, _mm_shuffle_ps(*v8, *v8, 0)),
                                                                     _mm_mul_ps(v6, _mm_shuffle_ps(*v8, *v8, 0x55))),
                                                                   _mm_mul_ps(v7, _mm_shuffle_ps(*v8, *v8, 0xAA)));
    ++v8; /*0x911a1a*/
    --v9; /*0x911a1d*/
  }
  while ( v9 ); /*0x911a1e*/
  v10 = *(__m128 **)(a2 + 0x20); /*0x911a2c*/
  v39[0] = _mm_add_ps(v39[0], v4[3]); /*0x911a32*/
  v11 = *v10; /*0x911a3a*/
  v12 = v10[1]; /*0x911a3d*/
  v13 = v10[2]; /*0x911a41*/
  v14 = this + 6; /*0x911a45*/
  v15 = 3; /*0x911a51*/
  do /*0x911a8e*/
  {
    *(__m128 *)((char *)v14 + (char *)&v37 - (char *)(this + 6)) = _mm_add_ps( /*0x911a86*/
                                                                     _mm_add_ps(
                                                                       _mm_mul_ps(v11, _mm_shuffle_ps(*v14, *v14, 0)),
                                                                       _mm_mul_ps(v12, _mm_shuffle_ps(*v14, *v14, 0x55))),
                                                                     _mm_mul_ps(v13, _mm_shuffle_ps(*v14, *v14, 0xAA)));
    ++v14; /*0x911a8a*/
    --v15; /*0x911a8d*/
  }
  while ( v15 ); /*0x911a8e*/
  v16 = _mm_add_ps(v37, v10[3]); /*0x911a9f*/
  v34 = v39[2]; /*0x911aab*/
  v37 = v16; /*0x911ab0*/
  v36 = v10[1]; /*0x911ac0*/
  v35 = v39[4]; /*0x911ad2*/
  sub_8F1310(&v34, a2, (int)a3); /*0x911ad7*/
  v29 = v39[3]; /*0x911ae8*/
  v31 = v10[2]; /*0x911af5*/
  v30 = v34; /*0x911b01*/
  sub_8F1310(&v29, a2, (int)a3); /*0x911b06*/
  v30 = v29; /*0x911b10*/
  v29 = v35; /*0x911b1d*/
  v31 = *v10; /*0x911b2f*/
  sub_8F1310(&v29, a2, (int)a3); /*0x911b34*/
  v17 = _mm_mul_ps(_mm_sub_ps(v39[0], v37), v38[0]); /*0x911b57*/
  v18 = _mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0]; /*0x911b64*/
  v19 = _mm_shuffle_ps(v17, v17, 0xAA); /*0x911b68*/
  v29 = v39[0]; /*0x911b6c*/
  v20 = v19; /*0x911b71*/
  v20.m128_f32[0] = v19.m128_f32[0] + v18; /*0x911b74*/
  v30 = _mm_add_ps(v37, _mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), v38[0])); /*0x911b9c*/
  v31 = v38[1]; /*0x911ba1*/
  sub_8F1790(&v29, a2, (__m128 **)a3); /*0x911ba6*/
  v31 = _mm_sub_ps( /*0x911be7*/
          _mm_mul_ps(_mm_shuffle_ps(v38[0], v38[0], 0xC9), _mm_shuffle_ps(v31, v31, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v38[0], v38[0], 0xD2), _mm_shuffle_ps(v31, v31, 0xC9)));
  sub_8F1790(&v29, a2, (__m128 **)a3); /*0x911bec*/
  v21 = *((_DWORD *)this + 0x24); /*0x911bf9*/
  v22 = *((_DWORD *)this + 0x25); /*0x911bff*/
  v29 = v39[0]; /*0x911c05*/
  v30 = v37; /*0x911c17*/
  v32 = v21; /*0x911c26*/
  v33 = v22; /*0x911c2d*/
  v31 = v38[0]; /*0x911c34*/
  sub_8F1970(&v29, a2, a3); /*0x911c3c*/
  v28 = *(_DWORD *)(a2 + 0x28); /*0x911c4c*/
  if ( this->m128_i32[3] ) /*0x911c41*/
  {
    v27 = (__m128 *)*a3; /*0x911c5d*/
    v35.m128_u64[0] = 0; /*0x911c6f*/
    sub_8F1190(v38, v39, a2, v27, v34.m128_f32); /*0x911c85*/
    v23 = *(_DWORD *)(v28 + 0x30); /*0x911c8e*/
    v35.m128_i32[1] = *(_DWORD *)(v28 + 0x34); /*0x911c94*/
    v24 = *((_DWORD *)this + 0x27); /*0x911c9b*/
    v25 = this->m128_i32[3]; /*0x911ca1*/
    v35.m128_i32[2] = v28 + 0x38; /*0x911ca7*/
    v34.m128_u64[1] = __PAIR64__(a2, v24); /*0x911cb1*/
    v35.m128_i32[0] = v23; /*0x911cb5*/
    v34.m128_f32[1] = v19.m128_f32[0] + v18; /*0x911cca*/
    (*(void (__thiscall **)(__int32, __m128 *, __m128 *))(*(_DWORD *)v25 + 8))(v25, &v34, &v29); /*0x911cd3*/
    sub_8F1010((int)&v29, (float *)a2, a3); /*0x911cdd*/
  }
  else if ( *((float *)this + 0x26) > (double)*(float *)&SrcStr ) /*0x911cff*/
  {
    v26 = *((_DWORD *)this + 0x26); /*0x911d09*/
    v31.m128_i32[1] = *(_DWORD *)(a2 + 0x28) + 0x30; /*0x911d13*/
    v29 = v39[0]; /*0x911d1b*/
    v30 = v38[0]; /*0x911d2a*/
    v31.m128_i32[0] = v26; /*0x911d2f*/
    sub_8F15F0(&v29, a2, (__m128 **)a3); /*0x911d33*/
  }
}
