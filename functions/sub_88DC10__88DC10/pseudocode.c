void __thiscall sub_88DC10(__m128 *this)
{
  __int32 v2; // ecx
  int v3; // ebx
  __m128 *v4; // edi
  unsigned __int8 *v5; // esi
  __m128 v6; // xmm0
  __m128 v7; // xmm1
  void (__thiscall *v8)(int); // edx
  int v9; // esi
  int v10; // eax
  __m128 *v11; // esi
  float *v12; // edi
  float *v13; // ebx
  float v14; // ecx
  bool v15; // al
  double v16; // st7
  float v17; // xmm0_4
  double v18; // st7
  __m128 *v19; // [esp+18h] [ebp-49Ch]
  int v20; // [esp+18h] [ebp-49Ch]
  float v21; // [esp+1Ch] [ebp-498h]
  unsigned int v22; // [esp+20h] [ebp-494h]
  float v23; // [esp+24h] [ebp-490h]
  __m128 v24; // [esp+34h] [ebp-480h]
  __m128 v25; // [esp+44h] [ebp-470h] BYREF
  _DWORD v26[20]; // [esp+54h] [ebp-460h] BYREF
  _BYTE v27[36]; // [esp+A4h] [ebp-410h] BYREF
  int v28; // [esp+C8h] [ebp-3ECh]
  char v29; // [esp+F4h] [ebp-3C0h]
  int v30; // [esp+F8h] [ebp-3BCh]
  char v31; // [esp+124h] [ebp-390h]
  int v32; // [esp+128h] [ebp-38Ch]
  char v33; // [esp+154h] [ebp-360h]
  int v34; // [esp+158h] [ebp-35Ch]
  char v35; // [esp+184h] [ebp-330h]
  int v36; // [esp+188h] [ebp-32Ch]
  char v37; // [esp+1B4h] [ebp-300h]
  int v38; // [esp+1B8h] [ebp-2FCh]
  char v39; // [esp+1E4h] [ebp-2D0h]
  int v40; // [esp+1E8h] [ebp-2CCh]
  char v41; // [esp+214h] [ebp-2A0h]
  int v42; // [esp+218h] [ebp-29Ch]
  char v43; // [esp+244h] [ebp-270h]
  int v44; // [esp+248h] [ebp-26Ch]
  char a1[48]; // [esp+254h] [ebp-260h] BYREF
  char v46; // [esp+284h] [ebp-230h] BYREF
  unsigned int v47; // [esp+4B0h] [ebp-4h]

  v2 = this->m128_i32[2]; /*0x88dc52*/
  v19 = this; /*0x88dc59*/
  if ( v2 ) /*0x88dc5d*/
    v3 = *(_DWORD *)(v2 + 0x2B0); /*0x88dc5f*/
  else
    v3 = 0; /*0x88dc67*/
  if ( v3 )
  {
    v21 = _mm_shuffle_ps(*(this + 8), *(this + 8), 0xAA).m128_f32[0] /*0x88dc95*/
        - _mm_shuffle_ps(*(this + 7), *(this + 7), 0xAA).m128_f32[0];
    v22 = *(_DWORD *)(this + 3) & 0xFFFFFFC0 | 0x1B; /*0x88dca7*/
    if ( flt_A96318 > (double)v21 ) /*0x88dcb2*/
      v21 = flt_A96318; /*0x88dcb4*/
    v24.m128_f32[0] = 0.0; /*0x88dcc3*/
    v24.m128_f32[1] = 0.0; /*0x88dccc*/
    v24.m128_f32[2] = v21 * kFaceGenPolarNegativeTwo; /*0x88dce6*/
    v24.m128_f32[3] = 0.0; /*0x88dcea*/
    ArrayConstructor(a1, 0x40u, 9, (void (__thiscall *)(char *))sub_535980, (void (__thiscall *)(void *))sub_4F5E90); /*0x88dcee*/
    v47 = 0; /*0x88dcf8*/
    v28 = 0; /*0x88dcff*/
    v30 = 0; /*0x88dd06*/
    v32 = 0; /*0x88dd0d*/
    v34 = 0; /*0x88dd14*/
    v36 = 0; /*0x88dd1b*/
    v38 = 0; /*0x88dd22*/
    v40 = 0; /*0x88dd29*/
    v42 = 0; /*0x88dd30*/
    v44 = 0; /*0x88dd37*/
    v27[0x20] = 0; /*0x88dd3e*/
    v29 = 0; /*0x88dd46*/
    v31 = 0; /*0x88dd4e*/
    v33 = 0; /*0x88dd56*/
    v35 = 0; /*0x88dd5e*/
    v37 = 0; /*0x88dd66*/
    v39 = 0; /*0x88dd6e*/
    v41 = 0; /*0x88dd76*/
    v43 = 0; /*0x88dd7e*/
    v4 = (__m128 *)v27; /*0x88dd86*/
    v5 = (unsigned __int8 *)&unk_B2E555; /*0x88dd8d*/
    do /*0x88ddd2*/
    {
      sub_88D5E0(v19, &v25, v5[0xFFFFFFFF], 0, *v5); /*0x88dda8*/
      v6 = v25; /*0x88ddad*/
      v7 = _mm_add_ps(v24, v25); /*0x88ddb9*/
      v4[2].m128_i32[1] = v22; /*0x88ddbc*/
      *v4 = v6; /*0x88ddbf*/
      v4[1] = v7; /*0x88ddc2*/
      v5 += 2; /*0x88ddc6*/
      v4 += 3; /*0x88ddc9*/
    }
    while ( (int)v5 < (int)&unk_B2E567 ); /*0x88ddd2*/
    v26[0] = &hkWorldRayCaster::`vftable'; /*0x88ddd6*/
    v26[0x10] = 0; /*0x88ddde*/
    v26[0x11] = 0; /*0x88dde5*/
    v8 = *(void (__thiscall **)(int))(*(_DWORD *)v3 + 0x58); /*0x88ddee*/
    LOBYTE(v47) = 1; /*0x88ddf3*/
    v8(v3); /*0x88ddfb*/
    v9 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x58))(v3) + 0x78); /*0x88de06*/
    v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x58))(v3); /*0x88de10*/
    sub_8BA2C0(v26, *(int **)(v10 + 0x64), (int)v27, 9, v9, (int)a1, 0x40); /*0x88de2f*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 0x58))(v3); /*0x88de3b*/
    v11 = (__m128 *)v27; /*0x88de41*/
    v12 = (float *)&v46; /*0x88de48*/
    v13 = &v19[0xB].m128_f32[2]; /*0x88de4f*/
    v20 = 9; /*0x88de55*/
    do
    {
      v14 = *v12; /*0x88de5d*/
      v15 = *(_DWORD *)v12 != 0; /*0x88de61*/
      if ( *(_DWORD *)v12 ) /*0x88de5d*/
      {
        v16 = v12[0xFFFFFFFD]; /*0x88de6b*/
        v23 = _mm_shuffle_ps(*v11, *v11, 0xAA).m128_f32[0]; /*0x88de72*/
        v17 = _mm_shuffle_ps(v24, v24, 0xAA).m128_f32[0]; /*0x88de7d*/
        v25.m128_f32[0] = v17; /*0x88de81*/
        v13[0xFFFFFFFF] = v14; /*0x88de8b*/
        v18 = v16 * v17 + v23; /*0x88de8e*/
      }
      else
      {
        v18 = flt_A6D2D8; /*0x88de94*/
        v13[0xFFFFFFFF] = 0.0; /*0x88de9a*/
      }
      *v13 = v18; /*0x88dea3*/
      sub_8A78E0((LPCRITICAL_SECTION *)unk_BA7DA0, (int)v11, (int)&v11[1], v15 ? 0xFFFF0000 : 0xFF808080, 0);
      v13 += 2; /*0x88dec4*/
      v12 += 0x10; /*0x88dec7*/
      v11 += 3; /*0x88deca*/
      --v20; /*0x88decd*/
    }
    while ( v20 );
    v26[0] = &hkBroadPhaseCastCollector::`vftable'; /*0x88dee5*/
    v47 = 0xFFFFFFFF; /*0x88deed*/
    _LN21(a1, 0x40u, 9, (void (__thiscall *)(void *))sub_4F5E90); /*0x88def8*/
  }
}
