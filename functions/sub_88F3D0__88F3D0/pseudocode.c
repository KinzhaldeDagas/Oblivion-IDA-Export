void __thiscall sub_88F3D0(Atmosphere *this)
{
  NiAVObject *v2; // eax
  int *unk10; // edi
  int v4; // esi
  int v5; // eax
  int v6; // eax
  double v7; // rt0
  __m128 v8; // xmm0
  __m128 v9; // xmm0
  __m128 *v10; // eax
  double v11; // st7
  double v12; // st7
  int v13; // eax
  NiNode *Quad; // [esp+10h] [ebp-144h]
  char v15; // [esp+2Eh] [ebp-126h]
  char v16; // [esp+2Fh] [ebp-125h]
  BOOL v17; // [esp+30h] [ebp-124h]
  float v18; // [esp+30h] [ebp-124h]
  float v19; // [esp+34h] [ebp-120h]
  float v20; // [esp+34h] [ebp-120h]
  NiAVObject *v21; // [esp+38h] [ebp-11Ch]
  float v22[13]; // [esp+40h] [ebp-114h] BYREF
  __m128 v23; // [esp+74h] [ebp-E0h] BYREF
  __m128 v24; // [esp+84h] [ebp-D0h] BYREF
  __m128 v25; // [esp+94h] [ebp-C0h] BYREF
  int v26[4]; // [esp+A4h] [ebp-B0h] BYREF
  __m128 v27; // [esp+B4h] [ebp-A0h] BYREF
  int v28[4]; // [esp+C4h] [ebp-90h] BYREF
  __m128 v29[2]; // [esp+D4h] [ebp-80h] BYREF
  _QWORD v30[3]; // [esp+FCh] [ebp-58h] BYREF
  float v31[15]; // [esp+114h] [ebp-40h] BYREF

  v19 = flt_B2E2E0;
  v2 = sub_452A60(this);
  unk10 = (int *)this->unk10;
  v21 = v2;
  v16 = BYTE1(this->fogProperty) & 1;
  v4 = 1;
  if ( 0.0 == *(float *)&this->Quad )
  {
    if ( dword_BA7A8C == 1 )
      return;
    v17 = 0.0 == *(float *)&this->unk18 || (BYTE1(this->fogProperty) & 1) != 0;
  }
  else
  {
    if ( 1.0 == *(float *)&this->Quad )
    {
      v5 = 2;
      if ( dword_BA7A8C == 2 )
        return;
      v4 = 6;
    }
    else
    {
      v5 = dword_BA7A8C == 2;
    }
    v17 = v5;
  }
  v6 = *((_DWORD *)this + 7);
  v15 = 0;
  if ( v6 != v4 )
  {
    if ( v6 == 6 )
    {
      ((void (__thiscall *)(Atmosphere *))this->__vftbl[8].func_03)(this);
    }
    else if ( unk10 )
    {
      sub_4D6AF0(unk10, (int)&stru_BA7A40);
      sub_4D6B30(unk10, (int)&stru_BA7A40);
    }
    sub_89ED20(this, v4, (int)unk10);
    *((_DWORD *)this + 7) = v4;
    v15 = 1;
  }
  if ( v17 )
  {
    if ( v17 )
      sub_89EA70(this);
    else
      ((void (__thiscall *)(Atmosphere *))this->__vftbl[8].func_03)(this);
  }
  else
  {
    qmemcpy(v22, &v21->members.m_worldTransform, sizeof(v22));
    v7 = hkFactor;
    v23.m128_f32[0] = v22[9] * v7;
    v23.m128_f32[1] = v22[0xA] * v7;
    v23.m128_f32[2] = v7 * v22[0xB];
    sub_539850(v31, v22);
    sub_8B1B40((float *)v28, v31);
    (*(void (__thiscall **)(int *, __m128 *))(*unk10 + 0x8C))(unk10, &v27);
    (*(void (__thiscall **)(int *, int *))(*unk10 + 0x90))(unk10, v26);
    v8 = 0;
    Quad = this->Quad;
    v8.m128_f32[0] = *(float *)&Quad;
    v9 = _mm_shuffle_ps(v8, v8, 0);
    v25 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v9), v27), _mm_mul_ps(v23, v9));
    sub_8B1C60(&v24, (int)v26, (int)v28, *(float *)&Quad);
    sub_4D6830(&v24);
    v10 = &v25;
    if ( !v16 )
      v10 = &v23;
    *(__m128 *)&v30[1] = *v10;
    sub_8B1DD0(v29[0].m128_f32, v24.m128_f32);
    sub_607740((int)v22, v29);
    sub_43F3E0(&v22[9], (__m128 *)&v30[1]);
    if ( !dword_BA7A8C )
      ((void (__thiscall *)(Atmosphere *, float *))this->__vftbl[0xA].GetObjectNode)(this, v22);
    if ( v19 == 0.0 )
      v11 = 1.0;
    else
      v11 = 1.0 / v19;
    v20 = v11;
    if ( v16 )
      v12 = 1.0;
    else
      v12 = *(float *)&this->unk18;
    v18 = v12;
    sub_8A34C0(unk10, &v25, &v24, v20, v18);
  }
  if ( v15 )
  {
    v13 = *((_DWORD *)this + 8);
    if ( v13 )
    {
      if ( !*(_DWORD *)(v13 + 0x1C) )
        sub_88F0A0(this);
    }
  }
}
