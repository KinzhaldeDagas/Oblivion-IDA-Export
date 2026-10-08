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
  __m128 v26; // [esp+A4h] [ebp-B0h] BYREF
  __m128 v27; // [esp+B4h] [ebp-A0h] BYREF
  __m128 v28; // [esp+C4h] [ebp-90h] BYREF
  __m128 v29[2]; // [esp+D4h] [ebp-80h] BYREF
  _QWORD v30[3]; // [esp+FCh] [ebp-58h] BYREF
  float v31[15]; // [esp+114h] [ebp-40h] BYREF

  v19 = flt_B2E2E0; /*0x88f3f2*/
  v2 = Shared_GetPointerAtOffset08(this); /*0x88f3f9*/
  unk10 = (int *)this->unk10; /*0x88f406*/
  v21 = v2; /*0x88f409*/
  v16 = BYTE1(this->fogProperty) & 1; /*0x88f416*/
  v4 = 1; /*0x88f41a*/
  if ( 0.0 == *(float *)&this->Quad ) /*0x88f422*/
  {
    if ( unk_BA7A8C == 1 ) /*0x88f42a*/
      return; /*0x88f42a*/
    v17 = 0.0 == *(float *)&this->unk18 || (BYTE1(this->fogProperty) & 1) != 0; /*0x88f448*/
  }
  else
  {
    if ( 1.0 == *(float *)&this->Quad ) /*0x88f45a*/
    {
      v5 = 2; /*0x88f45c*/
      if ( unk_BA7A8C == 2 ) /*0x88f467*/
        return; /*0x88f467*/
      v4 = 6; /*0x88f46d*/
    }
    else
    {
      v5 = unk_BA7A8C == 2; /*0x88f47d*/
    }
    v17 = v5; /*0x88f480*/
  }
  v6 = *((_DWORD *)this + 7); /*0x88f484*/
  v15 = 0; /*0x88f489*/
  if ( v6 != v4 ) /*0x88f48e*/
  {
    if ( v6 == 6 ) /*0x88f493*/
    {
      ((void (__thiscall *)(Atmosphere *))this->__vftbl[8].func_03)(this); /*0x88f49c*/
    }
    else if ( unk10 ) /*0x88f4a2*/
    {
      sub_4D6AF0(unk10, (int)&unk_BA7A40); /*0x88f4ab*/
      sub_4D6B30(unk10, (int)&unk_BA7A40); /*0x88f4b7*/
    }
    sub_89ED20(this, v4, (int)unk10); /*0x88f4c0*/
    *((_DWORD *)this + 7) = v4; /*0x88f4c5*/
    v15 = 1; /*0x88f4c8*/
  }
  if ( v17 ) /*0x88f4d4*/
  {
    if ( v17 ) /*0x88f4d9*/
      sub_89EA70(this); /*0x88f4f4*/
    else
      ((void (__thiscall *)(Atmosphere *))this->__vftbl[8].func_03)(this); /*0x88f4eb*/
  }
  else
  {
    qmemcpy(v22, &v21->members.m_worldTransform, sizeof(v22)); /*0x88f50e*/
    v7 = hkFactor; /*0x88f51c*/
    v23.m128_f32[0] = v22[9] * v7; /*0x88f51e*/
    v23.m128_f32[1] = v22[0xA] * v7; /*0x88f528*/
    v23.m128_f32[2] = v7 * v22[0xB]; /*0x88f53d*/
    sub_539850(v31, v22); /*0x88f541*/
    sub_8B1B40(v28.m128_f32, v31); /*0x88f558*/
    (*(void (__thiscall **)(int *, __m128 *))(*unk10 + 0x8C))(unk10, &v27); /*0x88f573*/
    (*(void (__thiscall **)(int *, __m128 *))(*unk10 + 0x90))(unk10, &v26); /*0x88f587*/
    v8 = 0; /*0x88f59a*/
    Quad = this->Quad; /*0x88f59d*/
    v8.m128_f32[0] = *(float *)&Quad; /*0x88f5a0*/
    v9 = _mm_shuffle_ps(v8, v8, 0); /*0x88f5ab*/
    v25 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v9), v27), _mm_mul_ps(v23, v9)); /*0x88f5d4*/
    sub_8B1C60(&v24, &v26, &v28, *(float *)&Quad); /*0x88f5dc*/
    hkQuaternion_Normalize(&v24); /*0x88f5e5*/
    v10 = &v25; /*0x88f5ef*/
    if ( !v16 ) /*0x88f5f6*/
      v10 = &v23; /*0x88f5f8*/
    *(__m128 *)&v30[1] = *v10; /*0x88f60b*/
    hkMatrix3_SetFromQuaternion(v29[0].m128_f32, v24.m128_f32); /*0x88f613*/
    sub_607740((int)v22, v29); /*0x88f625*/
    HavokVector_ToWorldVector(&v22[9], (__m128 *)&v30[1]); /*0x88f637*/
    if ( !unk_BA7A8C ) /*0x88f63f*/
      ((void (__thiscall *)(Atmosphere *, float *))this->__vftbl[0xA].GetObjectNode)(this, v22); /*0x88f654*/
    if ( v19 == 0.0 ) /*0x88f665*/
      v11 = 1.0; /*0x88f66f*/
    else
      v11 = 1.0 / v19; /*0x88f669*/
    v20 = v11; /*0x88f676*/
    if ( v16 ) /*0x88f67a*/
      v12 = 1.0; /*0x88f67c*/
    else
      v12 = *(float *)&this->unk18; /*0x88f680*/
    v18 = v12; /*0x88f683*/
    sub_8A34C0(unk10, &v25, &v24, v20, v18); /*0x88f6a8*/
  }
  if ( v15 ) /*0x88f6b2*/
  {
    v13 = *((_DWORD *)this + 8); /*0x88f6b4*/
    if ( v13 ) /*0x88f6b9*/
    {
      if ( !*(_DWORD *)(v13 + 0x1C) ) /*0x88f6bb*/
        sub_88F0A0(this); /*0x88f6c3*/
    }
  }
}
