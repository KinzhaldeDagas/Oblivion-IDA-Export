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
  _BYTE a1[48]; // [esp+254h] [ebp-260h] BYREF
  char v46; // [esp+284h] [ebp-230h] BYREF
  unsigned int v47; // [esp+4B0h] [ebp-4h]

  v2 = this->m128_i32[2];
  v19 = this;
  if ( v2 )
    v3 = *(_DWORD *)(v2 + 0x2B0);
  else
    v3 = 0;
  if ( v3 )
  {
    v21 = _mm_shuffle_ps(*(this + 8), *(this + 8), 0xAA).m128_f32[0]
        - _mm_shuffle_ps(*(this + 7), *(this + 7), 0xAA).m128_f32[0];
    v22 = *(_DWORD *)(this + 3) & 0xFFFFFFC0 | 0x1B;
    if ( flt_A96318 > (double)v21 )
      v21 = flt_A96318;
    v24.m128_f32[0] = 0.0;
    v24.m128_f32[1] = 0.0;
    v24.m128_f32[2] = v21 * dbl_A3F400;
    v24.m128_f32[3] = 0.0;
    ArrayConstructor(a1, 0x40u, 9, (int)sub_535980, (void (__thiscall *)(void *))sub_4F5E90);
    v47 = 0;
    v28 = 0;
    v30 = 0;
    v32 = 0;
    v34 = 0;
    v36 = 0;
    v38 = 0;
    v40 = 0;
    v42 = 0;
    v44 = 0;
    v27[0x20] = 0;
    v29 = 0;
    v31 = 0;
    v33 = 0;
    v35 = 0;
    v37 = 0;
    v39 = 0;
    v41 = 0;
    v43 = 0;
    v4 = (__m128 *)v27;
    v5 = (unsigned __int8 *)&unk_B2E555;
    do
    {
      sub_88D5E0(v19, &v25, v5[0xFFFFFFFF], 0, *v5);
      v6 = v25;
      v7 = _mm_add_ps(v24, v25);
      v4[2].m128_i32[1] = v22;
      *v4 = v6;
      v4[1] = v7;
      v5 += 2;
      v4 += 3;
    }
    while ( (int)v5 < (int)&unk_B2E567 );
    v26[0] = &hkWorldRayCaster::`vftable';
    v26[0x10] = 0;
    v26[0x11] = 0;
    v8 = *(void (__thiscall **)(int))(*(_DWORD *)v3 + 0x58);
    LOBYTE(v47) = 1;
    v8(v3);
    v9 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x58))(v3) + 0x78);
    v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x58))(v3);
    sub_8BA2C0(v26, *(int **)(v10 + 0x64), (int)v27, 9, v9, (int)a1, 0x40);
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 0x58))(v3);
    v11 = (__m128 *)v27;
    v12 = (float *)&v46;
    v13 = &v19[0xB].m128_f32[2];
    v20 = 9;
    do
    {
      v14 = *v12;
      v15 = *(_DWORD *)v12 != 0;
      if ( *(_DWORD *)v12 )
      {
        v16 = v12[0xFFFFFFFD];
        v23 = _mm_shuffle_ps(*v11, *v11, 0xAA).m128_f32[0];
        v17 = _mm_shuffle_ps(v24, v24, 0xAA).m128_f32[0];
        v25.m128_f32[0] = v17;
        v13[0xFFFFFFFF] = v14;
        v18 = v16 * v17 + v23;
      }
      else
      {
        v18 = flt_A6D2D8;
        v13[0xFFFFFFFF] = 0.0;
      }
      *v13 = v18;
      sub_8A78E0((LPCRITICAL_SECTION *)dword_BA7DA0, (int)v11, (int)&v11[1], v15 ? 0xFFFF0000 : 0xFF808080, 0);
      v13 += 2;
      v12 += 0x10;
      v11 += 3;
      --v20;
    }
    while ( v20 );
    v26[0] = &hkBroadPhaseCastCollector::`vftable';
    v47 = 0xFFFFFFFF;
    _LN21(a1, 0x40u, 9, (void (__thiscall *)(void *))sub_4F5E90);
  }
}
