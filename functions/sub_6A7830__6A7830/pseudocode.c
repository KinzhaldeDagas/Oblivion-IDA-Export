void __thiscall sub_6A7830(float *this)
{
  UInt32 unk574; // eax
  int v3; // eax
  int v4; // esi
  int *v5; // esi
  double v6; // rt1
  int v7; // eax
  double v8; // st7
  __m128 v9; // xmm0
  int v10; // esi
  float v11; // [esp+18h] [ebp-54h]
  float v12; // [esp+18h] [ebp-54h]
  float v13; // [esp+1Ch] [ebp-50h]
  float v14; // [esp+20h] [ebp-4Ch]
  float v15; // [esp+24h] [ebp-48h]
  float v16[9]; // [esp+28h] [ebp-44h] BYREF
  __m128 v17; // [esp+4Ch] [ebp-20h] BYREF

  unk574 = TESDataHandler_g_PlayerRef->unk574;
  if ( unk574 )
  {
    v3 = *(_DWORD *)(unk574 + 8);
    if ( v3 )
      v4 = *(_DWORD *)(v3 + 0x18);
    else
      v4 = 0;
    sub_66A670((TESObjectREFR *)TESDataHandler_g_PlayerRef);
    if ( v4 )
    {
      v5 = *(int **)(v4 + 0xC);
      if ( *((_BYTE *)this + 0x4C) )
      {
        sub_7117C0(
          v16,
          TESDataHandler_g_PlayerRef->super.super.super.super.rot.z,
          TESDataHandler_g_PlayerRef->super.super.super.super.rot.x,
          TESDataHandler_g_PlayerRef->super.super.super.super.rot.y);
        v11 = *(this + 0x11) + fMagicTelekinesisThrow;
        v13 = v16[1] * v11;
        v14 = v16[4] * v11;
        v15 = v11 * v16[7];
        v6 = hkFactor;
        v17.m128_f32[0] = v13 * v6;
        v17.m128_f32[1] = v14 * v6;
        v17.m128_f32[2] = v6 * v15;
        if ( v5 && (v7 = v5[2]) != 0 )
          v8 = sub_89DA90((float *)*(_DWORD *)(v7 + 0x50));
        else
          v8 = 0.0;
        v12 = v8;
        v9 = 0;
        v9.m128_f32[0] = v12;
        v17 = _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), v17);
        if ( v5 )
          v10 = v5[2];
        else
          v10 = 0;
        sub_8A6410(v10);
        (*(void (__thiscall **)(_DWORD, __m128 *))(**(_DWORD **)(v10 + 0x50) + 0x5C))(*(_DWORD *)(v10 + 0x50), &v17);
      }
      else
      {
        sub_4D9960(v5, &Vector3_InitValue_);
      }
    }
  }
}
